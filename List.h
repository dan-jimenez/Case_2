//
// Created by Danny Jimenez on 9/16/2021.
//

#ifndef CASE_2_LIST_H
#define CASE_2_LIST_H


#include "Nodes.h"

struct GroupPlayers{
    NodePlayer *firstNode, *lastNode;

    GroupPlayers(){
        firstNode = lastNode = NULL;
    }

    bool addPlayer(int pNumber, string pName){
        if(firstNode == NULL){
            firstNode = lastNode = new NodePlayer(new Player(pName, pNumber));
            return true;
        } else{
            NodePlayer * newPlayer = new NodePlayer(new Player(pName, pNumber));
            lastNode->nextNode = newPlayer;
            lastNode = newPlayer;
            return true;
        }
    }

    void listPlayers(){
        NodePlayer *temporal = firstNode;
        cout<< "---------------- Jugadores ----------------" <<endl;
        while (temporal != NULL){
            temporal->player->print();
            temporal = temporal->nextNode;
        }
    }

    bool isEmpty(){
        if(firstNode == NULL){
            return true;
        } else{
            return false;
        }
    }

    int getQuantity(){
        int counter = 0;
        if(firstNode == NULL){
            return counter;
        }else{
            NodePlayer *temporal = firstNode;

            while (temporal != NULL){
                counter++;
                temporal = temporal->nextNode;
            }
            return counter;
        }

    }

    bool removePlayer(int pNumber){
        NodePlayer *temporal = firstNode;

        if (temporal->player->number == pNumber) {
            firstNode = temporal->nextNode;
            temporal->nextNode = NULL;
            return true;
        } else{
            NodePlayer *eliminado;
            while (temporal != NULL) {
                if (temporal->nextNode->player->number == pNumber) {
                    eliminado = temporal->nextNode;
                    temporal->nextNode = temporal ->nextNode->nextNode;
                    eliminado->nextNode = NULL;
                    return true;
                } else{
                    temporal = temporal->nextNode;
                }
            }
            return false;
        }
    }

    void insertPlayer(int pNumber, string pName, int pPosition){
        if(pPosition > getQuantity()){
            addPlayer(pNumber, pName);
        }else if( pPosition == 0){
            NodePlayer * newPlayer = new NodePlayer(new Player(pName, pNumber));
            newPlayer->nextNode = firstNode;
            firstNode = newPlayer;
        } else{
            NodePlayer *temporal = firstNode;
            int counter = 0;

            while (temporal!= NULL){
                if(counter == (pPosition-1)){
                    NodePlayer * newPlayer = new NodePlayer(new Player(pName, pNumber));

                    newPlayer->nextNode = temporal->nextNode;
                    temporal->nextNode = newPlayer;

                    counter++;
                }else{
                    counter++;
                    temporal = temporal->nextNode;
                }
            }
        }
    }

    void insert(NodePlayer *player, int pPosition){
        if(pPosition == 0){
            player->nextNode = firstNode;
            firstNode = player;
        } else{
            NodePlayer *temporal = firstNode;
            int counter = 0;

            while (temporal != NULL){
                if(counter == (pPosition-1)){
                    player->nextNode = temporal->nextNode;
                    temporal->nextNode = player;
                    break;
                }else{
                    counter++;
                    temporal = temporal->nextNode;
                }

            }
        }
    }
};


#endif //CASE_2_LIST_H
