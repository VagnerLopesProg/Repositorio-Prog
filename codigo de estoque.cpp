#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



struct produto{
    int codigo;
    string nome;
    int quantidade;
    float valor;
};

produto produtos[100]; // banco de dados //

int total = 0; // controle total // 

int main() {

    system ("cls");

    int opcao = 0;

    while  (opcao != 4) {
        
       cout << "\n===== RETAGUARDA =====\n";
        cout << "1 - Cadastro de produto\n";
        cout << "2 - Cadastro de fornecedor\n";
        cout << "3 - Cadastro de bandeira\n";
        cout << "4 - Voltar\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch(opcao) {

            case 1:
                cout <<"CADASTRO DE PRODUTO\n";
                    cout <<"Codigo: ";
                    cin >> produtos[total].codigo;

                    cin.ignore();

                    cout <<"Nome do produto: ";
                    getline(cin, produtos[total].nome);

                    cout << "Quantidade: ";
                    cin >> produtos[total].quantidade;

                    cout << "Valor do produto: ";
                    cin >> produtos[total].valor;

                    total++;

                    cout <<"Produto cadastrado com sucesso!";

                break;

            case 2:
                cout <<"CADASTRO DE FORNECEDOR\n";
                break;

            case 3: 
                cout <<"CADASTRO DE BANDEIRA\n";
                break;

            case 4:
                cout <<"VOLTANDO....\n";
                break;

            default:
                cout <<"OPCAO INVALIDA\n";
        }
    }
    return 0;
}
