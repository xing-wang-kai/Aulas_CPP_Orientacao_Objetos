#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>


using namespace std;

//the mother class name Person
class Person{
    protected:
        string name;
        int year;
        char sexo;
        string cpf;
    public:
        Person(string _name, int _year, char _sexo, string _cpf);
    protected:
        string getName();
        int getYear();
        char getSexo();
        string getCpf();

        void setName(string _name);
        void setYear(int _year);
        void setSexo(char _sexo);
        void setCpf(string _cpf);
};

//the subclass name Conta

class Conta: public Person{
    private:
        string number;
        double saldo;
        double limite;
    public:
        Conta(string _nome, int _year, char _sexo, string _cpf, string _id, double _saldo);
        double Sacar(double _valor);
        double depositar(double _valor);
        void mostraConta();
    protected:
        string getNumber();
        double getSaldo();
        double getLimite();
        void setNumber(string _number);
        void setSaldo(double _saldo);
        void setLimite(double _limite);
};
//methods of the Person class
    Person::Person(string _name, int _year, char _sexo, string _cpf){
        setName(_name);
        setYear(_year);
        setSexo(_sexo);
        setCpf(_cpf);
}
    string Person::getName(){
        return name;
    }
    int Person::getYear(){
        return year;
    }
    char Person::getSexo(){
        return sexo;
    }
    string Person::getCpf(){
        return cpf;
    }

    void Person::setName(string _name){
        name = _name;
    }
    void Person::setYear(int _year){
        year = _year;
    }
    void Person::setSexo(char _sexo){
        sexo = _sexo;
    }
    void Person::setCpf(string _cpf){
        cpf = _cpf;
    }
//methods from conta


    Conta::Conta(string _name, int _year, char _sexo, string _cpf, string _number, double _saldo):Person( _name,  _year,  _sexo,  _cpf){
        setNumber(_number);
        setSaldo(_saldo);
        setLimite(5000);
    }

    double Conta::Sacar(double _valor){
        if (_valor > getSaldo()){
            cout << "NOT ALLOWED!!" << endl;
        }
        else{
            setSaldo(getSaldo() - _valor);
        }
    }
    double Conta::depositar(double _valor){
        setSaldo(getSaldo() + _valor);
    }

    string Conta::getNumber(){
        return number;
    }
    double Conta::getSaldo(){
        return saldo;
    }
    double Conta::getLimite(){
        return limite;
    }
    void Conta::setNumber(string _number){
        number = _number;
    }
    void Conta::setSaldo(double _saldo){
        if(saldo < 0){
           cout << "NEGATIVE BALANCE ISN'T ALLOWED" << endl;
        }
        else{
            saldo = _saldo;
        }
    }
    void Conta::setLimite(double _limite){
            limite = _limite;
        }


    void Conta::mostraConta(){
        cout<< "THE NAME: " << getName() << endl
            << "THE AGE: " << getYear() << endl
            << "THE CPF: " << getCpf() << endl
            << "THE GENDER: " << getSexo() << endl
            << "THE ID: " << getNumber() << endl
            << "THE BALANCE: " << getSaldo() << endl
            << "THE LIMITE: " << getLimite() << endl;
    }


int main(){

    Conta Conta01("mathias", 34, 'M', "222.222.222-33", "1234-001", 4300);
    Conta01.Sacar(1800);
    Conta01.Sacar(50000);
    Conta01.mostraConta();

    return 0;
}
