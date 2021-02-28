#include<bits/stdc++.h>

using namespace std;

float a, b, c;
int main() {
    scanf("%f%f%f", &a,&b,&c);

    if(a == 0) {
        if(b == 0)
            if(c == 0) printf("Phuong trinh vo so nghiem");
            else printf("Phuong trinh vo nghiem");
        if(b != 0) printf("%f", -c/b);
    }
    else {
        float del = b*b-4*a*c;

        //printf("%f", sqrt(del));
        if(del == 0) {
            printf("Phuong trinh co nghiem kep: \n");
            printf("%f", -b/(2*a));
        }
        else if(del > 0) {
            printf("Phuong trinh co hai nghiem phan biet: \n");
            float x_1 = (-b+sqrt(del))/(2*a);
            float x_2 = (-b-sqrt(del))/(2*a);
            printf("%f\n%f", x_1, x_2);
        }
        else {
            del = -del;
            float real = -b/(2*a);
            float imagin = sqrt(del)/(2*a);
            printf("Pt co nghiem phuc: \n");
            printf("%f+%fi\n", real, imagin);
            printf("%f-%fi", real, imagin);
        }
    }
    return 0;
}
