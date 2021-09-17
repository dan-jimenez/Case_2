#include "Algorithms.h"

int main() {

    GroupPlayers * group = new GroupPlayers();


    group->addPlayer(202, "Danny J");
    group->addPlayer(201, "Aldo");
    group->addPlayer(203, "Steven");
    group->addPlayer(205, "Marco");
    group->addPlayer(210, "Juan Ca");
    group->addPlayer(200, "Stefen");

    group->listPlayers();
    cout << "Cantidad de elementos de la lista: " << group->getQuantity() <<endl;

    group->removePlayer(201);

    group->insertPlayer(206, "Alex", 0);

    group->listPlayers();

    cout<<"---------------------------"<<endl;

    int arr[] = {1,2,3,4,5};
    int *arrP = arr;
    int length = sizeof(arr)/ sizeof(arrP[0]);

    cout << sizeof(arr)/ sizeof(arrP[0])<< endl;
    sortBySelectionSort(arrP);

    system("PAUSE");
    return EXIT_SUCCESS;

}
