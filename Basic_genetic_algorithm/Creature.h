//the creature must be an abstract creature
//fitness 
#ifndef STRUCT_CREATURE
#define STRUCT_CREATURE
#include<iostream>
using namespace std;

struct Creature{
    friend ostream& operator<<(ostream& output, Creature *creature){
        return creature->print(output);
    }

    public:
        virtual ~Creature() = 0;
        virtual int fitness() = 0;  //return an int from 0 to 100 depending on how adapted to the ambient the creature is
        virtual void mutate() = 0;
        virtual ostream& print(ostream&) = 0;
        virtual Creature* clone() = 0;


};
#endif