#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>

//------------------ Definindo classe Racionais -------------------
class Racional {
    friend const std :: ostream& operator << (std :: ostream&, const Racional &);
    friend const std :: istream& operator >> (std :: istream&, Racional &);
    friend const Racional operator/ (const int &, const Racional&);
         
	public:
            int nume, deno;
            
//******************************************************************
//                         Construtores
//******************************************************************
            
            Racional () : nume (0), deno (1) {};                                     // método 1 -> construtora default r1;
            Racional (const int &_val): nume(_val), deno(1){};                       // método 2 -> r2(1);                                          
            Racional (const int &, const int &);                                     // método 3 -> r3(2,3);
            Racional (const Racional &_rac): nume(_rac.nume), deno (_rac.deno) {};   // método 4 -> construtora de cópia;
            
     
///*****************************************************************
///                Define operadores matemáticos
///*****************************************************************
            
            const Racional operator+ (const Racional &) const;
            const Racional operator- (const Racional &) const;
            const Racional operator* (const Racional &) const;
            const Racional operator/ (const Racional &) const;
            const Racional& operator= (const Racional &);                        
            const Racional& operator+= (const int &);
            const Racional& operator-= (const int &);
            const Racional& operator*= (const int &);
            const Racional& operator/= (const int &);
            Racional operator++ ();
            Racional operator-- ();
            
///********************************************************************
///            Define operadores lógicos com racionais
///********************************************************************
            
            const bool operator== (const Racional &) const;
            const bool operator!= (const Racional &) const;
            const bool operator>  (const Racional &) const;
            const bool operator<  (const Racional &) const;
            const bool operator>= (const Racional &) const;
            const bool operator<= (const Racional &) const ;
            
///*********************************************************************
///         Define operadores lógicos com inteiros
///*********************************************************************
            
            const bool operator== (const int &) const;
            const bool operator!= (const int &) const;
            const bool operator>  (const int &) const;
            const bool operator<  (const int &) const;
            const bool operator>= (const int &) const;
            const bool operator<= (const int &) const;

///*********************************************************************
///                   operador divisão
///*********************************************************************
            
            const Racional operator/ (const int &) const;
            
            
///*********************************************************************
///         Define função que reduz fração
///*********************************************************************                      
            Racional reduz ();         
};
///*******************************************************************
///            Define operações com inteiros
///*******************************************************************

const Racional operator+ (const int &, const Racional &);
const Racional operator- (const int &, const Racional &);
const Racional operator* (const int &, const Racional &);




#endif /* RACIONAL_H */