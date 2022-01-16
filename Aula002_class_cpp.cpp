#include <iostream>
#include <stdlib.h>


using namespace std;

class Pessoa{
    // DEFINICOES DOS ATRIBUTOS
    private:
        int id;
        string nome;
        int idade;
    // DEFINICOES DOS METHODS
    public:
        Pessoa(int _id, string _nome, int _idade);
        string getNome();
        void setNome(string _nome);
        int getIdade();
        void setIdade(int _idade);
        int getId();
        void setId(int _id);
};

        Pessoa::Pessoa(int _id, string _nome, int _idade){

                id = _id;
                nome = _nome;
                idade = _idade;
              //  getId(_id);
              //  getNome(_nome);
             //   getIdade(_idade);
        }
        string Pessoa::getNome(){
                return nome;
                }
        void Pessoa::setNome(string _nome){
                nome = _nome;
        }

        int Pessoa::getIdade(){
                return idade;
        }

        void Pessoa::setIdade(int _idade){
                idade = _idade;
        }

        int Pessoa::getId(){
                return id;
        }

        void Pessoa::setId(int _id){
                id = _id;
        }



 int main () {

    Pessoa amigo(1234, "maria", 23);


        cout << "O NOME DO AMIGO EH " << amigo.getNome() << endl
             << "A IDADE DO AMIGO EH: " << amigo.getIdade() <<endl
             << "O ID DO AMIGO EH: " << amigo.getId()
             << endl;


    return 0;
}
