#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct cauhoi{
	int nhom;
	char noidung[255];
	char dapan[5][255];
}cauhoi;
int main(){
	FILE *input,*output;
	input = fopen("cauhoi.txt","r");
	output = fopen("dethi.txt","w+");
	cauhoi list[25];
	int nhom[255];
	int i=0;
	int j=0;
	char a;
	int count =0;
	int countNhom=0;
	int z=0;
	int flag;
	int index=0;
	for(i=0;i<25;i++){
		flag=0;
		fscanf(input,"%c*%d %[^\n]%*c",&a,&list[i].nhom,list[i].noidung);
			if(a=='*'){
			count++;
			for( z=0;z<255;z++){
			   if(list[i].nhom==nhom[z]){
			   	flag=1;
			   	break;
			   }	
			}
			if(flag==0){
				countNhom++;
				nhom[index]=list[i].nhom;
				index++;
			}
			
	}
		for(j=0;j<25;j++){
			fscanf(input,"#   %[^\n]%*c",list[i].dapan[j]);
		}
		
	}
	for(i=0;i<count;i++){
		printf("%d\n",list[i].nhom);
	}
	cauhoi temp;
	printf("%d\n%d\n",count,countNhom);
	for(i=0;i<count-1;i++){
		for(j=i+1;j<count;j++){
		if(list[i].nhom>list[j].nhom){
			temp=list[i];
			list[i]=list[j];
			list[j]=temp;
		}
	}
	}
	cauhoi newlist[25];
	int n=0;
	int loop=0;
	int m;
	char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		srand(time(NULL));
	for(i =0 ;i<15;i++){
	    m=rand()%3;
	    printf("%d\n",n);
	    m+=n;
		newlist[i]=list[m];
		loop++;
		if(loop==3){
			n+=5;
			loop=0;
		}
	}
	for(i=0;i<15;i++){
		fprintf(output,"%d. %s\n",i,newlist[i].noidung);
		for(j=0;j<5;j++){
			if(strlen(newlist[i].dapan[j])==0){
				break;
			}
			fprintf(output,"%c) %s\n",alphabet[j],newlist[i].dapan[j]);
		}
	}
	fclose(input);
	fclose(output);
	
	
	
}
