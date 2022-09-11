#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <Pessoa.h>


class Professor : public Pessoa
{
    public:
    std::string Departamento;
    void EfetuarChamada();
    void EntregarPauta();
    Professor(){}
    Professor(std::string NovoNome, int NovoCPF, int NovaMatricula,
    std::string NovoDepartamento):Pessoa(NovoNome, NovoCPF, NovaMatricula), Departamento(NovoDepartamento){}
};

#endif // PROFESSOR_H
