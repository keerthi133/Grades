#include<studio.h>
void main()
{
int marks;
printf("enter your marks");
scand("%d",&marks);
if(marks<0||marks>100)
{
printf("wrong entry");
}
elseif(marks<40)
{
printf("grade F");
}
elseif(marks>=40&&marks<54)
{
printf("grade D");
}
elseif("marks>=54&&marks<69)
{
printf("grade C");
}
elseif(marks>=69&&marks<84)
{
printf("grade B");
}
else(marks>=84&&marks<100)
{
printf("grade A");
}
}

