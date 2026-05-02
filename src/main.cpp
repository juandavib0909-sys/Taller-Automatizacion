#include <iostream>
#include "../include/flipo.h"

int main() {

    std::cout << "\n";
    std::cout << "       PRUEBAS DE LA LIBRERIA FLIPO LA LIBRERIA MAS FLIPANTE QUE HAY EN EL FLIPADO MUNDO   \n";
    std::cout << "\n\n";

    
    std::cout << "-- absoluto --\n";
    std::cout << "absoluto(-7.5)  = " << absoluto(-7.5)  << "  (esperado: 7.5)\n";
    std::cout << "absoluto( 3.2)  = " << absoluto( 3.2)  << "  (esperado: 3.2)\n\n";

    
    std::cout << "-- raiz (Newton-Raphson) --\n";
    std::cout << "raiz(9,  2)  = " << raiz(9.0,  2) << "  (esperado: 3.0)\n";
    std::cout << "raiz(27, 3)  = " << raiz(27.0, 3) << "  (esperado: 3.0)\n";
    std::cout << "raiz(2,  2)  = " << raiz(2.0,  2) << "  (esperado: 1.4142135624)\n\n";

    
    std::cout << "-- exponencial (Serie de Taylor) --\n";
    std::cout << "exponencial(0)  = " << exponencial(0.0) << "  (esperado: 1.0)\n";
    std::cout << "exponencial(1)  = " << exponencial(1.0) << "  (esperado: 2.7182818285)\n";
    std::cout << "exponencial(2)  = " << exponencial(2.0) << "  (esperado: 7.3890560989)\n\n";

    
    std::cout << "-- normalizar --\n";
    std::cout << "normalizar(7.0)  = " << normalizar(7.0)  << "\n";
    std::cout << "normalizar(-7.0) = " << normalizar(-7.0) << "\n\n";

    
    std::cout << "-- seno (Serie de Taylor) --\n";
    std::cout << "seno(0)      = " << seno(0.0)  << "  (esperado: 0.0)\n";
    std::cout << "seno(PI/6)   = " << seno(PI/6) << "  (esperado: 0.5)\n";
    std::cout << "seno(PI/2)   = " << seno(PI/2) << "  (esperado: 1.0)\n";
    std::cout << "seno(PI)     = " << seno(PI)   << "  (esperado: ~0.0)\n\n";

    
    std::cout << "-- conse / coseno (Serie de Taylor) --\n";
    std::cout << "conse(0)     = " << conse(0.0)  << "  (esperado: 1.0)\n";
    std::cout << "conse(PI/3)  = " << conse(PI/3) << "  (esperado: 0.5)\n";
    std::cout << "conse(PI/2)  = " << conse(PI/2) << "  (esperado: ~0.0)\n";
    std::cout << "conse(PI)    = " << conse(PI)   << "  (esperado: -1.0)\n\n";

    
    std::cout << "-- Identidad pitagórica: seno^2(x) + conse^2(x) = 1 --\n";
    double angulo = 1.234;
    double identidad = seno(angulo) * seno(angulo) + conse(angulo) * conse(angulo);
    std::cout << "Para x = 1.234 : " << identidad << "  (esperado: 1.0)\n\n";

    std::cout << "\n";
    std::cout << "           FIN DE PRUEBAS DE LA FLIPANTE LIBRERIA FLIPANTEMENTE ASOMBROSA            \n";
    std::cout << "\n";

    return 0;
}