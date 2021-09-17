//
// Created by Danny Jimenez on 9/16/2021.
//

#ifndef CASE_2_ALGORITHMS_H
#define CASE_2_ALGORITHMS_H

#include "List.h"


void sortBySelectionSort(int * pValuesToOrder, int length){
    int minimum, auxiliar;

    for(int i = 0; i < length; i++){
        minimum = i;
        for (int j = i+1; j < length; j++) {
            if(pValuesToOrder[j] < pValuesToOrder[minimum]){
                minimum = j;
            }
        }
        auxiliar = pValuesToOrder[i];
        pValuesToOrder[i] = pValuesToOrder[minimum];
        pValuesToOrder[minimum] = auxiliar;
    }


}

void sortByInsertionSort(GroupPlayers *groupPlayers){
    NodePlayer *actual = groupPlayers->firstNode->nextNode;
    NodePlayer *previus = groupPlayers->firstNode;
    NodePlayer *auxilar;
    NodePlayer *comparator;

    int index = 0;

    while (actual != NULL){
        comparator = groupPlayers->firstNode;
        index = 0;
        while (comparator != previus->nextNode){
            if (actual->player->name.compare(comparator->player->name) < 0){
                auxilar = actual;
                actual= actual->nextNode;
                groupPlayers->insert(auxilar, index);
                break;
            } else{
                index++;
                comparator = comparator->nextNode;
            }
        }
        if(previus->nextNode != actual){
            previus->nextNode = actual;
        } else{
            actual = actual->nextNode;
            previus = previus->nextNode;

        }
    }

}


#endif //CASE_2_ALGORITHMS_H
