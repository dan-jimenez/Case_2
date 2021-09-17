#include "Algorithms.h"

int main() {

    //-----------------------------------------------------------------------------------
    //Punto numero 1

    int integers[] = {22, 12, 33, 1, 4, 6, 10};
    int * pInteger = integers;
    int length = sizeof integers/sizeof (int);

    cout<<"-------------------------------------------"<<endl;
    cout<<"Selection Sort"<< endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"[";
    for(int i = 0; i < length; i++){
        cout<< integers[i] << "-";
    }
    cout << "]" <<endl;
    cout<<"-------------------------------------------"<<endl;

    sortBySelectionSort(pInteger, length);

    cout<<"[";
    for(int i = 0; i < length; i++){
        cout<< integers[i] << "-";
    }
    cout << "]" <<endl;
    cout<<"-------------------------------------------"<<endl;



    //----------------------------------------------------------------------------------
    //Punto numero 2
    GroupPlayers * group = new GroupPlayers();


    group->addPlayer(202, "Danny J");
    group->addPlayer(201, "Aldo");
    group->addPlayer(203, "Steven");
    group->addPlayer(205, "Marco");
    group->addPlayer(210, "Juan Ca");
    group->addPlayer(200, "Stefen");
    group->insertPlayer(206, "Alex", 0);


    group->listPlayers();
    cout << "Cantidad de elementos de la lista: " << group->getQuantity() <<endl<<endl<<endl;


    //-----------------------------------------------------------------------------------
    //Punto numero 3

    cout << "-------------------------------------------"<<endl;
    cout << "Lista ordenada mediante el algoritmo InsertionSort" <<endl;
    cout << "-------------------------------------------"<<endl;
    sortByInsertionSort(group);
    group->listPlayers();


    system("PAUSE");
    return EXIT_SUCCESS;

}
