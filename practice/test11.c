//16h25
#include<stdio.h>
#include<string.h>
typedef struct{
	char id;
	char name[4][20];
	int point[4];
	int goal[4];
}group;
void clear(){
	char c;
	while(c=getchar()!='\n');
}
int ktTen(char s[],group a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			if(strcmp(s,a[i].name[j])==0){
				return 1;
			}
		}
	}
	return 0;
	
}
int main(){
	int choice;
	group a[8];
	int cur=0;
	int i;
	int j;
	while(1){
		printf("Chuong trinh quan ly:\n");
		printf("1.Bo sung bang dau\n");
		printf("2.In thong tin tat ca bang dau\n");
		printf("3.Tim kiem thong tin cua mot doi bong\n");
		printf("4.Nhap thong tin ket qua tran dau\n");
		printf("5.Sap xep thu tu\n");
		printf("6.Thoat\n");
		printf("Nhap vao lua chon cua ban: ");
		scanf("%d",&choice);
		clear();
		switch(choice){
			case 1:{
				int n;
				int z;
				int check;
				do{
				printf("Nhap vao so bang dau can bo sung: ");
				scanf("%d",&n);	
				clear();
				if(n+cur>8){
					printf("Vuot qua so bang dau cho phep ! Moi nhap lai \n");
				}
				}while(n+cur>8||n<0);
				if(n==0){
					break;
				}
				for(i=0;i<n;i++){
					do{
					check=0;
					printf("Nhap vao ID bang dau : ");
					scanf("%c",&a[cur].id);
					clear();
					for(z=0;z<cur;z++){
						if(a[cur].id==a[z].id){
							printf("Trung ten bang dau! \n ");
							check=1;
						}
					}
				}while(a[cur].id>'Z'||a[cur].id<'A'||check==1);
				for(j=0;j<4;j++){
					do{
					printf("Nhap vao ten doi %d : ",j+1);
					scanf("%[^\n]",a[cur].name[j]);
					clear();
					if(ktTen(a[cur].name[j],a,cur)==1){
						printf("Trung ten doi! \n");
					}
				    }while(ktTen(a[cur].name[j],a,cur)==1);
					do{
					printf("Nhap vao diem doi %d: ",j+1);
					scanf("%d",&a[cur].point[j]);
					clear();
					if(a[cur].point[j]<0){
						printf("Diem cua doi bong phai la so nguyen duong!\n");
					}
				    }while(a[cur].point[j]<0);
				    printf("Nhap vao hieu so doi %d: ",j+1);
				    scanf("%d",&a[cur].goal[j]);
				    clear();
				}
				
				
					cur++;
				}
				break;
			}
			case 2:{
				for(i=0;i<cur;i++){
					printf("Group %c\n",a[i].id);
					printf("Team                Point          Goal\n");
					for(j=0;j<4;j++){
						printf("%-20s%-15d%-10d\n",a[i].name[j],a[i].point[j],a[i].goal[j]);
					}
				}
				break;
			}
			case 3:{
				char s[20];
				printf("Nhap vao thong tin doi bong can tim kiem: ");
				scanf("%[^\n]",s);
				clear();
				int check=0;
				for(i =0;i<cur;i++){
					for(j=0;j<4;j++){
						if(strcmp(s,a[i].name[j])==0){
							printf("Group: %c Name:%-20s Point : %-15d Goal :%-10d\n",a[i].id,a[i].name[j],a[i].point[j],a[i].goal[j]);
							check=1;
							break;
						}
					}
				}
				if(check==0){
					printf("No result\n");
				}
				break;
			}
			case 4:{
				char s1[20];
				char s2[20];
				int temp1=0,temp2=0;
				int p1,p2;
				int g1,g2;
				int t1,t2;
				int check;
				printf("Nhap ten va ti so 2 doi can cap nhat: ");
				scanf("%s %s %d %d",s1,s2,&p1,&p2);
				clear();
				for(i=0;i<cur;i++){
					for(j=0;j<4;j++){
						if(strcmp(s1,a[i].name[j])==0){
							g1=i;
							t1=j;
							temp1=1;
						}
						if(strcmp(s2,a[i].name[j])==0){
							g2=i;
							t2=j;
							temp2=1;
						}
					}
				}
				if(a[g1].id!=a[g2].id||temp1==0||temp2==0){
					printf("Different group!\n");
					break;
				}
				else{
					if(p1>p2){
						a[g1].point[t1]+=3;
						a[g1].goal[t1]+=p1-p2;
						a[g2].goal[t2]+=p2-p1;
					}
					else if(p2>p1){
						a[g2].point[t2]+=3;
						a[g1].goal[t1]+=p1-p2;
						a[g2].goal[t2]+=p2-p1;
					}
					else{
						a[g1].point[t1]++;
						a[g2].point[t2]++;
					}
				}
			
					printf("Group %c\n",a[g1].id);
					printf("Team                Point          Goal\n");
					for(j=0;j<4;j++){
						printf("%-20s%-15d%-10d\n",a[g1].name[j],a[g1].point[j],a[g1].goal[j]);
					}
				
				break;
			}
			case 5:{
				int z=0;
				int tempi;
				char temps[20];
				
				for(i=0;i<cur;i++){
					for(j=0;j<3;j++){
						for(z=j+1;z<4;z++){
								if(a[i].point[j]<a[i].point[z]){
									strcpy(temps,a[i].name[j]);
									strcpy(a[i].name[j],a[i].name[z]);
									strcpy(a[i].name[z],temps);
									tempi=a[i].point[j];
									a[i].point[j]=a[i].point[z];
									a[i].point[z]=tempi;
									tempi=a[i].goal[j];
									a[i].goal[j]=a[i].goal[z];
									a[i].goal[z]=tempi;
								}
								else if(a[i].point[j]==a[i].point[z]&&a[i].goal[j]<a[i].goal[z]){
									strcpy(temps,a[i].name[j]);
									strcpy(a[i].name[j],a[i].name[z]);
									strcpy(a[i].name[z],temps);
									tempi=a[i].point[j];
									a[i].point[j]=a[i].point[z];
									a[i].point[z]=tempi;
									tempi=a[i].goal[j];
									a[i].goal[j]=a[i].goal[z];
									a[i].goal[z]=tempi;
								}
								else if(a[i].point[j]==a[i].point[z]&&a[i].goal[j]==a[i].goal[z]&&strcmp(a[i].name[j],a[i].name[z])<0){
									strcpy(temps,a[i].name[j]);
									strcpy(a[i].name[j],a[i].name[z]);
									strcpy(a[i].name[z],temps);
									tempi=a[i].point[j];
									a[i].point[j]=a[i].point[z];
									a[i].point[z]=tempi;
									tempi=a[i].goal[j];
									a[i].goal[j]=a[i].goal[z];
									a[i].goal[z]=tempi;
								}
						}
					}
				}
				for(i=0;i<cur;i++){
					printf("Group %c\n",a[i].id);
					printf("Team                Point          Goal\n");
					for(j=0;j<4;j++){
						printf("%-20s%-15d%-10d\n",a[i].name[j],a[i].point[j],a[i].goal[j]);
					}
				}
				break;
			}
			case 6:{
				return 0;
				break;
			}
		}
	}
}
