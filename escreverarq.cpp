#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream teste; //cria o "objeto" da classe ofstream (escrever em arquivos)
    teste.open("teste.txt"); //.open abre o arquivo
    teste << "Matheus 123" << endl;
    teste.close(); // fechar o arquivo
    teste.open("teste.txt",ios::app); //para escrever depois do ultimo caractere no arquivo
    teste << "ERRO";
    teste.close();

    return 0;
}
