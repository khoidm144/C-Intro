//14h30
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
	char id[9];
	char  name[50];
	int thoiluong;
	int giathue;
}DVD;
void clear(){
	char c;
	while(c=getchar()!='\n');
}
int check(char s[]){
	for(int i=1;i<4;i++){
		if(s[i]<'A'||s[i]>'Z'){
			printf("%c",s[i]);
			return 0;
		}
	}
	for(int i=4;i<8;i++){
		if(s[i]>'9'||s[i]<'0'){
			printf("%c",s[i]);
			return 0;
		}
	}
	return 1;
}
int main(){
	int choice;
	DVD a[50];
	int cur=0;
	while(1){
		printf("----------------------------------------\n");
		printf("MediaMax-Chuong tirnh quan ly dia DVD\n");
		printf("1.Nhap so lieu\n");
		printf("2.Danh sach dia\n");
		printf("3.Sap xep theo thoi luong\n");
		printf("4.Sua thong tin dia\n");
		printf("5.Sap xep theo tieu de\n");
		printf("6.Thoat\n");
		printf("Hay nhap lua chon: ");
		scanf("%d",&choice);
		clear();
		switch(choice){
			case 1:{
				int n;
				do{
				printf("Nhap so dia DVD can quan li: ");
				scanf("%d",&n);
				clear();
				if(n<=0||n+cur>50){
					printf("So luong dia nhap ko hop le !\n");
				}
			}while(n<=0||n+cur>50);
				for(int i=0;i<n;i++){
					printf("Nhap vao so lieu dia : \n");
					char s[20];
					do{					
					printf("Nhap vao ma so dia! ");
					scanf("%[^\n]",s);
					if(strlen(s)!=8||(s[0]!='1'&&s[0]!='0')||check(s)==0){
						printf("Ma so ko hop le ! Xin moi nhap lai !\n");
					}
					clear();
				}while(strlen(s)!=8||(s[0]!='1'&&s[0]!='0')||check(s)==0);
				strcpy(a[cur].id,s);
					printf("Nhap vao tieu de cua phim : ");
					scanf("%[^\n]",a[cur].name);
					clear();
					do{
					printf("Nhap vao thoi luong cua phim : ");
					scanf("%d",&a[cur].thoiluong);
					clear();
				}while(a[cur].thoiluong>180||a[cur].thoiluong<60);
					if(a[cur].id[0]=='0'){
					    a[cur].giathue=a[cur].thoiluong*5000;
					}
					else{
					a[cur].giathue=a[cur].thoiluong*2000;
					}			
					cur++;
				}
				break;
			}
			case 2:{
				printf("ID        Tieu de                        Thoi luong  Gia thue\n");
				for(int i=0;i<cur;i++){					
					printf("%-9s %-30s %-10d  %-10d\n",a[i].id,a[i].name,a[i].thoiluong,a[i].giathue);
				}
				break;
			}
			case 3:{
				for(int i=0;i<cur-1;i++){
					for(int j=i+1;j<cur;j++){
						if(a[i].thoiluong>a[j].thoiluong){
							DVD temp = a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				break;
			}
			case 4:{
				char s[20];
				printf("Nhap vao ma so cua DVD can sua thong tin !: ");
				scanf("%[^\n]",&s);
				clear();
				int flag=0;
				int index=0;
				for(int i=0;i<cur;i++){
					if(strcmp(s,a[i].id)==0){
						flag=1;
						index=i;
						break;
					}
				}
				if(flag==0){
					printf("Khong ton tai DVD co ma so nay ! \n");
				}
				else{
				   printf("Nhap lai Tieu de moi :");
				   scanf("%[^\n]",a[index].name);
				   clear();
				   	do{
				   	printf("Nhap vao thoi luong cua phim : ");
					scanf("%d",&a[index].thoiluong);
					clear();
					if(a[index].thoiluong>180||a[index].thoiluong<60){
						printf("Thoi luong phim khong hop le ! \n");
					}
					}while(a[index].thoiluong>180||a[index].thoiluong<60);
					if(a[index].id[0]=='0'){
					    a[index].giathue=a[index].thoiluong*5000;
					}
					else{
					a[index].giathue=a[index].thoiluong*2000;
					}			
					
				}
				
				break;
			}
			case 5:{
				int max=strlen(a[0].name);
				int index=0;
				for(int i=0;i<cur;i++){
				   if(strlen(a[i].name)>max){
				   	  index=i;
				   	  max=strlen(a[i].name);
				   }
				}
				printf("ID        Tieu de                        Thoi luong  Gia thue\n");
				printf("%-9s %-30s %-10d  %-10d\n",a[index].id,a[index].name,a[index].thoiluong,a[index].giathue);
				break;
			}
			case 6:{
				return 0;
				break;
			}
		}
	}
}
//15h30
