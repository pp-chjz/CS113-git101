//Pointers Functions: Pass by Reference Array
 #include <stdio.h>

 void main()
 {
    int x =100;
    int number[]={1,2,3,4,5,6};
    int *ptr = &x; //ประกาศpointer ต้องมี* ตัวนี้ชี้ไปที่ adddress ของx ไม่ใช่าค่าของx!!

    printf("reference of x = %p\n",number);//&number[0]

    int *arrPtr;
    arrPtr = number;//ไม่ต้องมีดอกจันแล้วถ้ามาเรียกตัวโดนชี้ทีหลัง //เริ่ม0x00
    arrPtr+=3; //บวกค่าadddress //บวกช่องละ4 เพราะ intเก็บ4ช่อง
    *arrPtr +=3; //บวกค่าข้างใน
    printf("arrPtr = %p, *arrPtr = %d",arrPtr,*arrPtr);
    
 }
#include <stdio.h>

int main()
{
    int x=100;
    // int q=0144;//ฐาน8 %o ตอนprint
    // int w=0x64;//ฐาน16
    // printf("x = %d\n",x);
    // printf("reference of x = %lu\n",&x); //print adderss in memory
    // printf("reference of x = %p\n",&x); //ได้เลขฐาน 16

    //int number[1000]={1,2,3,4,5,6}; //ขนาด6
    // int number[100] 
    // int number[100]={1,2,3,4,5,6}; //ขนาด100แต่กำหนดมา6
    // number[1000]=200;
    // printf("index 1 = %d\n",number[1000]);
    // printf("reference of &number[1] = %p\n",&number[1]);
    // printf("reference of &number[0] = %p\n",&number[0]);
    // printf("reference of number = %p\n",number+1); //เรียกค่าaddress ของตำแหน่งที่0 ถ้า+1 ก็ไปอีกตำแหน่ง

    // int number[]={1,2,3,4,5,6};
    // int *ptr = &x; //ประกาศpointer ต้องมี* ตัวนี้ชี้ไปที่ adddress ของx ไม่ใช่าค่าของx!!

    // // int *arrPtr;
    // // arrPtr = number;//ไม่ต้องมีดอกจันแล้วถ้ามาเรียกตัวโดนชี้ทีหลัง //เริ่ม0x00
    // // arrPtr+=3; //บวกค่าadddress
    // // *arrPtr +=3; //บวกค่าข้างใน
    // // printf("arrPtr = %p, *arrPtr = %d",arrPtr,*arrPtr);

    // int number[]={1,2,3,4,5,6};
    // for (int *ptr = number;ptr<=&number[5];ptr++)
    // {
    //     printf("[%p] = %d\n",ptr,*ptr);
    // }
    // int *ptr2 = number;
    // for (int i=0 ; i<6 ; i++)
    // {
    //     printf("[%p] = %d\n",ptr2+i,*(ptr2+i));
    // }
 

    // char input[100] ;
    // int count = 0;
    // char c;
    // while( (c=getchar()) !='\n')
    // {
    //     input[count]=c;
    //     ++count;
    // }
    // input[count]='\0';
    // for (char *cPtr = input;*cPtr !='\0' ;cPtr++)
    // {
    //     printf("%c\n", *cPtr);
    // }


    char s[100];
    int i;
    int c;
    scanf("%d=%c=%s",&i,&c,s); //รับตามนี้ ส่งadress ห้ามส่ง&s
    printf("%d--%c--%s",i,c,s);

}
 

 void main()
 {
    int A[10];//ประกาศอาร์แรย์ขนาด10
    A[2]=5; //ให้ช่องที่สองเป็น5
    int b;
    b=A[2]+14;//ใช้งานเป็นintได้ปกติ
    printf("%d",A[10]);// arrayเริ่มจาก0 ห้ามดูผิด!!
    A[10]={1,4,7,9,0}//ตั้งค่าเริ่มต้นได้

    int B[2][3]; //arrayสองมิติ มีrow กับ collum
 }