#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    /*********************** Creazione di oggetti ******************************/
    // TODO Creare un nuovo studente "Mario" con eta 17 e media 7
    Studente M;
    M.nome="Mario";
    M.eta=17;
    M.media=7;
    M.stampaStudente();
    // TODO Creare un nuovo studente "Maria"  (questa volta con un puntatore) con eta 18 e media 8
     Studente A;
     Studente *P=&A;
    P->nome="Maria";
    P->eta=18;
    P->media=8;
    P->stampaStudente();

    /************************** Visualizzazione ********************************/
    // TODO Visualizzare il nome e la media sia di Mario che Maria

    return 0;
}
