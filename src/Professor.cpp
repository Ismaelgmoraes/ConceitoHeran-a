#include "Professor.h"
#include <iostream>

void Professor::EfetuarChamada()
{
    std::cout <<"Chamada efetuada\n";
}
void Professor::EntregarPauta()
{
    std::cout <<"Pauta entregue\n";
}
std::string Professor::GetDepartamento()
{
    return Departamento;
}
void Professor::SetDepartamento(std::string Departamento)
{
    this->Departamento = Departamento;
}
void Professor::MostrarDados()
{
    Pessoa::MostrarDados();
    std::cout << "Departamento: " << GetDepartamento() << std::endl;
}


