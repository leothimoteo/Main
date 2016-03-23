#include <Racional.h>
#include <iostream>
#include <cstdlib>

//************************ 1. Definindo funções da classe Racionais ****************
Racional resposta;

Racional:: Racional (const int &_a, const int &_b) : nume (_a), deno (_b)
{
     if (deno ==0) 
     {
        std :: cout << "------ Denominador nulo ------" << std :: endl;
        nume=0, deno=1;
     }
}

//********************* 2. Definindo operadores matemáticos *************************

// -------------------------- 2.1 Operador = ----------------------------------------
const Racional& Racional :: operator= (const Racional &rac)
{
    if (this != &rac) 
    {
        deno = rac.deno;
        nume = rac.nume;
    }
return *this;
}
// -------------------------- 2.2 Operador + ----------------------------------------
const Racional Racional :: operator+ (const Racional &rac) const 
{
	resposta.deno = (rac.deno * deno);
	resposta.nume = (rac.deno * nume)+ (rac.nume * deno);
	return resposta; 
} 

// ------------------------- 2.3 Operador << ----------------------------------------
const std :: ostream &operator << (std :: ostream&_os, const Racional &rac)
{
	_os << rac.nume << "/" << rac.deno;
	return _os;
	
}
//// ------------------------- 2.3 Operador >> ----------------------------------------
//std :: ostream &operator >> (std :: ostream&_os, const Racional &rac){
//	_os >> rac.nume >> "/" >> rac.deno;
//	return _os;

// -------------------------- 2.4 Operador - ----------------------------------------
const Racional Racional :: operator- (const Racional &rac) const 
{
	resposta.deno = (rac.deno * deno);
	resposta.nume = (rac.deno * nume)- (rac.nume * deno);
	return resposta; 
} 
// -------------------------- 2.5 Operador * ----------------------------------------
const Racional Racional :: operator* (const Racional &rac) const 
{
	resposta.deno = (rac.deno * deno);
	resposta.nume = (rac.nume * nume);
	return resposta; 
} 
// -------------------------- 2.6 Operador / ----------------------------------------
const Racional Racional :: operator/ (const Racional &rac) const 
{
    if (rac.nume == 0) 
    {
        std :: cout << "\n\n -------- Impossível realizar divisão por zero -----------";
        resposta=1; 
        return resposta;
    }
    else 
        {
        resposta.nume = (nume * rac.deno);
        resposta.deno = (rac.nume *deno);
        return resposta;                
    }
}
// -------------------------- 2.7 Operador += ----------------------------------------     
const Racional& Racional :: operator+= (const int &_val) 
{
    nume+= _val*deno;
}
// -------------------------- 2.8 Operador -= ----------------------------------------  
const Racional& Racional :: operator-= (const int &_val) 
{
    nume-=_val*deno;
}
// -------------------------- 2.9 Operador *= ----------------------------------------
const Racional& Racional :: operator*= (const int &_val)
{
    nume=nume*_val;    
}
// -------------------------- 2.10 Operador /= ----------------------------------------
const Racional& Racional :: operator/= (const int &_val) 
{
    deno*=_val;
}
// -------------------------- 2.11 Operador ++ ----------------------------------------
Racional Racional :: operator++ () 
{
    return Racional (nume+deno, deno);
}
// -------------------------- 2.11 Operador --  ----------------------------------------
Racional Racional :: operator-- ()
{
    return Racional (nume-deno, deno);
}
//********************* 3. Definindo operações com inteiros ****************************

// -------------------------- 3.1 Operador + -------------------------------------------
const Racional operator+ (const int &_val, const Racional &_rac)
{
    return Racional (_rac.nume + _rac.deno * _val, _rac.deno);
}

// -------------------------- 3.2 Operador - -------------------------------------------
const Racional operator- (const int &_val, const Racional &_rac) 
{
    if (_val < 0) 
    {
        return Racional (_rac.nume - _rac.deno * _val, _rac.deno);
    }
    else 
    {
        return Racional ( _rac.deno * _val - _rac.nume , _rac.deno);       
    }
}

// -------------------------- 3.3 Operador * -------------------------------------------
const Racional operator* (const int &_val, const Racional &_rac)
{
    return Racional (_val*_rac.nume, _rac.deno);
}

// -------------------------- 3.4 Operador / (rac/int) ---------------------------------
const Racional Racional :: operator/ (const int &_val) const            //função da classe amiga
{           
    return Racional (nume, deno*_val);                                  //número rac chama         
}

// -------------------------- 3.5 Operador / (int/rac) ---------------------------------
const Racional operator/ (const int &_val, const Racional &_rac)        //função amiga da classe
{     
    return Racional (_val*_rac.deno, _rac.nume);                        // número inteiro chama       
}

//*********************** 4. Definindo operadores lógicos ******************************

// -------------------------- 4.1 Operador == -------------------------------------------

const bool Racional :: operator== (const Racional &_rac) const 
{
    return nume==_rac.nume && deno== _rac.deno; 
    //return *this == _rac;
}
// -------------------------- 4.2 Operador != -------------------------------------------
const bool Racional :: operator!= (const Racional &_rac) const
{ 
    return nume!=_rac.nume && deno!= _rac.deno; 
    //return !(*this = _rac);
}
// -------------------------- 4.3 Operador > -------------------------------------------
const bool  Racional :: operator> (const Racional &_rac) const
{
    return nume*_rac.deno > deno*_rac.nume;
}
// -------------------------- 4.4 Operador < -------------------------------------------
const bool Racional :: operator< (const Racional &_rac) const
{
    return nume*_rac.deno < deno*_rac.nume;
}
// -------------------------- 4.5 Operador <= -------------------------------------------
const bool Racional :: operator<= (const Racional &_rac) const 
{
    return nume*_rac.deno <= deno*_rac.nume;
}
// -------------------------- 4.4 Operador >= -------------------------------------------
const bool  Racional :: operator>= (const Racional &_rac) const{
    return nume*_rac.deno >= deno*_rac.nume;
}

//******************* 5. Definindo operadores lógicos com inteiros ***************************

// -------------------------- INT 5.1 Operador == -------------------------------------------
const bool  Racional :: operator == (const int &_val) const 
{    
    return nume == deno*_val; 
}
// -------------------------- INT 5.2 Operador != -------------------------------------------
const bool  Racional :: operator != (const int &_val) const
{
    return nume != deno*_val;  
}
// -------------------------- INT 5.3 Operador <  -------------------------------------------
const bool  Racional :: operator> (const int &_val) const
{
    return nume > deno*_val;
}
// -------------------------- INT 5.4 Operador < -------------------------------------------
const bool  Racional :: operator< (const int &_val) const
{
    return nume < deno*_val;
}
// -------------------------- INT 5.5 Operador <  -------------------------------------------
const bool  Racional :: operator>= (const int &_val) const
{
    return nume >= deno*_val;
}

// -------------------------- INT 5.6 Operador < -------------------------------------------

const bool  Racional :: operator<= (const int &_val) const
{
    return nume <= deno*_val;
}

//******************************************************************************************
//                               FUNÇÃO REDUTORA
//******************************************************************************************

Racional Racional:: reduz()              //Encontra M.D.C entre numerador e denominador e
{              
    if (nume<0 && deno<0)                // reduz a fração
    {
        nume= -nume;
        deno=-deno;
    }
    else if (nume>0 && deno<0)
    {
        nume= -nume;
        deno=-deno;
    }
	for (int i=2;i<100;i++)
        {
		while(nume%i==0 && deno%i==0)
                {
			nume= nume/i;
			deno= deno/i;
		}
	}
return Racional (nume,deno);
}