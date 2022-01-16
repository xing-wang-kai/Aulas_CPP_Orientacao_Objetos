#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>


using namespace std;


class Pessoa{
    private:
        string nome;
        int idade;
        string cpf;
        string profissao;
        double salario;
    public:
        Pessoa(string _nome, int _idade, string _cpf, string _profissao, double _salario);
        string getnome();
        int getidade();
        string getcpf();
        string getprofissao();
        double getsalario();
        string setnome( string _nome );
        int setidade( int _idade );
        string setcpf( string _cpf );
        string setprofissao( string _profissao);
        double setsalario( double _salario );
};

    string Pessoa:: getnome(){
        return nome;
    }
    string Pessoa::getcpf(){
        return cpf;
        }
    int Pessoa::getidade(){
        return idade;
    }
    string Pessoa::getprofissao(){
        return profissao;
    }
    double Pessoa::getsalario(){
        return salario;
    }
    string Pessoa::setnome( string _nome){
        nome = _nome;
    }
    int Pessoa::setidade( int _idade){
        idade = _idade;
    }
    string Pessoa::setcpf( string _cpf){
        cpf  = _cpf;
    }
    string Pessoa::setprofissao( string _profissao){
        profissao = _profissao;
    }
    double Pessoa::setsalario( double _salario){
        salario = _salario;
    }
    Pessoa::Pessoa(string _nome, int _idade, string _cpf, string _profissao, double _salario){
        nome = _nome;
        idade = _idade;
        cpf = _cpf;
        profissao = profissao;
        salario = _salario;
    }



 int main(Pessoa) {

     Pessoa p1 = Pessoa("joão" , 23, "222.222.222-00", "pedreiro", 2000.34 );

     cout << "O NOME DA PESSOA É: "<< p1.getnome()
          << endl << "A IDADE EH: " << p1.getidade()
          << endl << "O CPF EH: " << p1.getcpf()
          << endl << "A PROFISAO EH: " << p1.getprofissao()
          << endl << "O SALARIO EH: " << p1.getsalario() <<endl;


 }



