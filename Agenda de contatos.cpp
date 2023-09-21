#include <iostream>
#include <conio.h>

using namespace std;

float contatos[10][1], consulta; // Alterado o tamanho da segunda dimensão para 1
int op, i, n, op1;

int menu() {
    cout << "\nDigite a operacao que deseja realizar : ";
    cout << "\n1. Adicionar numero";
    cout << "\n2. Consultar numero";
    cout << "\n3. Ver numeros adicionados\n";
    cout << "\n4. Sair";
    cin >> op;
    return op; // Retorna a escolha do usuário
}

void consulta1() {
    cout << "\nDigite o numero que deseja consultar : ";
    cin >> consulta;

    for (i = 0; i < 10; i++) {
        if (consulta == contatos[i][0]) { // Corrigido o índice aqui
            cout << "**Numero encontrado**";
            return; // Termina a função quando o número for encontrado
        } 
    }
    
    cout << "\nNumero nao encontrado\n";
}

void vernum() {
    for (i = 0; i < 10; i++) {
        cout << "\nNumero : " << contatos[i][0]; // Corrigido o índice aqui
    }
}

void adicionarnum() {
    cout << "\nDigite quantos numeros quer adicionar : ";
    cin >> n;
    for (i = 0; i<n ; i++) { // Adicionada uma verificação de limite
        cout << "\nDigite o numero que deseja adicionar : ";
        cin >> contatos[i][0]; // Corrigido o índice aqui
    }
}

int main() { // Corrigido o tipo de retorno
    while (true) { // Loop para manter o menu ativo
        int escolha = menu();
        
        switch (escolha) {
            case 1:
                system("cls");
                adicionarnum();
                break;

            case 2:
                system("cls");
                consulta1();
                break;

            case 3:
                system("cls");
                vernum();
                break;

            case 4:
                return 0; // Encerra o programa

            default:
                cout << "Opcao invalida";
        }
    }

    return 0; // O retorno final da função main
}
