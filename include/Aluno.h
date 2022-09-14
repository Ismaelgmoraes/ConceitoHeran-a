#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <Pessoa.h>


class Aluno : public Pessoa
{
    public:
        Aluno(): Curso("") {}
        Aluno(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoCurso):Pessoa(NovoNome, NovoCPF,
        NovaMatricula), Curso(NovoCurso){}
        void RealizarProva();
        std::string GetCurso();
        void SetCurso(std::string Curso);
        void MostrarDados();

    private:
        std::string Curso;
};

#endif // ALUNO_H
