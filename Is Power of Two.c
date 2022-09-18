#include<stdio.h>



int isPowerOfTwo (unsigned int num)
{
  return ((num != 0) && !(num & (num - 1)));
}

int main(){

    return 0;
}