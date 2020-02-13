//Pass by Value
#include <stdio.h>
#include <stdlib.h>
 
 
//ประกาศฟังก์ชัน
int addTen(int x)
{
   x +=10;
   return x;
}
 
//ประกาศบอกว่ากำลังจะมีตัวนี้
int addTwenty();
int x=2000;
//int x; เก็บค่า0 goblo
 
int main()
{
   //int x; local เป็นเลขมั่วๆ923403 ต้องกำหนดค่าเริ่มต้น****
   int x = 90;
   int y = addTen(x); //เรียกใช้ฟังก์ชัน
   printf("addTen in main = %d\n",y);
   printf("addTwenty in main = %d\n",addTwenty());
}
 
int addTwenty() //ประกาศฟังก์ชัน
{
   x+=20;
   return x;
}
// int x=2000; //ตัวนี้จะใช้ได้ในบรรทัด 30 ลงไปเท่านั้น
 
 
 
 
//เรียกใช้ฟังชันซ้ำๆ
int x = 100;
int fac(int i)
{
   if(i==1) //เงื่อนไขหยุดลูป
   {
       return 1; //must have
   }
   return i*fac(i-1);
}
 
 
 
// strcat //ต่อสตริง
strchar
