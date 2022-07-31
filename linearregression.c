#include <stdio.h>
int main(){
    float x[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    float y[] = {1, 2, 2.5, 3.5, 5.5,6.9,7.4,8,9,10};
    float p;
    float err;
    float b0 = 0;
    float b1 = 0;
    float alpha = 0.0001;
    int i;
    for (i = 0; i < 10000; i++) {
        int idx = i % 10;
        p = b0 + b1 * x[idx];
        err = p - y[idx];
        b0 = b0 - alpha * err;
        b1 = b1 - alpha * err * x[idx];
    }
return 0;
}
