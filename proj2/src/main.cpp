/*
Napisz program konsolowy - kalkulator:
- Dostępne operacje: +, -, *, /, %
- Obsługa błędów
- Obsługa akumulatora (taka pamięć wbudowana w kalkulatorze)
* Konwersja systemów liczbowych (baza <=10)
*/

#include <iostream>
#include <cassert>

double memory;
bool mem_used = false;
bool calc_continous = true;

double add(double a, double b){
  memory = a + b;
  mem_used = true;
  return a + b;
}
double subract(double a, double b){
  memory = a - b;
  mem_used = true;
  
  return a - b;
}
double multiply(double a, double b){
  memory = a * b;
  mem_used = true;
  
  return a * b;
}
double divide(double a, double b){
 
  if(b == 0) std::cout<<" NIE MOZNA DZIELIC PRZEZ 0"<<std::endl; ;
  memory = a / b;
  mem_used = true;

  return a / b;
}
double mod(double a, double b){
  return a - (int)(a/b)*b;
}

void switch_op(char op, double num1, double num2){
  switch (op) 
    {
        case '+':
            std::cout << add(num1, num2);
            break;
        case '-':
            std::cout << subract(num1, num2);
            break;
        case '*':
            std::cout << multiply(num1, num2);
            break;
        case '/':
            std::cout << divide(num1, num2);
            break;
        case '%':
            std::cout << mod(num1, num2);
            break;

        default:
            std::cout << "ERROR, BLEDNY OPERATOR ";
            calc_continous = false; 
            break;

    } 
  } 


void menu(){
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



int main(){
 menu(); 

  return 0;
}
