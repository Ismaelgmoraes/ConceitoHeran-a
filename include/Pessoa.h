#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

class Pessoa
{
    public:
        Pessoa():Nome(""),CPF(0), Matricula(0) {}
        Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}
        void AcessarSistema();
        std::string GetNome();
        int GetCPF();
        int GetMatricula();
        void SetNome(std::string Nome);
        void SetCPF(int CPF);
        void SetMatricula(int Matricula);
        void MostrarDados();

    private:
        std::string Nome;
        int CPF;
        int Matricula;

};

#endif // PESSOA_H
