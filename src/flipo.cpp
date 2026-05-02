#include "../include/flipo.h"
 
static double potencia(double base, int exp) {
    if (exp == 0) return 1.0;
    double resultado = 1.0;
    int e = (exp > 0) ? exp : -exp;
    for (int i = 0; i < e; i++)
        resultado *= base;
    return (exp > 0) ? resultado : 1.0 / resultado;
}
 
static double factorial(int n) {
    if (n <= 1) return 1.0;
    double resultado = 1.0;
    for (int i = 2; i <= n; i++)
        resultado *= i;
    return resultado;
}

double absoluto(double x) {
    return (x < 0) ? -x : x;
}
 
double raiz(double x, int n) {
    if (x == 0.0) return 0.0;
    if (n <= 0)   return 0.0;   
 
    double r = x / n;           
    const double TOL    = 1e-12;
    const int    MAX_IT = 1000;
 
    for (int i = 0; i < MAX_IT; i++) {
        double fn  = potencia(r, n) - x;
        double dfn = n * potencia(r, n - 1);
        if (dfn == 0.0) break;
        double r_nuevo = r - fn / dfn;
        if (absoluto(r_nuevo - r) < TOL) {
            r = r_nuevo;
            break;
        }
        r = r_nuevo;
    }
    return r;
}
 
double exponencial(double x) {
    const int    TERMINOS = 60;
    double suma    = 0.0;
    double termino = 1.0;   
    for (int k = 1; k <= TERMINOS; k++) {
        suma   += termino;
        termino *= x / k;   
    }
    suma += termino;        
    return suma;
}
 
double normalizar(double x) {
    double dos_pi = 2.0 * PI;
    while (x >  PI) x -= dos_pi;
    while (x < -PI) x += dos_pi;
    return x;
}
 
double seno(double x) {
    x = normalizar(x);
    const int TERMINOS = 20;
    double suma    = 0.0;
    double termino = x;     
    for (int k = 0; k < TERMINOS; k++) {
        suma   += termino;
        termino *= -x * x / ((2 * k + 2) * (2 * k + 3));
    }
    return suma;
}

double conse(double x) {
    x = normalizar(x);
    const int TERMINOS = 20;
    double suma    = 0.0;
    double termino = 1.0;   
    for (int k = 0; k < TERMINOS; k++) {
        suma   += termino;
        termino *= -x * x / ((2 * k + 1) * (2 * k + 2));
    }
    return suma;
}