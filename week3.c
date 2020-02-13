//การอ่านค่าจาก standard input ด้วย getchar(), gets(), fgets()
//loop
//enter ถือเป็นรับอินพุดตัวนึงด้วย!!!!
//ctrl c หยุดการทำงาน
#include <stdio.h>
#include <stdlib.h> //รับอินพุด
char name[20]; //กำหนดขนาดสตริง
char number[20];
int main()
{
   // printf("%s\n",name);
   // int i ;
   // scanf("%s %d",name,&i);
   //printf("Enter name :");
   //gets(name); //รับอินพุด
   //fgets(name,20,stdin); //stdin รับจากคีบอด กำหนดไดด้รับจากไหน
   //char number[5]; //กำหนดขนาดเผื่อ/0ด้วย!!
   //fgets(number,5,stdin); //เก็บenterดวย!!!
   //int i = atoi(number); //arry to int แปลงไม่ได้จะเป็น0
   //printf("name=%s,i=%d\n",number,i);
  
   // char a = getchar();
   // getchar(); //ไว้กันenter
   // char b = getchar();
 
   //long l = atol(number);
   //double d = atof(number);
 
   // puts(number); //รับแค่สตริง
   // putchar(100); putchar('a');
 
 
//else if
 
   // //1 = True 0 = False
   // int found=0;
   // float isExist=0.0;
   // char isOnline='\0';
   // // สามค่านี้เป็น False
 
   // fgets(number,5,stdin);
   // int i = atoi(number);
 
   // if(i>=0 && i<=10){
   //     printf("if = %d",i>=0 && i<=10);
 
   // }   
   // else if (i<=50 || !found){
   //     printf("else if");
   // }
   // else {
   //     printf("else");
   // }
 
 
 
 
//loop
   fgets(number,5,stdin);
    int i = atoi(number);
   // int count=0;
   // while (count<i){
   //     printf("%d\n",count);
   //     count++;
   // }
 
 
   // for (int j = 0; j<i;j++){
   //     printf("%d\n",j);
   // }
 
   //while (1){} //อินฟินิตloop
}
