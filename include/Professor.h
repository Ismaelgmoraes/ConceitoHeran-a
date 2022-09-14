#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <Pessoa.h>


class Professor : public Pessoa
{
    public:
        void EfetuarChamada();
        void EntregarPauta();
        std::string GetDepartamento();
        void SetDepartamento(std::string Departamento);
        void MostrarDados();
        Professor(){}
        Professor(std::string NovoNome, int NovoCPF, int NovaMatricula,
        std::string NovoDepartamento):Pessoa(NovoNome, NovoCPF, NovaMatricula), Departamento(NovoDepartamento){}

    private:
        std::string Departamento;
};

#endif // PROFESSOR_H
