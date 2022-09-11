#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <Pessoa.h>


class Aluno : public Pessoa
{
  public:
    std::string Curso;
    Aluno(){}
    Aluno(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoCurso):Pessoa(NovoNome, NovoCPF,
    NovaMatricula), Curso(NovoCurso){}
    void RealizarProva();
};

#endif // ALUNO_H
