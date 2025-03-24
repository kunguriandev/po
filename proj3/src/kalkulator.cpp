#include "kalkulator.h"
#include <cstdlib>
#include <iostream>
double Kalkulator::add(double a, double b){
  memory = a + b;
  mem_used = true;
  return a + b;
}
double Kalkulator::subract(double a, double b){
  memory = a - b;
  mem_used = true;
  
  return a - b;
}
double Kalkulator::multiply(double a, double b){
  memory = a * b;
  mem_used = true;
  
  return a * b;
}
double Kalkulator::divide(double a, double b){
 
  if(b == 0) 
  {
  std::cerr<<"NIE MOZNA DZIELIC PRZEZ 0"<<std::endl;
    memory = a ;
    mem_used = true;
    return memory;
  }else{
    memory = a / b;
    mem_used = true;
  
    return a / b;
  }
}
double Kalkulator::mod(double a, double b){
  return a - (int)(a/b)*b;
}

void Kalkulator::switch_op(char op, double num1, double num2){
  switch (op) 
    {
        case '+':
            std::cout << add(num1, num2)<<std::endl;
            break;
        case '-':
            std::cout << subract(num1, num2)<<std::endl;
            break;
        case '*':
            std::cout << multiply(num1, num2)<<std::endl;
            break;
        case '/':
            std::cout << divide(num1, num2)<<std::endl;
            break;
        case '%':
            std::cout << mod(num1, num2)<<std::endl;
            break;

        default:
            std::cout << "ERROR, BLEDNY OPERATOR "<<std::endl;
            calc_continous = false; 
            break;

    } 
  } 


void Kalkulator::updateCalc(){
  
  while(calc_continous){

    if(!mem_used){
      char op;
      std::cout<<"WYBIERZ DZIALANIE : + ; - ; * :/ ; % ; "<<std::endl;
      std::cin>>op; 
      
      double n1,n2;
      std::cout<<"podaj 2 liczby"<<std::endl;
      std::cin>>n1>>n2;
      switch_op(op, n1, n2); 
    } 
    else{
      char op;
      std::cout<<"WYBIERZ DZIALANIE : + ; - ; * :/ ; % ; "<<std::endl;
      std::cin>>op; 
      
      double n;
      std::cout<<"podaj nastepna liczbe"<<std::endl;
      std::cin>>n;
      switch_op(op, memory, n); 

    }

  }


}

