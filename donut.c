#include <stdio.h>
int k; 
double sin(double), cos(double); 
main() { 
    float A = 0; 
    float B = 0; 
    float i; 
    float j; 
    float z[1760]; 
    char b[1760]; 
    printf("\x1b[2J"); 
    while(1) { 
        memset(b, 32, 1760); 
        memset(z, 0, 7040); 
        for (j = 0; 6.28 > j; j += 0.07) { 
            for (i = 0; 6.28 > i; i += 0.02) { 
                float c = (float) sin(i); 
                float d = (float) cos(j); 
                float e = (float) sin(A); 
                float f = (float) sin(j); 
                float g = (float) cos(A); 
                float h = d + 2; 
                float D = 1 / (c * h * e + f * g + 5); 
                float l = (float) cos(i); 
                float m = (float) cos(B); 
                float n = (float) sin(B); 
                float t = c * h * g - f * e; 
                int x = (int) (40 + 30 * D * (l * h * m - t * n)); 
                int y = (int) (12 + 15 * D * (l * h * n + t * m)); 
                int o = x + 80 * y; 
                int N = (int) (8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n)); 
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) { 
                    z[o] = D; 
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0]; 
                } 
            } 
        } 
        printf("\x1b[H"); 
        for (k = 0; 1761 > k; k++) { 
            putchar(k % 80 ? b[k] : 10); 
        } 
        A += 0.04; 
        B += 0.02; 
    } 
} 
