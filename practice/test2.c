//19h20
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
	int id;
	char name[30];
	char room[10];
	int day;
	char slots[10];
	int checker;
}class;
void clear(){
	char c;
	while(c=getchar()!='\n');
}
int main(){
class a[200];
class b;
int arr[200][2];
int choice ;
int now=0;
int count=0;
int n;
int i;
int j;

while(1){
printf("Chuong trinh quan li lop hoc: \n");
printf("1.Bo sung lop hoc: \n");
printf("2.In thong tin cac lop hoc: \n");
printf("3.Tim kiem theo phong: \n");
printf("4.Sap xep: \n");
printf("5.Kiem tra trung phong: \n");
printf("6.Thoat chuong trinh: \n");
do{
	printf("Lua chon cua ban: (Tu 1 den 6) ");
	scanf("%d%*c",&choice);
}while(choice<1||choice>7);
switch(choice){
	case 1:{
		
		do{
		  printf("Nhap vao so lop can bo sung N (N>=1): ");
	      scanf("%d",&n);
	      if(n<1){
	      	printf("Invalid! So lop can bo sung phai lon hon 1!\n");
		  }
		  else if(now+n>200){
		  	printf("Invalid! Tong so lop phai be hon 200!\n");
		  }
         }while(n<1||now+n>200);
        now+=n;
        for( i=0;i<n;i++){
        	printf("Nhap bo sung lop hoc: \n");
        	printf("Nhap vao ma lop: ");
        	scanf("%d",&a[count].id);
        	clear();
        	printf("Nhap vao ten hoc phan: ");
        	scanf("%[^\n]",&a[count].name);
        	
        	clear();
        	printf("Nhap vao ten phong hoc: ");
        	scanf("%[^\n]",&a[count].room);
        	clear();
        	do{
        	printf("Nhap vao ngay hoc");
        	scanf("%d",&a[count].day);
        	clear();
        	if(a[count].day>7||a[count].day<2){
        		printf("Ngay hoc phai thuoc doan [2;7]\n");
			}
            }while(a[count].day>7||a[count].day<2);
//            do{
//            	int a=-1;int b=-1;
//            	printf("Nhap vao tiet hoc:");
//            	scanf("%d-%d",&a,&b);
//            	clear();
//            	if(a==-1||b==-1||a>12||a<1||b>12||b<1){
//            		printf("Dinh dang tiet hoc khong hop le ");
//				}
//				a[count].slots=a
//			}while(a==-1||b==-1||a>12||a<1||b>12||b<1);
            do{
			int m,p;
			char str[3];
            printf("Nhap vao tiet hoc: ");
            scanf("%[^\n]",&a[count].slots);
             clear();
            if(a[count].slots[2]!='-'&&a[count].slots[1]!='-'){
            	printf("Dinh dang khong hop le");
            	continue;
			}
			m=atoi(a[count].slots);
			if(a[count].slots[2]=='-'){
				str[0]=a[count].slots[3];
				str[1]=a[count].slots[4];
			}
		    else if(a[count].slots[1]=='-'){
				str[0]=a[count].slots[2];
				str[1]=a[count].slots[3];
			}
			p=atoi(str);
        
           arr[count][0]=m;
            arr[count][1]=p;
        }while(a[count].slots[2]!='-'&&a[count].slots[1]!='-');
            a[count].checker=0;
        	count++;
		}
           
		break;
	}
	case 2:{
		printf("Ma lop  Ten mon hoc                    Ten phong    Thu     Tiet hoc\n");
		for(i=0;i<count;i++){
			printf("%-6d  %-30s %-10s   %-3d     %-10s\n",a[i].id,a[i].name,a[i].room,a[i].day,a[i].slots);
		}
		break;
	}
	case 3:{
		char s[10];
		int flag=0;
		printf("Nhap vao lop hoc can tim: ");
		scanf("%[^\n]",s);
		for(i=0;i<count;i++){
		   if(strcmp(s,a[i].room)==0){
		   	flag=1;
		   }
		}
		if(flag==0){
			printf("Khong ton tai ma lop nay\n");
		}
		else{
				printf("Ma lop  Ten mon hoc                    Ten phong    Thu     Tiet hoc\n");
				for(i=0;i<count;i++){
		   if(strcmp(s,a[i].room)==0){
		   	printf("%-6d  %-30s %-10s   %-3d     %-10s\n",a[i].id,a[i].name,a[i].room,a[i].day,a[i].slots);
		   	flag=1;
		   }
		}
		}
		break;
	}
	case 4:{
		for(i=0;i<count-1;i++){
			for(j=i+1;j<count;j++){
				if(a[i].id>a[j].id){
					class temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("Ma lop  Ten mon hoc                    Ten phong    Thu     Tiet hoc\n");
		for(i=0;i<count;i++){
			printf("%-6d  %-30s %-10s   %-3d     %-10s\n",a[i].id,a[i].name,a[i].room,a[i].day,a[i].slots);
		}
		break;
	}
	case 5:{
		for(i=0;i<count-1;i++){
			if(a[i].checker==1){
				continue;
			}
			for(j=i+1;j<count;j++){
				if(a[i].checker==0&&a[j].checker==0&&strcmp(a[i].room,a[j].room)==0&&a[i].day==a[j].day&&((arr[i][1]>arr[j][0])||(arr[j][1]>arr[i][0]))){
					printf("%d\n",a[j].id);
					a[j].checker=1;
					a[i].checker=1;
				}
			}
			if(a[i].checker==1){
				printf("%d\n",a[i].id);
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
