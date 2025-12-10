#include <iostream>
#include <vector>

using namespace std;

/***************************************************************************
 *                          Vector hands-on                               */

int main()
{
    /******************************************************************************
     * L'array è una zona di memoria fissa.
     * Il vector è una CLASSE che modella un array dinamico
     * e una serie di metodi per gestirlo in modo più comodo e sicuro.          */

    // Array classico (dimensione fissa)
    int arr[5] = {10, 20, 30, 40, 50};

    // Dichiarazione di vector (vettore dinamico di int, inizialmente vuoto)
    vector<int> v1;

    // Dichiarazione e inizializzazione di un vector con alcuni valori
    vector<int> v2 = {10, 20, 30};

    cout << "Esempio di array classico (dimensione fissa):" << endl;
    cout << "Primo elemento arr[0]: " << arr[0] << endl;
    cout << endl;

    cout << "Esempio di vector v2 (inizializzato con {10, 20, 30}):" << endl;
    cout << "Primo elemento v2[0]: " << v2[0] << endl;
    cout << endl;


    /*******************************************************************************************
     *      Accesso agli elementi: [] vs .at()
     *      Un vector internamente usa un array, ma espone un'interfaccia ad oggetti           */

    // Come con gli array, posso usare l'operatore []
    cout << "Accesso con []: v2[0] = " << v2[0] << endl;

    // Versione "object oriented" con controllo sugli indici: .at()
    cout << "Accesso con .at(): v2.at(0) = " << v2.at(0) << endl;
    // TODO che cosa succede se provo a fare v2.at(10)?


    /********************************************************************************
     * Ottenere informazioni sullo stato di un vector attraverso metodi            */

    // .size()
    cout << "Dimensione di v2 (numero di elementi): " << v2.size() << endl;
    cout << endl;

    // .empty()
    if (v1.empty())
        cout << "v1 è vuoto" << endl;
    else
        cout << "v1 NON è vuoto" << endl;
    cout << endl;

    // .front() e .back()
    cout << "Primo elemento di v2 (front): " << v2.front() << endl;
    cout << "Ultimo elemento di v2 (back): " << v2.back() << endl;
    cout << endl;


    /****************************************************************************
     *      Manipolare il contenuto di un vector attraverso i suoi metodi       */

    cout << "Contenuto iniziale di v1 (vuoto), ora aggiungiamo elementi con push_back():" << endl;

    // .push_back() aggiunge un elemento in fondo
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(15);

    cout << "Dopo tre push_back, v1 contiene: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "Dimensione di v1: " << v1.size() << endl;
    cout << endl;

    // .pop_back() rimuove l'ultimo elemento
    cout << "Usiamo pop_back() per rimuovere l'ultimo elemento di v1" << endl;
    v1.pop_back();

    cout << "Ora v1 contiene: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "Dimensione di v1: " << v1.size() << endl;
    cout << endl;

    // .insert() inserisce un elemento in una posizione specifica
    cout << "Usiamo insert() per inserire un elemento all'inizio di v1" << endl;
    v1.insert(v1.begin(), 100); // inserisce 100 in posizione 0

    cout << "Ora v1 contiene: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // .erase() elimina un elemento in una certa posizione
    if (!v1.empty()) {
        cout << "Usiamo erase() per eliminare il primo elemento di v1" << endl;
        v1.erase(v1.begin()); // elimina l'elemento in posizione 0
    }

    cout << "Dopo erase(), v1 contiene: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // .clear() svuota completamente il vector
    cout << "Usiamo clear() per svuotare completamente v1" << endl;
    v1.clear();

    cout << "Dopo clear(), v1.size() = " << v1.size() << endl;
    if (v1.empty())
        cout << "v1 ora è vuoto" << endl;
    else
        cout << "v1 NON è vuoto (qualcosa non va!)" << endl;
    cout << endl;

    return 0;
}
