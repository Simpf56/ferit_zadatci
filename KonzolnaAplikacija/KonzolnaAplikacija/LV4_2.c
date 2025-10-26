#include <stdio.h>

int LV4_2(){
float a = 5;
float b = 7;
float c;
c = a / b;
printf("%d", c >= 0.1f && c <= 1.0f);
return 0;
}