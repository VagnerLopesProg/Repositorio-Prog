#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct produto {
    int codigo;
    string nome;
    int quantidade;
    float valor;
};

produto produtos[100];
int total = 0;

int main() {

    system("cls");

    int opcao = 0;

    while (opcao != 4) {

        cout << "\n===== RETAGUARDA =====\n";
        cout << "1 - Cadastro de produto\n";
        cout << "2 - Listar produtos\n";
        cout << "3 - Cadastro de bandeira\n";
        cout << "4 - Voltar\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch(opcao) {

            case 1:
                cout << "CADASTRO DE PRODUTO\n";

                cout << "Codigo: ";
                cin >> produtos[total].codigo;

                cin.ignore(1000, '\n');

                cout << "Nome do produto: ";
                getline(cin, produtos[total].nome);

                cout << "Quantidade: ";
                cin >> produtos[total].quantidade;

                cout << "Valor do produto: ";
                cin >> produtos[total].valor;

                total++;

                cout << "Produto cadastrado com sucesso!\n";
                break;

            case 2:
                cout << "\n======= ESTOQUE DE PRODUTOS =======\n";

                if (total == 0) {
                    cout << "Nenhum produto cadastrado.\n";
                } else {

                    for (int i = 0; i < total; i++) {

                        cout << "\nProduto: " << i + 1 << "\n";
                        cout << "Codigo: " << produtos[i].codigo << "\n";
                        cout << "Nome: " << produtos[i].nome << "\n";
                        cout << "Quantidade: " << produtos[i].quantidade << "\n";
                        cout << "Valor: " << produtos[i].valor << "\n";
                        cout << "------------------------------\n";
                    }
                }

                break;

            case 3:
                cout << "CADASTRO DE BANDEIRA\n";
                break;

            case 4:
                cout << "VOLTANDO....\n";
                break;

            default:
                cout << "OPCAO INVALIDA\n";
        }
    }

    return 0;
}