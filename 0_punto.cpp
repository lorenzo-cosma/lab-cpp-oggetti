#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                        Esempio: la classe punto                        */

class Punto {
public:
    //attributi della classe
    int x, y;
    
    // metodi della classe (in questo caso solo 1)
    void stampa(){ 
        cout << "(" << x << ", " << y << ")" << endl; // x e y sono i valori dell'oggetto specifico
    }
};

int main() {

    //Punto.x = 2; //Errore!! (commentare questa riga prima di eseguire)

    Punto p1; // Deve sempre essere creato un oggetto appartenente a una classe -> Punto è la classe, p1 è l'oggetto specifico
    p1.x = 2; // L'oggetto ha uno stato e viene valorizzato
    p1.y = 3;

    Punto p2; // Si possono creare più oggetti della stessa classe
    p2.x = 4;
    p2.y = 1;
    
    cout << "Punto 1: ";
    p1.stampa(); // Chiamata al metodo stampa

    cout << "Punto 2: ";
    p2.stampa();
}