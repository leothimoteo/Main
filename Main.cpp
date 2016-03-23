//// Construir um programa que associe funções aos operadores lógico-matemáticos
//// Autor: Cairo Martins e Leonardo Thimoteo, 12.03.2016
//// Status: Completo


#include <cstdlib>
#include <Racional.h>
#include <iostream>

int main (){
	Racional R1, R2 (-3), R3(2,-3), R4 (R2), R5;
        R3.reduz();
        R4.reduz();
   
//*********************************************************************************
//                TESTANDO OPERADORES MATEMÁTICOS ENTRE RACIONAIS
//*********************************************************************************
        
        R5 = R3+ R2;
        R5.reduz();
        std :: cout << "O resultado de R3+R2 é:   "<< R5;
        R5 = R3-R2;
        R5.reduz();
        std :: cout << "\n\n O resultado de R3-R2 é:  " << R5;
        R5 = R2-R3;
        R5.reduz();
        std :: cout << "\n\n O resultado de R2-R3 é:  " << R5;
        R5 = R2*R4;
        R5.reduz();
        std :: cout << "\n\n O resultado de R2*R4 é:  " << R5;       
        R5 = R2/R3; 
        R5.reduz();
        std :: cout << "\n\n O resultado de R2/R3 é:  " << R5;
        R5 = R3/R2;
        R5.reduz();
        std :: cout << "\n\n O resultado de R3/R2 é:  " << R5;
//*********************************************************************************
//         TESTANDO OPERADORES MATEMÁTICOS ENTRE RACIONAIS E INTEIROS
//*********************************************************************************
        R5+=1;
        R5.reduz();
        std :: cout << "\n\n O resultado de R5+1 é:  " << R5;  
        R5-=1;
        R5.reduz();
        std :: cout << "\n\n O resultado de R5-1 é:  " << R5;  
        R5*=3;
        R5.reduz();
        std :: cout << "\n\n O resultado de R5*3 é:  " << R5;  
        R5/=2;
        R5.reduz();
        std :: cout << "\n\n O resultado de R5/2 é:  " << R5; 
        R5=R3+2;
        R5.reduz();
        std :: cout << "\n\n O resultado de R3+2 é:  " << R5; 
        R5 = 2+ R3;                
        R5.reduz();
        std :: cout << "\n\n O resultado de 2+R3 é:  " << R5; 
        R5 = R3-1;
        R5.reduz();
        std :: cout << "\n\n O resultado de R3-1 é:  " << R5; 
        R5 = 1-R3;
        R5.reduz();
        std :: cout << "\n\n O resultado de 1-R3 é:  " << R5; 
        R5 = 3*R4;
        R5.reduz();
        std :: cout << "\n\n O resultado de 3*R4 é:  " << R5; 
        R5 = R4*5;
        R5.reduz();
        std :: cout << "\n\n O resultado de R4*5 é:  " << R5; 
        R5= ++R3;
        R5.reduz();
        std :: cout << "\n\n O resultado de ++R3 é:  " << R5; 
        R5= --R3;
        R5.reduz();
        std :: cout << "\n\n O resultado de --R3 é:  " << R5; 
        R5= R3/2;
        R5.reduz();
        std :: cout << "\n\n O resultado de R3/2 é:  " << R5;
        R5=2/R3;  // chamada pela função amiga
        R5.reduz();
        std :: cout << "\n\n O resultado de 2/R3 é:  " << R5;
        //hello its me, i was wonderi
        
//*************************************************************************
//               TESTANDO OPERADORES LÓGICOS ENTRE RACIONAIS
//*************************************************************************

        R4==R2? std :: cout << "\n\n R4=R2": std :: cout << "\n\n R2!=R4";
        R2!=R3? std :: cout << "\n\n R3!=R2": std :: cout << "\n\n R3==R4";
        R4>R1? std :: cout << "\n\n R4>R1": std :: cout << "\n\n R4<R1";
        R1<R4? std :: cout << "\n\n R4>R1": std :: cout << "\n\n R4<R1";
        R4<=R2? std :: cout << "\n\n R4<=R2": std :: cout << "\n\n R4>R2";
        R4>=R2? std :: cout << "\n\n R4>=R2": std :: cout << "\n\n R4<R2";
        R2>R1? std :: cout << "\n\n R2>R1": std :: cout << "\n\n R1>R2"; //oi
        R3>R1? std :: cout << "\n\n R3>R1": std :: cout << "\n\n R1>R3"; //oi
        
        
//*************************************************************************
//               TESTANDO OPERADORES LÓGICOS ENTRE RACIONAIS
//*************************************************************************
        R2==-3? std:: cout << "\n\n R2=-3": std :: cout << "\n\n R2!=-3";
        R2!=3? std:: cout << "\n\n R2!=3": std :: cout << "\n\n R2==-3";
        R2>7? std:: cout << "\n\n R2>7": std :: cout << "\n\n R2<7";
        R2<7? std:: cout << "\n\n R2<7": std :: cout << "\n\n R2>7";
        R2>=7? std:: cout << "\n\n R2>=7": std :: cout << "\n\n R2<7";
        R2<=7? std:: cout << "\n\n R2<=7\n\n": std :: cout << "\n\n R2>7\n\n";
}
