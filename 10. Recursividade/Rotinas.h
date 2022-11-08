#ifndef ROTINAS_H_INCLUDED
#define ROTINAS_H_INCLUDED

using namespace std;

int somarInteiros(int n)
{
    if(n <= 0)
        return 0;
    return ((n-1) + (somarInteiros(n-1)));
}

int divisaoInteiros(int dividindo, int divisor)
{
    dividindo = dividindo - divisor;
    if(dividindo <= 0)
        return 1;
    return (1 + divisaoInteiros(dividindo, divisor));
}

int divisaoMetodo(int x, int y)
{
    if(x == y)
        return 1;
    if(x < y)
        return 0;
    return (1 + divisaoMetodo(x-y, y));
}

int restoDivisao(int dividindo, int divisor)
{
    dividindo = dividindo - divisor;
    if(dividindo > divisor)
        restoDivisao(dividindo, divisor);
    if(dividindo <= 0)
        return (dividindo + divisor);
    return (dividindo-1);
}

#endif // ROTINAS_H_INCLUDED
