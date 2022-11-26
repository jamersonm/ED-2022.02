#ifndef EXERCIOUM_H_INCLUDED
#define EXERCIOUM_H_INCLUDED

#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

template<typename type_t, size_t N>
void OrdenaBolha(array<type_t, N>& v)
{
    int idx, idxFim = v.size()-1, trocou=1;
    type_t troca;

    while(idxFim && trocou)
    {
        trocou = 0;
        for(idx=0; idx<idxFim; idx++)
            if (v[idx] > v[idx +1]) // troca
            {
                troca    = v[idx];
                v[idx]   = v[idx+1];
                v[idx+1] = troca;

                trocou = 1;
            }

        idxFim--;
    }
}

template<typename type_t, size_t N>
void OrdenaShake(array<type_t, N>& v)
{
    int idx, idxInicio, idxFim, trocou=1;
    type_t troca;

    for(idxInicio=0, idxFim=v.size()-1; idxFim>idxInicio && trocou; idxInicio++, idxFim--)
    {
        trocou = 0;
        for(idx=idxInicio; idx<idxFim; idx++)
            if (v[idx] > v[idx +1]) // troca
            {
                troca    = v[idx];
                v[idx]   = v[idx+1];
                v[idx+1] = troca;

                trocou = 1;
            }

        for(idx=idxFim-1; idx>idxInicio; idx--)
            if (v[idx] < v[idx -1]) // troca
            {
                troca    = v[idx];
                v[idx]   = v[idx-1];
                v[idx-1] = troca;

                trocou = 1;
            }
    }
}

template<typename type_t, size_t N>
void OrdenaSelection(array<type_t, N>& v)
{
    int idx, idxMaior, idxFim = v.size()-1;
    type_t troca;

    while( idxFim )
    {
        idxMaior = 0;
        for(idx=1; idx<=idxFim; idx++)
            if (v[idx] > v[idxMaior]) // troca
                idxMaior = idx;

        if (idxMaior != idxFim)// && v[idxMaior] > v[idxFim])
        {
            troca       = v[idxFim];
            v[idxFim]   = v[idxMaior];
            v[idxMaior] = troca;
        }

        idxFim--;
    }
}

template<typename type_t, size_t N>
void OrdenaShakeSelection(array<type_t, N>& v)
{
    int idxInicio = 0, tamanho = v.size();
	int i, idxPosicao;
	type_t troca;

	while(idxInicio < tamanho)
	{
		idxPosicao = idxInicio;

		for(i=idxInicio+1; i<tamanho; i++)
			if (v[i] > v[idxPosicao])
				idxPosicao = i;

		troca         = v[tamanho-1];
		v[tamanho-1]  = v[idxPosicao];
		v[idxPosicao] = troca;

		tamanho--;

		//===
		if (idxInicio >= tamanho)
			break;
		//===

		idxPosicao = tamanho-1;

		for(i=tamanho-2; i>=idxInicio; i--)
			if (v[i] < v[idxPosicao])
				idxPosicao = i;

		troca         = v[idxInicio];
		v[idxInicio]  = v[idxPosicao];
		v[idxPosicao] = troca;

		idxInicio++;
	 }
}

template<typename type_t, size_t N>
void OrdenaQuick(array<type_t, N>& v, unsigned int idxInicio, unsigned int idxTermino)
{
    if (idxInicio >= idxTermino)
		return;

    int idxEsq, idxDir;
    type_t troca, centro;

    idxEsq = idxInicio;
    idxDir = idxTermino;
    centro = v[(int)(idxEsq + idxDir) / 2];

    while(idxEsq <= idxDir)
    {
        while(v[idxEsq] < centro)
            idxEsq++;

        while(v[idxDir] > centro)
            idxDir--;

        if(idxEsq >= idxDir)
            break;

        troca     = v[idxEsq];
        v[idxEsq] = v[idxDir];
        v[idxDir] = troca;

        idxEsq++;
        idxDir--;
    }

    troca         = v[idxEsq];
    v[idxEsq]     = v[idxTermino];
    v[idxTermino] = troca;

    OrdenaQuick(v, idxInicio, idxDir);
    OrdenaQuick(v, idxEsq, idxTermino);
}

#endif // EXERCIOUM_H_INCLUDED
