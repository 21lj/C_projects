#include<stdio>
int num,res;
int check(int n)
{
    if(n%2==0)
    {
        return 0;
    }
    else if(n%2==1)
    {
        return 1;
    }
}
void main()
{
    printf("Enter A Number: ");
    scanf("%d",&num);
    res=check(num);
    if(res==0)
    {
        printf("\n %d is EVEN!",num);
    }
    else{
        printf("\n %d is ODD!",num);
    }
}