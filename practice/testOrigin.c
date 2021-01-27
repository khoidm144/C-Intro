//11h10
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 200
typedef struct {
	char country[30];
	long total;
	long new1;
	long death;
}statistic;
void clear(){
	char c;
	while(c=getchar()!='\n');
}
void chuanhoa(char s[]){
	strlwr(s);
	s[0]=toupper(s[0]);
	//printf("%s",s);

	for(int i=0;i<strlen(s)-1;i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}
	}
}
int main(){
	statistic a[MAX];
	int cur=0;
	int choice;
	int i,j;
	while(1){
		printf("1.Nhap lieu \n");
		printf("2.Hien thi bang thong tin \n");
		printf("3.Chuan hoa ten quoc gia \n");
		printf("4.Sap xep \n");
		printf("5.Cac quoc gia nguy co\n");
		printf("6.Thoat chuong trinh\n");
		printf("Lua chon : ");
		scanf("%d",&choice);
		clear();
		switch(choice){
			case 1:{
				int n;
				do{
					printf("Nhap vao so quoc gia can bo sung : ");
					scanf("%d",&n);
					clear();
					if(n+cur>200||n<0){
						printf("So quoc gia nhap vao phai lon hon 0 va tong so quoc gia phai nho hon 200 \n");
					}
				}while(n+cur>200||n<0);
				for(i=0;i<n;i++){
					printf("Nhap vao quoc gia thu %d \n",cur+1);
					printf("Nhap vao ten quoc gia: ");
					scanf("%[^\n]",a[i].country);
					do{
						printf("Nhap vao tong so ca nhiem : ");
						scanf("%ld",&a[i].total);
						clear();
						if(a[i].total<0){
							printf("Invalid ! Tong so ca nhiem phai khong am ! \n");
						}
					}while(a[i].total<0);
					do{
						printf("Nhap vao so ca nhiem moi : ");
						scanf("%ld",&a[i].new1);
						clear();
						if(a[i].new1<0||a[i].new1>=a[i].total){
							printf("Invalid ! So ca nhiem moi phai khong am va nho hon tong so ca nhiem! \n");
						}
					}while(a[i].new1<0||a[i].new1>=a[i].total);
						do{
						printf("Nhap vao so ca tu vong : ");
						scanf("%ld",&a[i].death);
						clear();
						if(a[i].death<0||a[i].death>=a[i].total){
							printf("Invalid ! So ca tu vong phai khong am va nho hon tong so ca nhiem! \n");
						}
					}while(a[i].death<0||a[i].death>=a[i].total);
					cur++;
				}
				printf("STT     Quoc gia                      Tong so     Moi nhiem   Tu vong\n");
				for(i=0;i<cur;i++){
					printf("%-8d%-30s%-12d%-12d%-12d\n",i+1,a[i].country,a[i].total,a[i].new1,a[i].death);
				}
				long sum1=0,sum2=0,sum3=0;
				for(i=0;i<cur;i++){
					sum1+=a[i].total;
					sum2+=a[i].new1;
					sum3+=a[i].death;
				}
				printf("        Toan the gioi                 %-12d%-12d%-12d\n",sum1,sum2,sum3);
				
				break;
			}
			case 2:{
				printf("STT     Quoc gia                      Tong so     Moi nhiem   Tu vong\n");
				for(i=0;i<cur;i++){
					printf("%-8d%-30s%-12d%-12d%-12d\n",i+1,a[i].country,a[i].total,a[i].new1,a[i].death);
				}
				long sum1=0,sum2=0,sum3=0;
				for(i=0;i<cur;i++){
					sum1+=a[i].total;
					sum2+=a[i].new1;
					sum3+=a[i].death;
				}
				printf("        Toan the gioi                 %-12d%-12d%-12d\n",sum1,sum2,sum3);
				
				break;
			}
			case 3:{
				for(i=0;i<cur;i++){
					chuanhoa(a[i].country);
				}
				printf("Da chuan hoa thanh cong \n");
				break;
			}
			case 4:{
				for(i=0;i<cur-1;i++){
					for(j=i+1;j<cur;j++){
						if(a[i].total<a[j].total){
							statistic temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
						else if(a[i].total==a[j].total&&(a[i].death<a[j].death)){
							statistic temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				printf("STT     Quoc gia                      Tong so     Moi nhiem   Tu vong\n");
				for(i=0;i<cur;i++){
					printf("%-8d%-30s%-12d%-12d%-12d\n",i+1,a[i].country,a[i].total,a[i].new1,a[i].death);
				}
				long sum1=0,sum2=0,sum3=0;
				for(i=0;i<cur;i++){
					sum1+=a[i].total;
					sum2+=a[i].new1;
					sum3+=a[i].death;
				}
				printf("        Toan the gioi                 %-12d%-12d%-12d\n",sum1,sum2,sum3);
				break;
			}
			case 5:{
				int count=0;
				printf("STT     Quoc gia                      Tong so     Moi nhiem   Tu vong\n");
				for(i=0;i<cur;i++){
					double temp=0.005*a[i].total;
					if(a[i].new1>100&&(((double)a[i].new1)>temp)){
					printf("%-8d%-30s%-12d%-12d%-12d\n",i+1,a[i].country,a[i].total,a[i].new1,a[i].death);
				}
				}
				break;
			}
			case 6:{
				//11h18
				return 0;
				break;
			}
			
		}
	}
}
