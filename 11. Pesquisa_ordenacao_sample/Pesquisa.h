#include <array>
#include <list>

#ifndef PESQUISA_H_INCLUDED
#define PESQUISA_H_INCLUDED

using namespace std;

template<typename type_t, size_t N>
int BuscaSequencial(array<type_t, N>& v, type_t chaveBusca)
{
	unsigned int i;
	for(i=0; i<v.size(); i++)
		if (v[i] == chaveBusca) // v.at(i)
			return i;

	return -1;
}

template<typename type_t>
int BuscaSequencial(list<type_t>& v, type_t chaveBusca)
{
    int i=0;
	list<int>::iterator iter;
	for(iter=v.begin(); iter!=v.end(); iter++, i++)
		if (*iter == chaveBusca)
			return i;

	return -1;
}

template<typename type_t, size_t N>
int BuscaSequencialOrdenada(array<type_t, N>& v, type_t chaveBusca)
{
	unsigned int i;
	for(i=0; i<v.size(); i++)
		if (v[i] == chaveBusca) // v.at(i)
			return i;
		else
		if (v[i] > chaveBusca)
			return -1;

	return -1;
}

template<typename type_t>
int BuscaSequencialOrdenada(list<type_t>& v, type_t chaveBusca)
{
    int i=0;
	list<int>::iterator iter;
	for(iter=v.begin(); iter!=v.end(); iter++, i++)
		if (*iter == chaveBusca)
			break;
		else
			if (*iter > chaveBusca)
				return -1;/*
			{
				iter = v.end();
				break;
			}
*/
	return i;
}

template<typename type_t, size_t N>
int BuscaBinariaNaoRecursiva(array<type_t, N>& v, type_t chaveBusca)
{
	int idxInicio, idxFim, idxPontoCentral;

	idxInicio = 0;
	idxFim    = v.size() -1;

	while (idxInicio <= idxFim)
	{
		idxPontoCentral = (idxInicio + idxFim) / 2;

		if (chaveBusca == v[idxPontoCentral])
			return idxPontoCentral;

		if (chaveBusca < v[idxPontoCentral])
			idxFim    = idxPontoCentral -1;
		else
			idxInicio = idxPontoCentral +1;
	}

	return -1;
}

template<typename type_t, size_t N>
int BuscaBinariaRecursiva(array<type_t, N>& v, int idxInicio, int idxFim, type_t chaveBusca)
{
	int idxPontoCentral;

	//if(idxInicio >= idxFim)   ???
	if(idxInicio > idxFim)
		return -1;

	idxPontoCentral = (idxInicio + idxFim) / 2;

	if (chaveBusca == v[idxPontoCentral])
		return idxPontoCentral;

	if (chaveBusca < v[idxPontoCentral])
		return BuscaBinariaRecursiva(v, idxInicio, idxPontoCentral -1, chaveBusca);

	return BuscaBinariaRecursiva(v, idxPontoCentral +1, idxFim, chaveBusca);
}

template<typename type_t, size_t N>
int BuscaBinariaRecursiva(array<type_t, N>& v, type_t chaveBusca)
{
	return BuscaBinariaRecursiva(v, 0, v.size() -1, chaveBusca);
}

#endif // PESQUISA_H_INCLUDED
