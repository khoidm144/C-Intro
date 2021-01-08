#include <stdio.h>
#include <string.h>
typedef struct
{
	char ID;
	char team[4][20];
	int point[4];
	int goals[4];

} group;
void clear()
{
	char c;
	while (c = getchar() != '\n')
		;
}
int checkDup(char c, group a[], int n)
{
	if (n == 0)
		return 1;
	for (int i = 0; i < n; i++)
	{
		if (c == a[i].ID)
		{
			return 0;
		}
	}
	return 1;
}
int checkTeam(char s[], group a[], int n)
{
	if (n == 0)
	{
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (strcmp(s, a[i].team[j]) == 0)
			{
				//printf("%s %s",s,a[i].team[j]);
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int sum = 0;
	group groups[8];
	while (1)
	{
		int n;
		int flag1 = 0;
		int flag2 = 0;
		int choice;
		int cur = 0;
		printf("Bang chon chuc nang: \n");
		printf("1.Bo sung bang dau: \n");
		printf("2.In tat ca thong tin cua bang dau: \n");
		printf("3.Tim kiem thong tin cua mot doi bong: \n");
		printf("4.Nhap thong tin ket qua cua mot doi bong :\n");
		printf("5.Sap xep thu tu trong moi bang va in ra man hinh:\n");
		printf("6.Thoat chuong trinh. \n");
		do
		{
			printf("Moi nhap vao chuc nang can dung:");
			scanf("%d", &choice);
			clear();
		} while (choice > 6 || choice < 1);

		switch (choice)
		{
		case 1:
		{
			cur = sum;
			do
			{
				flag1 = 0;
				flag2 = 0;
				printf("Nhap vao so bang dau can nhap:");
				scanf("%d", &n);
				clear();
				if (n < 0)
				{
					printf("Nhap sai ! N>=0");
					flag1 = 1;
				}
				else if (sum + n > 8)
				{
					printf("Nhap sai ! vuot qua so bang cho phep");
					flag2 = 1;
				}
			} while (flag1 == 1 || flag2 == 1);
			if (n == 0)
			{
				break;
			}
			for (int i = 0; i < n; i++)
			{
				do
				{
					printf("Nhap vao ten bang dau:");
					scanf("%c", &groups[i + sum].ID);
					clear();
					if (checkDup(groups[i + sum].ID, groups, cur) == 0)
					{
						printf("Trung ten bang dau\n");
					}

				} while (groups[i + sum].ID > 'Z' || groups[i + sum].ID < 'A' || checkDup(groups[i + sum].ID, groups, cur) == 0);

				// printf("%d\n",sum);
				for (int j = 0; j < 4; j++)
				{
					int c;
					do
					{
						c = 1;
						printf("Nhap vao ten doi bong: ");
						scanf("%[^\n]%*c", groups[i + sum].team[j]);
						c = checkTeam(groups[i + sum].team[j], groups, cur);
						if (c == 0)
						{
							printf("Trung ten doi !\n");
						}
					} while (c == 0);
					do
					{
						printf("Nhap vao so diem:");
						scanf("%d%*c", &groups[i + sum].point[j]);
						//	printf("%d", groups[i + sum].point[j]);

					} while (groups[i].point[j] < 0);
					printf("Nhap vao hieu so:");
					scanf("%d%*c", &groups[i + sum].goals[j]);
				}

				cur++;
			}
			sum = sum + n;

			break;
		}
		case 2:
		{
			for (int i = 0; i < sum; i++)
			{
				printf("Group %c\n", groups[i].ID);
				printf("Team                Point     Goal\n");
				for (int j = 0; j < 4; j++)
				{
					printf("%-20s%-10d%-10d\n", groups[i].team[j], groups[i].point[j], groups[i].goals[j]);
				}
			}
			break;
		}
		case 3:
		{
			char s[20];
			printf("Nhap vao ten doi: ");
			scanf("%[^\n]%*c", s);
			if (checkTeam(s, groups, sum) != 0)
			{
				printf("No result");
				break;
			}
			for (int i = 0; i < sum; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (strcmp(s, groups[i].team[j]) == 0)
					{
						printf("Group %c, %d Point, %d Goal\n", groups[i].ID, groups[i].point[j], groups[i].goals[j]);
						break;
					}
				}
			}

			break;
		}
		case 4:
		{
			char a[20];
			char b[20];
			int first, second;
			do
			{
				scanf("%s %s %d %d", a, b, &first, &second);
				clear();
				//	printf("%s %s %d %d", a, b, first, second);
				if (first < 0 || second < 0)
				{
					printf("Goal must be >=0");
				}
			} while (first < 0 || second < 0);
			if (checkTeam(a, groups, sum) != 0)
			{
				printf("No result");
				break;
			}
			if (checkTeam(b, groups, sum) != 0)
			{
				printf("No result");
				break;
			}
			char temp1, temp2, i1, i2, j1, j2;
			for (int i = 0; i < sum; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (strcmp(a, groups[i].team[j]) == 0)
					{
						puts(a);
						puts(groups[i].team[j]);
						temp1 = groups[i].ID;
						i1 = i;
						j1 = j;
						break;
					}
				}
			}
			for (int i = 0; i < sum; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (strcmp(b, groups[i].team[j]) == 0)
					{
						temp2 = groups[i].ID;
						i2 = i;
						j2 = j;
						break;
					}
				}
			}
			if (temp1 != temp2)
			{
				printf("%c %c", temp1, temp2);
				printf("Different group\n");
				break;
			}
			else
			{

				if (first > second)
				{
					groups[i1].point[j1] += 3;
					groups[i1].goals[j1] += first - second;
					groups[i1].goals[j2] += second - first;
				}
				else if (first < second)
				{
					groups[i1].point[j2] += 3;
					groups[i1].goals[j1] += first - second;
					groups[i1].goals[j2] += second - first;
				}
				else
				{
					groups[i1].point[j1] += 1;
					groups[i1].point[j2] += 1;
					groups[i1].goals[j1] += first - second;
					groups[i1].goals[j2] += second - first;
				}
				printf("Group %c\n", groups[i1].ID);
				printf("Team                Point     Goal\n");
				for (int j = 0; j < 4; j++)
				{
					printf("%-20s%-10d%-10d\n", groups[i1].team[j], groups[i1].point[j], groups[i1].goals[j]);
				}
			}

			break;
		}
		case 5:
		{
			int temp;
			char tempname[20];
			for (int i = 0; i < sum; i++)
			{

				for (int j = 0; j < 3; j++)
				{
					for (int z = j; z < 4; z++)
					{
						if (groups[i].point[j] < groups[i].point[z])
						{
							temp = groups[i].point[j];
							groups[i].point[j] = groups[i].point[z];
							groups[i].point[z] = temp;
							temp = groups[i].goals[j];
							groups[i].goals[j] = groups[i].goals[z];
							groups[i].goals[z] = temp;
							strcpy(tempname, groups[i].team[j]);
							strcpy(groups[i].team[j], groups[i].team[z]);
							strcpy(groups[i].team[z], tempname);
						}
						if ((groups[i].point[j] == groups[i].point[z]) && (groups[i].goals[j] < groups[i].goals[z]))
						{
							temp = groups[i].point[j];
							groups[i].point[j] = groups[i].point[z];
							groups[i].point[z] = temp;
							temp = groups[i].goals[j];
							groups[i].goals[j] = groups[i].goals[z];
							groups[i].goals[z] = temp;
							strcpy(tempname, groups[i].team[j]);
							strcpy(groups[i].team[j], groups[i].team[z]);
							strcpy(groups[i].team[z], tempname);
						}
						else if ((groups[i].point[j] == groups[i].point[z]) && (groups[i].goals[j] == groups[i].goals[z]) && (strcmp(groups[i].team[j], groups[i].team[j]) < 0))
						{
							temp = groups[i].point[j];
							groups[i].point[j] = groups[i].point[z];
							groups[i].point[z] = temp;
							temp = groups[i].goals[j];
							groups[i].goals[j] = groups[i].goals[z];
							groups[i].goals[z] = temp;
							strcpy(tempname, groups[i].team[j]);
							strcpy(groups[i].team[j], groups[i].team[z]);
							strcpy(groups[i].team[z], tempname);
						}
					}
				}
			}

			for (int i = 0; i < sum; i++)
			{
				printf("Group %c\n", groups[i].ID);
				printf("Team                Point     Goal\n");
				for (int j = 0; j < 4; j++)
				{
					printf("%-20s%-10d%-10d\n", groups[i].team[j], groups[i].point[j], groups[i].goals[j]);
				}
			}
			break;
		}
		case 6:
		{
			return 0;
		}
		}
	}
	return 0;
}
