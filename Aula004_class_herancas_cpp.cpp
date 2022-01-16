#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

// the class mother of this project
class Pessoa{
    protected:
        string nome;
        int idade;
        string cpf;
        char sexo;
    public:
        Pessoa(string _nome, int _idade, string _cpf, char _sexo);
    protected:
        string getNome();
        int getIdade();
        string getCpf();
        char getSexo();
        void setNome(string _nome);
        void setIdade(int _idade);
        void setCpf(string _cpf);
        void setSexo(char _sexo);
};
//class filhas::
class Conta : public Pessoa{
    private:
        string id;
        double saldo;
        double limite;
    private:
        string getId();
        double getSaldo();
        double getLimite();
    // sets methods;
        void setId(string _id);
        void setSaldo(double _saldo);
        void setLimite(double _limite);
    public:
        void Sacar(double valor);
        void Depositar(double valor);
        void showCliente();
        Conta(string _nome, int _idade, string _cpf, char _sexo, string _id, double _saldo);
};
//methos of the mother class Pessoa
        string Pessoa::getNome(){
            return nome;
        }
        int Pessoa::getIdade(){
            return idade;
        }
        string Pessoa::getCpf(){
            return cpf;
        }
        char Pessoa::getSexo(){
            return sexo;
        }

        void Pessoa::setNome(string _nome){
            nome = _nome;
        }
        void Pessoa::setIdade(int _idade){
            idade = _idade;
        }
        void Pessoa::setCpf(string _cpf){
            cpf = _cpf;
        }
        void Pessoa::setSexo(char _sexo){
            sexo = _sexo;
        }

        Pessoa::Pessoa(string _nome, int _idade, string _cpf, char _sexo){
            setNome(_nome);
            setIdade(_idade);
            setCpf(_cpf);
            setSexo(_sexo);
        }

//methods for the class sons Conta
        string Conta::getId(){
            return id;
        }
        double Conta::getSaldo(){
            return saldo;
        }
        double Conta::getLimite(){
            return limite;
        }
    // sets methods;
        void Conta::setId(string _id){
            id = _id;
        }
        void Conta::setSaldo(double _saldo){
            saldo = _saldo;
        }
        void Conta::setLimite(double _limite){
            limite = _limite;
        }
        void Conta::Sacar(double valor){
            if (valor > getSaldo()){
                cout << "The value is : " << valor << " more than account balance: " << getSaldo() <<endl;
            }
            else{
                saldo -= valor;
            }
        }
        void Conta::Depositar(double valor){
            saldo += valor;
        }
        void Conta::showCliente(){

            cout << "NAME: " << getNome() << endl
                 << "YEAR: " << getIdade() << endl
                 << "CPF: " << getCpf() << endl
                 << "SEXO: " << getSexo() << endl
                 << "ID: " << getId() << endl
                 << "SALDO: " << getSaldo() << endl
                 << "LIMITE: " << getLimite() << endl;
        }
        Conta::Conta(string _nome, int _idade, string _cpf, char _sexo, string _id, double _saldo) : Pessoa( _nome, _idade, _cpf, _sexo){
            setId(_id);
            setSaldo(_saldo);
            setLimite(5000);
        }
int main() {

    cout << endl << "===============================================================" << endl;
    cout << "============Object Oriented C++ and Inheritance===============" << endl;
    cout << "===============================================================" << endl << endl;

    Conta Conta01("Joao", 23, "023.333.333-33", 'M', "1234-01", 3000);
    Conta Conta02("valeria", 42, "444.444.444-44", 'F', "1234-02", 5000);
    Conta01.Sacar(400);
    Conta01.showCliente();
        cout << endl;
    Conta02.showCliente();

    cout << endl << "===============================================================" << endl;
    cout << "========================THE PROGRAM END========================" << endl;
    cout << "===============================================================" << endl << endl;

    return 0;
}
