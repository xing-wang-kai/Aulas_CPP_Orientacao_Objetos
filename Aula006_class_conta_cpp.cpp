#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>


using namespace std;

class Person{
    protected:
        string name;
        string cpf;
        int idade;
    public:
        Person(string name, string cpf, int idade);

    protected:
        string get_name();
        string get_cpf();
        int get_idade();

        void set_name( string name );
        void set_cpf(string cpf);
        void set_idade(int idade);


};

    Person::Person(string _name, string _cpf, int _idade){
        name = _name;
        idade = _idade;
        cpf = _cpf;
    }

//methods get from Person class
    string Person::get_name(){
        return name;
    }
    string Person::get_cpf(){
        return cpf;
    }
    int Person::get_idade(){
        return idade;
    }

// Methods setter form person class

    void Person::set_name(string name){
        name = name;
    }

    void Person::set_cpf(string cpf){
        cpf = cpf;
    }
    void Person::set_idade(int idade){
        idade = idade;
    }

// definir a classe conta::
class Conta:public Person{
    private:
        string numero;
        double saldo;
        double limite;

    public:
        void sacar(double valor);
        void depositar(double valor);
        void mostrarconta();
        Conta(string _name, string _cpf, int _idade, string _numero, double _saldo);

    private:
        string get_numero();
        double get_saldo();
        double get_limite();

        void set_numero(string numero);
        void set_saldo(double saldo);
        void set_limite(double limite);

};

    string Conta::get_numero(){
        return numero;
    }
    double Conta::get_saldo(){
        return saldo;
    }
    double Conta::get_limite(){
        return limite;
    }

    void Conta::set_numero(string numero){
        numero = numero;
    }
    void Conta::set_saldo(double saldo){
        saldo = saldo;
    }
    void Conta::set_limite(double limite){
        limite = limite;
    }
    void Conta::sacar(double valor){
        if (valor > get_saldo()){
            cout << "não é possivel sacar o valor é maior que o saldo" << endl;
        }
        else{
            set_saldo(saldo -= valor);
        }
    }
    void Conta::depositar(double valor){
        set_saldo(saldo += valor);
    }
    void Conta::mostrarconta(){
        cout << "NOME: " << get_name() << endl
             << "CPF: " << get_cpf() << endl
             << "IDADE: " << get_idade() << endl
             << "NUMERO: " << get_numero() << endl
             << "SALDO: " << get_saldo() << endl
             << "LIMITE: " << get_limite() << endl;

    }


    Conta::Conta(string _name, string _cpf, int _idade, string _numero, double _saldo):Person(_name, _cpf, _idade){
        numero = _numero;
        saldo = _saldo;
        limite = (5000);
    }



int main(){


    Conta conta02("João", "333.333.333-33", 34, "1234-3", 3000);
    Conta conta01("joão", "222.222.222-22", 23, "1233-33", 3000);

    conta02.mostrarconta();


    return 0;
}
