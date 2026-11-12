#include<stdio.h>
void main()
{

    int byte,kb,gb,mb;
    printf("ENTER BYTES:\n");
    scanf("%d",&byte);
    kb=byte*(1024);
    mb=byte*(1024*1024);
    gb=byte*(1024*1024*1024);
    printf("KB: %d\n",kb);
    printf("MB: %d\n",mb);
    printf("GB: %d\n",gb);
}
