#include <iostream>
#include <string>

using namespace std;

int main() {
    // Alunos e as Notas
    string nomes[] = {"Ana", "Bia", "Caio", "Carlos", "Douglas", "Ezekiel", "Fabio", "Gabriel", "Jessica", "Joao"};
    double notas[] = {8.7, 8.3, 7.9, 7.9, 7.6, 7.3, 6.9, 6.2, 5.0, 10.0};

    char novaBusca;

    do {
        //nome para pesquisa
        cout << "Digite o nome para pesquisa: ";
        string nomePesquisa;
        cin >> nomePesquisa;

        // Pesquisar o nome na matriz
        int index = -1;
        for (int i = 0; i < 10; ++i) {
            if (nomes[i] == nomePesquisa) {
                index = i;
                break;
            }
        }

        //resultado da pesquisa
        if (index != -1) {
            cout << "Nota de " << nomePesquisa << ": " << notas[index] << endl;
        } else {
            cout << "Nome não encontrado." << endl;
        }

        // nova busca
        cout << "Nova busca? [S/N]: ";
        cin >> novaBusca;
    } while (novaBusca == 'S' || novaBusca == 's');
    
    

    return 0;
}




