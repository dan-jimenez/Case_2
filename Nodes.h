//
// Created by Danny Jimenez on 9/16/2021.
//

#ifndef CASE_2_NODES_H
#define CASE_2_NODES_H

#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


struct Player;
struct NodePlayer;
struct GroupPlayers;

struct Player{
    int number;
    string name;

    Player(string pName, int pNumber){
        number = pNumber;
        name = pName;
    }

    void print(){
        cout<<"Nombre: " << name << endl <<"Numero: " << number<< endl;
        cout<<"-------------------------------------------"<<endl;
    }

};

struct NodePlayer{
    Player * player;
    NodePlayer * nextNode;

    NodePlayer(Player * _player){
        player = _player;
        nextNode = NULL;
    }



};



#endif //CASE_2_NODES_H
