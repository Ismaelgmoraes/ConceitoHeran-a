#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include <Pessoa.h>


class Bibliotecario : public Pessoa
{
   public:
       Bibliotecario(){}
       Bibliotecario(std::string NovoNome, int NovoCPF, int NovaMatricula):Pessoa(NovoNome, NovoCPF, NovaMatricula){}
    void CadastrarLivros();
};

#endif // BIBLIOTECARIO_H
