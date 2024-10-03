#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <string>
using namespace std;

struct dados
{
    int pontos;
    string nome;
    char opcao;
    string resposta1;
    double porcentagemgay;
};
double levelgay(dados usuario) // função auxiliar para calcular a porcentagem  //struct em função sem ser void coloca nome do struct e o nome dele q vai para a principal
{
    usuario.porcentagemgay = (usuario.pontos / 100.0) * 100; // função já fala que retorno é do tipo double
    return usuario.porcentagemgay;
}

int main() // função principal
{
    dados usuario;      // puxo o struct
    double auxiliar;    // recebe a função
    usuario.pontos = 0; // incializa com 0 para começar cálculo

    cout << "Bem vindo ao teste" << endl;
    cout << "Insira seu nome por gentileza" << endl;

    getline(cin >> ws, usuario.nome);

    cout << "Responda as perguntas com " << "s ou n" << " ou " << "S ou n" << endl;

    cout << "Voce escuta Pablo Vittar? " << endl;
    cout << "S ou N " << endl;
    cin >> usuario.opcao;
    if (usuario.opcao == 'S' || usuario.opcao == 's')
    {
        usuario.pontos += 10;
        cout << "entao tu curte uma barbie diferenciada , cantal mal pra porra ainda " << endl;
    }
    else
    {
        cout << "poupe seus  ouvidos dessa tortura mesmo" << endl;
    }

    cout << "Usa luvinha para treinar na academia " << endl;
    cin >> usuario.opcao;
    if (usuario.opcao == 'S' || usuario.opcao == 's')
    {
        usuario.pontos += 40.5;
        cout << "A princesa agora precisa de luvinha" << endl;
    }
    else
    {
        cout << "Cara raiz, luva e coisa de Nutella" << endl;
    }

    cout << "Qual a melhor serie que ja viu?" << endl;
    getline(cin >> ws, usuario.resposta1);

    if (usuario.resposta1 == "Glee" || usuario.resposta1 == "Gossip Girl" || usuario.resposta1 == "Pretty Little Liars")
    {
        usuario.pontos += 25.5;
        cout << "SUSPEITO ISSO AI " << endl;
    }
    else if (usuario.resposta1 == "The Boys" || usuario.resposta1 == "the boys" || usuario.resposta1 == "Supernatural" || usuario.resposta1 == "supernatural" || usuario.resposta1 == "The boys")
    {
        usuario.pontos -= 20;
        cout << "QUE GOSTO BOM, MEU NOBRE, TMJ " << endl;
    }
    else
    {
        cout << "Nao conheco ou nao afeta a pontuacao" << endl;
    }
    cout << "Voce joga lol ? " << endl;
    cin >> usuario.opcao;
    if (usuario.opcao == 'S' || usuario.opcao == 's')
    {
        cout << "Ai vc e so cabaco msm " << endl;
    }
    else
    {
        cout << "CONTINUE ASSIM " << endl;
    }

    auxiliar = levelgay(usuario); // para inserir na auxiliar apenas uso nome do struct na principal , não preciso colcoar nome primário do struct

    cout << "Agora vamos ver a sua porcentagem gay" << endl;

    if (auxiliar <= 0)
    {
        cout << auxiliar << " % " << " gay " << endl;
        cout << "EL MACHO " << usuario.nome << " DETECTADO PELO SISTEMA " << endl;
    }
    else
    {
        cout << fixed << setprecision(2);
        cout << auxiliar << " % " << " gay " << endl;
    }

    return 0;
}