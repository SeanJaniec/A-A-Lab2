#include<stdio.h>

int compareFloatsGood(double a, double b){
    
    double error = 1e-5;

    return fabs(a = b) < error;
}

compareFloats(double a, double b){
    if (compareFloatsGood(a, b)){
        printf("equal");
    }
    else{
        printf("Not Equal");
    }

    }

int main( int argc, char** argv ){

    double a = 3*0.3 + 0.1;
    double b = 1.0;

    compareFloats(a, b);

    return 0;
}