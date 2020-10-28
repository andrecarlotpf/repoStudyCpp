#include <iostream>

#define LOG(x)  std::cout << x << std::endl

void PlusPlusRef(int& valor)
{
	valor++;
}

void PlusPlusPtr(int* valor)
{
	(*valor)++;
}

int main()
{
	int var = 3;
	LOG("Valor da variavel var");
	LOG(var);

	LOG("=============================================================================");
	// Armazenando endereco da variavel
	int* ptr = &var;

	LOG("Valor dentro do ponteiro - int* ptr = &var");
	LOG(ptr);

	LOG("=============================================================================");
	// Endereco do ponteiro
	LOG("Endereco do ponteiro - &ptr");
	LOG(&ptr);

	LOG("=============================================================================");
	// Pegando o valor do endereco de memoria apontado
	LOG("Pegando o valor do endereco de memoria apontado(derreferencing) - *ptr");
	LOG(*ptr);

	LOG("=============================================================================");
	// Ponteiro apontando para o endereco do ponteiro
	int** ptr2 = &ptr;

	LOG("Derreferencing ptr2(Ponteiro para o ponteiro ptr) - *ptr2");
	LOG(*ptr2);

	LOG("Derreferencing ptr2(Ponteiro para o ponteiro ptr) - **ptr2");
	LOG(**ptr2);

	LOG("=============================================================================");

	LOG("Usando ponteiro para alterar a variavel VAR numa funcao sem retorno");
	PlusPlusPtr(ptr);
	LOG(var);

	LOG("=============================================================================");

	LOG("Usando referencia para alterar a variavel VAR numa funcao sem retorno - good practice");
	int& var_ref = var;
	PlusPlusRef(var_ref);
	LOG(var);
	LOG("Referencia cria nada mais que um alias para a variavel.");

}