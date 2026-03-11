#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} KOMPLEKSNI;

void ispisi(KOMPLEKSNI z) {
    if (z.im < 0)
        printf("%.2f - %.2fi\n", z.re, -z.im);
    else
        printf("%.2f + %.2fi\n", z.re, z.im);
}

int Prog2LV3_1() {

    KOMPLEKSNI br1, br2, rez;

    printf("Unesi realni i imaginarni dio prvog broja:\n");
    scanf("%lf %lf", &br1.re, &br1.im);

    printf("Unesi realni i imaginarni dio drugog broja:\n");
    scanf("%lf %lf", &br2.re, &br2.im);

    printf("\nZbroj:\n");
    rez.re = br1.re + br2.re;
    rez.im = br1.im + br2.im;
    ispisi(rez);

    printf("Razlika:\n");
    rez.re = br1.re - br2.re;
    rez.im = br1.im - br2.im;
    ispisi(rez);

    printf("Produkt:\n");
    rez.re = br1.re * br2.re - br1.im * br2.im;
    rez.im = br1.re * br2.im + br1.im * br2.re;
    ispisi(rez);

    printf("Kolicnik:\n");
    double nazivnik = br2.re * br2.re + br2.im * br2.im;
    rez.re = (br1.re * br2.re + br1.im * br2.im) / nazivnik;
    rez.im = (br1.im * br2.re - br1.re * br2.im) / nazivnik;
    ispisi(rez);

    printf("Modul prvog broja: %.2f\n", sqrt(br1.re * br1.re + br1.im * br1.im));
    printf("Modul drugog broja: %.2f\n", sqrt(br2.re * br2.re + br2.im * br2.im));

    return 0;
}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct {
//    double re;
//    double im;
//} KOMPLEKSNI;
//
//double korijen(double x) {
//    double g = x / 2.0;
//    int i;
//
//    for (i = 0; i < 20; i++) {
//        g = (g + x / g) / 2.0;
//    }
//
//    return g;
//}
//
//void ispisi(KOMPLEKSNI z) {
//    if (z.im < 0)
//        printf("%.2f - %.2fi\n", z.re, -z.im);
//    else
//        printf("%.2f + %.2fi\n", z.re, z.im);
//}

//int main() {
//
//    KOMPLEKSNI br1, br2, rez;
//
//    printf("Unesi realni i imaginarni dio prvog broja:\n");
//    scanf("%lf %lf", &br1.re, &br1.im);
//
//    printf("Unesi realni i imaginarni dio drugog broja:\n");
//    scanf("%lf %lf", &br2.re, &br2.im);
//
//    printf("\nZbroj:\n");
//    rez.re = br1.re + br2.re;
//    rez.im = br1.im + br2.im;
//    ispisi(rez);
//
//    printf("Razlika:\n");
//    rez.re = br1.re - br2.re;
//    rez.im = br1.im - br2.im;
//    ispisi(rez);
//
//    printf("Produkt:\n");
//    rez.re = br1.re * br2.re - br1.im * br2.im;
//    rez.im = br1.re * br2.im + br1.im * br2.re;
//    ispisi(rez);
//
//    printf("Kolicnik:\n");
//    double nazivnik = br2.re * br2.re + br2.im * br2.im;
//    rez.re = (br1.re * br2.re + br1.im * br2.im) / nazivnik;
//    rez.im = (br1.im * br2.re - br1.re * br2.im) / nazivnik;
//    ispisi(rez);
//
//    double mod1 = korijen(br1.re * br1.re + br1.im * br1.im);
//    double mod2 = korijen(br2.re * br2.re + br2.im * br2.im);
//
//    printf("Modul prvog broja: %.2f\n", mod1);
//    printf("Modul drugog broja: %.2f\n", mod2);
//
//    return 0;
//}