#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

class Pessoa
{
    public:
    std::string Nome;
    int CPF;
    int Matricula;
    void AcessarSistema();
    Pessoa():Nome(""),CPF(0), Matricula(0) {}
    Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}
};

#endif // PESSOA_H
