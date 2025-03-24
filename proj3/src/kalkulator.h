#ifndef KALKULATOR_H
#define KALKULATOR_H

class Kalkulator{

public:
void updateCalc();

private:
  double add(double a, double b);
  double subract(double a, double b);
  double multiply(double a, double b);
  double divide(double a, double b);
  double mod(double a, double b);
  void switch_op(char op, double num1, double num2);

  double memory;
  bool mem_used = false;
  bool calc_continous = true;



};
#endif // !KALKULATOR_H
