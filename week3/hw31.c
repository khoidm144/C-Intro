#include<stdio.h>
int main(){
  char uni[]="TRUONG DAI HOC BACH KHOA HA NOI ";
  char stcard[]="THE SINH VIEN";
  char Euni[]="Hanoi Universitu of Science and Technology";
  char Estcard[]="Student ID card";
  char line[]="-----------------------------------------------------------------";
  char expressionName[]="Ho ten/Name";
  char name[]="DANG MINH KHOI";
  char expressionDOB[]="Ngay sinh/Date of birth";
  int dDOB=14,mDOB=04,yDOB=2001;
  char faculty[]="Cong nghe thong tin Global ICT -K64 (IT-E7)";
  char expressionValid[]="Gia tri den/Valid Thru";
  char expressionID[]="MSSV/ID No.\n";
  int  dayValidDate =30,monthValidDate=7,yearValidDate=2023;
  int  ID=20194781;
  printf ("%s\t%22s\n",uni,stcard);
  printf("%s%21s\n",Euni,Estcard);
  printf("%s\n",line);
  printf("%s\n",expressionName);
  printf("%s\n",name);
  printf("%s\n",expressionDOB);
  printf("%d/%d/%d\n",dDOB,mDOB,yDOB);
  printf("%s\n",faculty);
  printf("\n\n");
  printf("%s\t%37s",expressionValid,expressionID);
  printf("%d/%d/%d\t\%42d\n",dayValidDate,monthValidDate,yearValidDate,ID);
  
  
  return 0;
}
