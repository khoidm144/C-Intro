#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//22h10
typedef struct times{
	int hours;
	int minute;
}time_t1;
typedef struct com_type {
	int number;
	int free;
	time_t1 beginTime;
	time_t1 endTime;
	long fee;
	int time_used;
}computer;

void clear(){
	char c;
	while(c=getchar()!='\n');
}
int invalidTime(time_t1 a){
	if(a.hours>23||a.hours<0||a.minute>59||a.minute<0){
		return 1;
	}
	return 0;
}
int timeCompare(time_t1 a, time_t1 b){
	if((a.hours>b.hours)||(a.hours==b.hours&&a.minute>b.minute)){
		return 1;
	}
	else if(a.hours==b.hours&&a.minute==b.minute){
		return 0;
	}
	return -1;
}
int main(){
	int choice;
	computer a[10];
	computer b[10];
	int i,j;
	time_t1 init;
	init.hours=0;
	init.minute=0;
	time_t1 input;
	while(1){
		printf("Chuong trinh quan li tiem net:\n");
		printf("1.Khoi tao du lieu\n");
		printf("2.Dung may\n");
		printf("3.Nghi choi\n");
		printf("4.Chuyen may\n");
		printf("5.In ra thong tin phong may\n");
		printf("6.In ra thong tin theo thu tu giam dan va tinh tien\n");
		printf("7.Goi y dung may\n");
		printf("8.Thoat\n");
		do{
			printf("Nhap vao lua chon cua ban: ");
			scanf("%d",&choice);
			if(choice<1||choice>8){
				printf("Lua chon phai nam trong tu 1-8!");
			}
		}while(choice<1||choice>8);
		switch(choice){
			case 1:{
				for(i=0;i<10;i++){
					a[i].number=i+1;
					a[i].free=1;
					a[i].beginTime=init;
					a[i].endTime=init;
					a[i].fee=0;
					a[i].time_used=0;
				}
				printf("STT   status    begin   end    fee   time_used\n");
				for(i=0;i<10;i++){
				printf("%-3d   free      00:00   00:00  0     0\n",i+1);
				}
				break;
			}
			case 2:{
				int n;
				int count=0;
				for(i=0;i<10;i++){
					if(a[i].free==0){
						count++;
					}
				}
				if (count==10){
					printf("Tat ca cac may deu dang ban, quay lai sau !\n");
				}
				do{
				printf("Moi nhap may muon dung: ");
				scanf("%d",&n);
				if(a[n-1].free==0){
					printf("May chon da ban ! Vui long chon may khac\n");
				}
			}while(n>10||n<1||(a[n-1].free==0));
				//10h52
				//12h15
				do{
				printf("Nhap gio va phut bat dau: (hh:mm) ");
				scanf("%d:%d",&input.hours,&input.minute);
				if(invalidTime(input)==1){
					printf("Gio va phut khong hop le!Xin moi nhap lai!\n");
					continue;
				}
			
			}while(invalidTime(input)==1);
			a[n-1].free=0;
			a[n-1].beginTime=input;
				break;
			}
			
			case 3:{
				int luachon;
				do{
					printf("Moi nhap vao may muon nghi choi: ");
					scanf("%d",&luachon);
					if(a[luachon-1].free==1){
						printf("May dang o trang thai roi ! Moi nhap may khac !");
					}
				}while(a[luachon-1].free==1);
				do{
					printf("Nhap vao thoi gian ket thuc :");
					scanf("%d:%d",&input.hours,&input.minute);
					if(invalidTime(input)==1){
					printf("Gio va phut khong hop le!Xin moi nhap lai!\n");
					continue;
				}
				if(timeCompare(a[luachon-1].beginTime,input)==0||timeCompare(a[luachon-1].beginTime,input)==1){
					printf("Gio ket thuc phai lon hon gio bat dau ! Xin moi nhap lai \n");
				}
				}while(invalidTime(input)==1||(timeCompare(a[luachon-1].beginTime,input)==0||timeCompare(a[luachon-1].beginTime,input)==1));
				long mins=(input.hours-a[luachon-1].beginTime.hours)*60+(input.minute-a[luachon-1].beginTime.minute);
				printf("Hoa don thanh toan:\n");
				printf("Thoi gian bat dau: %.2d:%.2d\n",a[luachon-1].beginTime.hours,a[luachon-1].beginTime.minute);
				printf("Thoi gian ket thuc: %.2d:%.2d\n",input.hours,input.minute);
				printf("So phut dung dich vu: %ld\n",mins);
				printf("Tien phai tra:%d x 100 = %ld VND\n",mins,mins*100);
				a[luachon-1].fee+=mins*100;
				a[luachon-1].free=1;
				a[luachon-1].time_used+=mins;
				a[luachon-1].beginTime=init;
				break;
			}
			case 4:{
				
					int cu,moi;
					do{
					printf("Nhap vao so may cu: ");
					scanf("%d",&cu);
					if(a[cu-1].free==1){
						printf("May cu dang o trang thai roi ! Nhap lai !\n");
						continue;
					}
				}while(a[cu-1].free==1);
				do{
					printf("Nhap vao so may moi: ");
					scanf("%d",&moi);
						if(a[moi-1].free==0){
						printf("May moi dang o trang thai ban ! Nhap lai !\n");
						continue;
					}
				}while(a[moi-1].free==0);
				a[cu-1].free=1;
				a[cu-1].time_used+=(input.hours-a[cu-1].beginTime.hours)*60+(input.minute-a[cu-1].beginTime.minute);
				a[moi-1].beginTime=a[cu-1].beginTime;
				a[cu-1].beginTime=init;
				a[moi-1].free=0;
			
				break;
			}
			case 5:{
				
				
				printf("STT   status    begin   end      fee       time_used\n");
				
				for(i=0;i<10;i++){
					char s[5];
					char free[5]="free";
					char busy[5]="busy";
					if(a[i].free==1){
					   strcpy(s,free);
					}
					else{
						strcpy(s,busy);
					}
				printf("%-3d   %-4s      %-2.2d:%-2.2d   %-2.2d:%-2.2d    %-5d     %-5d\n",a[i].number,s,a[i].beginTime.hours,a[i].beginTime.minute,a[i].endTime.hours,a[i].endTime.minute,a[i].fee,a[i].time_used);
				}
			
				break;
			}
			case 6:{
				time_t1 temp;
				int tempInt;
				long tempLong;
				computer temp1;
				for(i=0;i<9;i++){
					for(j=i+1;j<10;j++){
						if(a[i].fee<a[j].fee){
							temp1=a[i];
							a[i]=a[j];
							a[j]=temp1;

						}
					}
				}
				printf("STT   status    begin   end      fee       time_used\n");
				
				for(i=0;i<10;i++){
					char s[5];
					char free[5]="free";
					char busy[5]="busy";
					if(a[i].free==1){
					   strcpy(s,free);
					}
					else{
						strcpy(s,busy);
					}
				printf("%-3d   %-4s      %-2.2d:%-2.2d   %-2.2d:%-2.2d    %-5d     %-5d\n",a[i].number,s,a[i].beginTime.hours,a[i].beginTime.minute,a[i].endTime.hours,a[i].endTime.minute,a[i].fee,a[i].time_used);
				}
				break;
			}case 7:{
				computer temp2;
				for(i=0;i<10;i++){
					b[i]=a[i];
				}
				for(i=0;i<9;i++){
					for(j=i+1;j<10;j++){
						if(b[i].time_used>a[j].time_used){
							temp2=b[i];
							b[i]=b[j];
							b[j]=temp2;

						}
					}
				}
				printf("Goi y: May %d",b[0].number);
				break;
			}
			case 8:{
				return 0;
				break;
			}
		}
		
	}
	
	
}
