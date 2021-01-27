//10h10
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
	int id;
	char name[30];
	char room[10];
	int day;
	char slot[10];
}lop;
void clear(){
	char c;
	while(c=getchar()!='\n');
}
int checkSlot(char s[]){
	char temp[5];
	if(strlen(s)>5){
		return 0;
	}
	int a =atoi(s);
	int b;
	if(s[2]=='-'){
		if(a>12||a<1){
			return 0;
		}
		temp[0]=s[3];
		temp[1]=s[4];
		b=atoi(temp);
	//	printf("%d",b);
		if(b>12||b<1){
			return 0;
		}
		if(b<=a){
			return 0;
		}
	}
	else if(s[1]=='-'){
		if(a>12||a<1){
			return 0;
		}
		temp[0]=s[2];
		temp[1]=s[3];
		b=atoi(temp);
	//	printf("%d",b);
		if(b>12||b<1){
			return 0;
		}
		if(b<=a){
			return 0;
		}
	}
	else {
		return 0;
	}
	return 1;
}
int main(){
	int choice ;
	lop a[200];
	int cur=0;
	int i,j;
	while(1){
		printf("Chuong trinh quan li lop hoc \n");
		printf("1.Bo sung lop hoc\n");
		printf("2.In thong tin cac lop \n");
		printf("3.Tim kiem theo phong \n");
		printf("4.Sap xep\n");
		printf("5.Kiem tra trung phong \n");
		printf("6. Thoat \n");
		printf("Lua chon : ");
		scanf("%d",&choice);
		clear();
		switch(choice){
			case 1:{
				int n;
				char s[10];
				do{
					printf("Nhap vao so lop hoc can bo sung : ");
					scanf("%d",&n);
					if(n+cur>200||n<=0){
						printf("So lop hoc nhap vao can lon hon 1 va tong so lop be hon 200 \n");
					}
				}while(n+cur>200||n<=0);
				for(i=0;i<n;i++){
					printf("Nhap vao ma lop : ");
					scanf("%d",&a[cur].id);
					clear();
					printf("Nhap vao ma hoc phan : ");
					scanf("%[^\n]",a[cur].name);
					clear();
					printf("Nhap vao phong hoc: ");
					scanf("%[^\n]",a[cur].room);
					clear();
					do{
					printf("Nhap vao ngay hoc : ");
					scanf("%d",&a[cur].day);
					clear();
					if(a[cur].day>7||a[cur].day<2){
						printf("Ngay hoc ko hop le ! \n");
					}
				}while(a[cur].day>7||a[cur].day<2);
				do{
					
					printf("Nhap vao tiet hoc theo dinh dang tietbatdau-tietketthuc: ");
					scanf("%[^\n]",s);
					clear();
				}while(checkSlot(s)==0);
				strcpy(a[cur].slot,s);
					cur++;
				}
				break;
			}
			case 2:{
				printf("Ma lop    Ten mon hoc                   Ten phong  Thu     Tiet hoc\n");
				for(i=0;i<cur;i++){
					printf("%-10d%-30s%-10s %-8d%-15s\n",a[i].id,a[i].name,a[i].room,a[i].day,a[i].slot);
				}
				break;
			}
			case 3:{
				char s[20];
				int check=0;
				int temp[200];
				int count=0;
				printf("Nhap ten phong can tim: ");
				scanf("%[^\n]",s);
				for(i=0;i<cur;i++){
					if(strcmp(s,a[i].room)==0){
					    temp[count]=i;	
						check=1;
						count++;
					}
				}
				if(check==1){
				printf("Ma lop    Ten mon hoc                   Ten phong  Thu     Tiet hoc\n");
				for(i=0;i<count;i++){
					printf("%-10d%-30s%-10s %-8d%-15s\n",a[temp[i]].id,a[temp[i]].name,a[temp[i]].room,a[temp[i]].day,a[temp[i]].slot);
				}
				}
				else{
					printf("Khong tim thay phong %s trong danh sach ! \n",s);
				}
				break;
			}
			case 4:{
				for(i=0;i<cur-1;i++){
					for(j=i+1;j<cur;j++){
						if(a[i].id>a[j].id){
							lop temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
					printf("Ma lop    Ten mon hoc                   Ten phong  Thu     Tiet hoc\n");
				for(i=0;i<cur;i++){
					printf("%-10d%-30s%-10s %-8d%-15s\n",a[i].id,a[i].name,a[i].room,a[i].day,a[i].slot);
				}
				break;
			}
			case 5:{
				for(i=0;i<cur-1;i++){
					for(j=i+1;j<cur;j++){
						if(strcmp(a[i].room,a[j].room)==0&&a[i].day==a[j].day){
							printf("%d trung %d \n",a[i].id,a[j].id);
						}
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
	
	
	
	
	
	return 0;
}
