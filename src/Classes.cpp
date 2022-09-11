#include "Classes.h"
#include <iostream>

void Classes::SolicitarNumeros()
{
    std::cout <<" Num1: ";
    std::cin >> Num1;
    std::cout <<"\n Num2: ";
    std::cin >> Num2;
    MostrarResultado(Num1, Num2);
}

float Classes::Soma(int Num1, int Num2)
{
    return (Num1 + Num2);
}

void Classes::MostrarResultado(int Num1, int Num2)
{
    std::cout <<"\nSoma de: " << Num1 <<" + " << Num2 << " = " << Soma(Num1, Num2) << std::endl;
}
