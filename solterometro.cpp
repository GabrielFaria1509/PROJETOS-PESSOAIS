#include <iostream>
#include <iomanip>
using namespace std;
struct dados
{
    int encontros;
    int opcao;
    string quantidade;
};
int main()
{
    dados solteiro;
    int solteirometro = 0;

    cout << "Em relacao ao numero de encontros que costuma ter , escolha" << "\n";
    cout << "nenhum,poucos,mediano ou muitos ?" << endl;
    getline(cin >> ws, solteiro.quantidade);
    if (solteiro.quantidade == "muitos")
    {
        cout << "Atacante" << endl;
        solteirometro = solteirometro + 0;
    }
    if (solteiro.quantidade == "mediano")
    {
        solteirometro += 30;
    }
    if (solteiro.quantidade == "poucos")
    {
        solteirometro += 40;
    }
    if (solteiro.quantidade == "nenhum")
    {
        solteirometro = solteirometro + 60;
        cout << "Bom que gasta menos dinheiro e evita estresse" << endl;
    }
    cout << "Desses encontros maioria da bom ? " << endl;
    cout << "1-sim 2-nao" << endl;
    cin >> solteiro.opcao;
    if (solteiro.opcao == 1)
    {
        solteirometro = solteirometro - 80;
    }
    if (solteiro.opcao == 2)
    {
        cout << "da muito errado , pouco ou mediano ? " << endl;
        getline(cin >> ws, solteiro.quantidade);
        if (solteiro.quantidade != "pouco" || "mediano")
        {
            solteirometro = solteirometro + 70;
        }
    }

    cout << "Ja ficou com alguem mais de uma vez ou esteve em algum relacionamento ?" << endl;
    cout << "1-sim 2-nao" << endl;
    cin >> solteiro.opcao;
    if (solteiro.opcao == 1)
    {
        solteirometro -= 40;
    }
    if (solteiro.opcao == 2)
    {
        solteirometro += 40;
    }
    cout << "Joga lol ?" << endl;
    cout << "1-sim 2-nao" << endl;
    cin >> solteiro.opcao;
    if (solteiro.opcao == 1)
    {
        solteirometro = solteirometro + 100;
        cout << "Ai voce nao ajuda amigo" << endl;
    }
    if (solteiro.opcao == 2)
    {
        solteirometro = solteirometro - 100;
        cout << "Continua assim" << endl;
    }

    if (solteirometro >= 100)
        cout << "Tamo no mesmo barco meu nobre" << endl;
    if (60 <= solteirometro && solteirometro < 100)
        cout << "esta bem , mas podia ta melhor" << endl;
    if (solteirometro < 60)
        cout << "ME ENSINE SEUS TRUQUES MESTRE" << endl;

    return 0;
}