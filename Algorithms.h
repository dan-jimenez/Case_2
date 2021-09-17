//
// Created by Danny Jimenez on 9/16/2021.
//

#ifndef CASE_2_ALGORITHMS_H
#define CASE_2_ALGORITHMS_H

#include "List.h"

int auxilia;

void sortBySelectionSort(int * pValuesToOrder){
    int minimum, listLength;
    listLength = 0;
    cout<< listLength <<endl;

    for(int i =0; i < listLength; i++){
        minimum = i;
        for(int j = 0; j<listLength; j++){
            cout<<"Nada"<<endl;
        }
    }

}

void sortByInsertionSort(GroupPlayers *groupPlayers){

    NodePlayer *actual = groupPlayers->firstNode->nextNode;
    NodePlayer *previus = groupPlayers->firstNode;
    int counter = 0, index = 1;
    while (actual != NULL){
        while(previus->player->name.compare(actual->player->name) > 0){
            groupPlayers->insert(actual, (counter-1));
            counter++;
            actual = actual->nextNode;
        }
    }
}



#endif //CASE_2_ALGORITHMS_H
