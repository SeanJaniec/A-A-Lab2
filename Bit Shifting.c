#include <stdio.h>
#include <math.h>

// I found this recursive method that I really liked from from Computer Science, a YouTuber.
// https://www.youtube.com/watch?v=SdQ0VSEiLxY
int toBinary(int num)
{

    if (num < 2)
    {
        return num;
    }

    else
    {
        return toBinary(num / 2) * 10 + num % 2;
    }
}

int bsMultiply(int a, int b)
{
    if (b % 2 == 1)
    {
        printf("Not a power of two");
        return 0;
    }
    
    else if(a > 100000)
    {
        printf("Number too large");
        return 0;
    }
    
    
    

    int binaryNum = toBinary(a);

    for (int i = b; i >= 2; i / 2)
    {
        binaryNum = binaryNum * 10;
    }

    int finalNum = 0;
    int factor = 1;

    while (binaryNum >= 1)
    {
        if(binaryNum == 1){
            
            finalNum += factor;
            return finalNum;

        }

        else if (binaryNum % 10 == 1)
        {

            binaryNum = (binaryNum / 10) - 0.1;
            finalNum += factor;
            
        }
        factor = factor * 2;
    }

    return finalNum;
}

int main()
{
    bsMultiply(5, 4);


    return 0;
}
