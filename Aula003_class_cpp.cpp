#include <iostream>


using namespace std;

class Conta{
    private:
        int numero;
        string nome;
        double saldo;
        double limite;
    public:
        Conta(int _numero, string _nome, double _saldo);
    public:
        int getNumero();
        string getNome();
        double getSaldo();
        double getLimite();
        void Sacar(double valor);
        void Depositar(double Valor);
        string Extrato();

    private:
        void setNumero(int _numero);
        void setNome(string _nome);
        void setSaldo(double _saldo);
        void setLimite(double _limite);

};
        Conta::Conta(int _numero, string _nome, double _saldo){
            setNumero(_numero);
            setNome(_nome);
            setSaldo(_saldo);
            setLimite(5000);
        }

        int Conta::getNumero(){
            return numero;
        }
        string Conta::getNome(){
            return nome;
        }
        double Conta::getSaldo(){
            return saldo;
        }
        double Conta::getLimite(){
            return limite;
        }

        void Conta::setNumero(int _numero){
            numero = _numero;
            }
        void Conta::setNome(string _nome){
            nome = _nome;
            }
        void Conta::setSaldo(double _saldo){
            saldo = _saldo;
            }
        void Conta::setLimite(double _limite){
            limite = _limite;
            }
        void Conta::Sacar(double valor){
            if (valor > getSaldo()){
                cout << "it is not possible to withdraw, the account balance is less than the withdrawal amount" <<endl;
            }
             else{
                    setSaldo(getSaldo() - valor);
            }
        }
        void Conta::Depositar(double valor){
            setSaldo(getSaldo() + valor);
        }

        string Conta::Extrato(){
            cout << "THE ACOOUNT BALANCE IS: " << getSaldo() << endl;
        }
int main() {

    Conta cliente_01(12345, "joaquim", 4000);
    cliente_01.Sacar(30000);
    cliente_01.Depositar(400);
    cliente_01.Extrato();

    cout << "THE NUMBER OF ACCOUNT : " << cliente_01.getNumero() << endl
         << "THE NAME OF CLIENTE : " << cliente_01.getNome() << endl
         << "THE ACCOUNT BALANCE IS : " << cliente_01.getSaldo() << endl
         << "THE ACCOUNT LIMIT: " << cliente_01.getLimite() << endl;


    return 0;
}
