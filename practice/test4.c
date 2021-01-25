#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//14h45
typedef struct {
	char name[30];
	char id[12];
	char hometown[30];
	double gpa;
}sinhvien;
void clear(){
	char c;
	while(c=getchar()!='\n');
}
int main(){
	sinhvien a[30];
	int choice;
	int i,j;
	int first=0;
	int cur=0;
	while(1){
		printf("Chuong trinh quan ly thong tin sinh vien: \n");
		printf("1.Nhap thong tin sinh vien\n");
		printf("2.In thong tin cac sinh vien\n");
		printf("3.Tim kiem theo ma so sinh vien\n");
		printf("4.Tim kiem theo GPA va que quan\n");
		printf("5.Sap xep theo GPA\n");
		printf("6.Thoat\n");
	do{
		printf("Moi nhap lua chon cua ban:");
		scanf("%d",&choice);
		clear();
		if(choice>6||choice<1){
			printf("Invalid! Nhap lai lua chon tu 1 den 6\n");
		}
	}while(choice>6||choice<1);
	switch(choice){
		case 1:{
			int n;
			if(first==0){
			do{
				printf("Moi nhap so luong sinh vien can quan li ");
				scanf("%d",&n);
				clear();
				if(n<=0){
					printf("So luong sinh vien nhap vao phai lon hon 0! \n");
				}
			}while(n<=0);
			for(i=0;i<n;i++){
				printf("Sinh vien %d \n",cur+1);
				printf("Nhap vao ten cua sinh vien ");			
				scanf("%[^\n]",a[cur].name);
				clear();
				printf("Nhap vao MSSV cua sinh vien ");
				scanf("%[^\n]",a[cur].id);
				clear();
				printf("Nhap vao que quan cua sinh vien ");
				scanf("%[^\n]",a[cur].hometown);
				clear();
				do{
					printf("Nhap vao GPA cua sinh vien [0-4] ");
					scanf("%lf",&a[cur].gpa);
					clear();
					if(a[cur].gpa>4||a[cur].gpa<0){
						printf("GPA cua sinh vien phai nam trong doan [0-4]!\n");
					}
				}while(a[cur].gpa>4||a[cur].gpa<0);
				cur++;
			}
			first=1;
		}
		else{
			printf("Ban da tung nhap thong tin cua sinh vien trc do! Bay gio hay nhap them thong tin cua n sinh vien moi!\n");
			do{
				printf("Moi nhap so luong sinh vien can quan li ");
				scanf("%d",&n);
				clear();
				if(n<=0){
					printf("So luong sinh vien nhap vao phai lon hon 0! \n");
				}
			}while(n<=0);
			for(i=0;i<n;i++){
				printf("Sinh vien %d \n",cur+1);
				printf("Nhap vao ten cua sinh vien ");			
				scanf("%[^\n]",a[cur].name);
				clear();
				printf("Nhap vao MSSV cua sinh vien ");
				scanf("%[^\n]",a[cur].id);
				clear();
				printf("Nhap vao que quan cua sinh vien ");
				scanf("%[^\n]",a[cur].hometown);
				clear();
				do{
					printf("Nhap vao GPA cua sinh vien [0-4] ");
					scanf("%lf",&a[cur].gpa);
					clear();
					if(a[cur].gpa>4||a[cur].gpa<0){
						printf("GPA cua sinh vien phai nam trong doan [0-4]!\n");
					}
				}while(a[cur].gpa>4||a[cur].gpa<0);
				cur++;
			}
		}
			break;
		}
		case 2:{
			double avg=0;
			for(i=0;i<cur;i++){
				avg+=(double)a[i].gpa;
			}
			avg=avg/(cur);
			printf("STT     Ten                           MSSV      QueQuan       GPA\n");
			for(i=0;i<cur;i++){
				printf("%-8d%-30s%-10s%-14s%-3.2lf\n",i+1,a[i].name,a[i].id,a[i].hometown,a[i].gpa);
			}
			printf("Diem trung binh GPA cua tat cac sinh vien la : %.2lf\n",avg);
			break;
		}
		case 3:{
			
				char st[10];
				int check=0;
				printf("Nhap vao MSSV can tim kiem!");
				scanf("%[^\n]",st);
				clear();
				for(i=0;i<cur;i++){
					if(strcmp(st,a[i].id)==0){
						printf("STT     Ten                           MSSV      QueQuan       GPA\n");
				        printf("%-8d%-30s%-10s%-14s%-3.2lf\n",cur+1,a[i].name,a[i].id,a[i].hometown,a[i].gpa);
				        check=1;
				        break;
					}
				}
				if(check==0){
					printf("Khong ton tai MSSV nay !\n");
				}
			
			break;
		}
		case 4:{
			char st[30];
			printf("Nhap vao que quan :");
			scanf("%[^\n]",st);
			strlwr(st);
		//	puts(st);
			char temp[30];
			double avg=0;
			int flag=0;
			for(i=0;i<cur;i++){
				avg+=(double)a[i].gpa;
			}
			avg=avg/(cur);
		    for(i=0;i<cur;i++){
		    	strcpy(temp,a[i].hometown);
				strlwr(temp);
				puts(temp);
				puts(st);		    	
		    	if(strcmp(st,temp)==0&&a[i].gpa>avg){
		         flag=1;
				printf("%-8d%-30s%-10s%-14s%-3.2lf\n",cur+1,a[i].name,a[i].id,a[i].hometown,a[i].gpa);			
				}
			}
			if(flag==0){
				printf("Khong tim thay sinh vien nao thoa man dieu kien! \n");
			}
			break;
		}
		case 5:{
			for(i=0;i<cur-1;i++){
				for(j=i+1;j<cur;j++){
					if(a[i].gpa<a[j].gpa){
						sinhvien temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			printf("STT     Ten                           MSSV      QueQuan       GPA\n");
			for(i=0;i<cur;i++){
				printf("%-8d%-30s%-10s%-14s%-3.2lf\n",cur+1,a[i].name,a[i].id,a[i].hometown,a[i].gpa);
			}
			break;
		}case 6:{
			return 0;
			break;
		}
		
	}




}
}
