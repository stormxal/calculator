#include <iostream>
using namespace std;

int main () {

double number1;
double number2;
double resultado = 0;
char operacao;

cout << "digite o primeiro numero: \n";
cin >> number1;

cout << "qual a operacao desejada: \n";
cin >> operacao;

cout << "digite o segundo numero: \n";
cin >> number2;

if (operacao == '+') {
resultado = number1 + number2;}
else if (operacao == '-') {
resultado = number1 - number2;}
else if (operacao == '*'){
resultado = number1 * number2;}
else if (operacao == '/') {
    if (number2 == 0) {
        cout << "Erro: divisao por zero!\n";
        return 0;
    }
resultado = number1 / number2; } 
else {
    cout << "Operacao invalida!\n";
    return 0;
}

cout << "o resultado é: " << resultado;

}
