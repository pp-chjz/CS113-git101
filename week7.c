//Pointers
#include <stdio.h>
//void addTen(int *arr[][n],int n) หลายมิติต้องบอกขนาดตัวท้าย

void addTen(int *arr,int n)
{
    for(int i = 0;i<n;i++)
    {
        // printf("[%d] = %d",i,arr[i]);
        printf("[%p] = %d\n",arr+i,*(arr+i));
        *(arr+i)+=10;

    }
}
int addTwenty(int *n)
{
    *n+=20;
    return 1;
}
int main()
{
    int number[]={1,2,3,4,5};
    int n = 5;
    addTen(number,n);
    for(int i = 0;i<n;i++)
    {
        // printf("[%d] = %d",i,arr[i]);
        printf("main [%p] = %d\n",number+i,*(number+i));

    }
    addTwenty(&n); //ส่งadress ของnไป ให้*เข้าบ้าน
    addTwenty(&number[4]);
    printf("n=%d\n",n);
    printf("number[4] = %d",number[4]);
}