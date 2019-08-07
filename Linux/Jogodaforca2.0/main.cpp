#include <iostream>

using namespace std;

int main()
{
    char palavra[30], secreta[30], letra[1];
    int i,chances,tentativas,tam,acertos;
    bool acerto;

    i = 0;
    tam = 0;
    chances = 0;
    tentativas = 0;
    acertos = 0;
    acerto = false;

    cout << "           #################################### \n";
    cout << "           #        JOGO DA FORCA   2.0       # \n";
    cout << "           #################################### \n";

    cout << "Digite quantas chances de acerto o jogador pode ter: ";
    cin >> chances;
    cout << "Peça para seu amigo(a) se virar e digite a palavra secreta: ";
    cin >> palavra;
    system ("reset");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i=0;i<30;i++){
        secreta[i] = '-';
    }

    while((chances > 0) && (acertos < tam)){
        cout << "A palavra tem " << tam << " Letras \n";
        cout << "Número de tentativas: " << tentativas << endl;
        tentativas++;
        cout << "Chances restantes :" << chances << endl;
        cout << "A palavra secreta é: ";
        for(i=0;i<tam;i++){
            cout << secreta[i];
        }
        cout << "\n";
        cout << "Digite uma letra: ";
        cin >> letra[0];
        for(i=0;i<tam;i++){

            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }

        }

        if(!acerto){
            chances--;
        }
            acerto = false;
            system ("reset");

    }

    if(acertos==tam){
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!";
        cout << "Parabéns você acertou";
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n";

        cout << "A palavra correta é: [" << palavra << "] \n\n";
    }else{
        cout << "Que pena você perdeu. :-( \n";
    }

    return 0;
}
