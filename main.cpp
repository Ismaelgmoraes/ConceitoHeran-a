#include <iostream>
#include "ClasseDerivada.h"
#include "Aluno.h"
#include "Professor.h"
#include "Bibliotecario.h"


using namespace std;

int main()
{
  Professor Marcos("Pacheco", 123456, 987654,"Udemy");
  Aluno Luke("Skywalker", 88888, 99999, "Jedi");
  Bibliotecario Obiwan("Kenoby", 1111, 2222);
  Marcos.MostrarDados();
  Luke.MostrarDados();
  Obiwan.MostrarDados();
  system("PAUSE");
    return 0;
}
