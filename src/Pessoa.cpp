#include "Pessoa.h"

//Pessoa::Pessoa(): Nome(""), CPF (0), Matricula(0){}

/*Pessoa::Pessoa()(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula)
{

}*/

void Pessoa::AcessarSistema()
{
    std::cout <<"****Acesso ao sistema concedido****";
}

std::string Pessoa::GetNome()
{
    return Nome;
}
int  Pessoa::GetCPF()
{
    return CPF;
}
int  Pessoa::GetMatricula()
{
    return Matricula;
}
void Pessoa::SetNome(std::string Nome)
{
    this->Nome = Nome;
}
void Pessoa::SetCPF(int CPF)
{
    this->CPF = CPF;
}
void Pessoa::SetMatricula(int Matricula)
{
    this->Matricula = Matricula;
}
void Pessoa::MostrarDados()
{
    std::cout << "****DADOS****\n";
    std::cout << "CPF: " << GetNome() << std::endl;
    std::cout << "Nome: " << GetCPF() << std::endl;
    std::cout << "Matricula: " << GetMatricula() << std::endl;
}
