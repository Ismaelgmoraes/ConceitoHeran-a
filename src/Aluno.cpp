#include "Aluno.h"

void Aluno::RealizarProva()
{
    std::cout <<"Prova realizada\n";
}
std::string Aluno::GetCurso()
{
    return Curso;
}
void Aluno::SetCurso(std::string Curso)
{
    this->Curso = Curso;
}
void Aluno::MostrarDados()
{
    Pessoa::MostrarDados();
    std::cout << "Curso: " << GetCurso() << std::endl;

}

