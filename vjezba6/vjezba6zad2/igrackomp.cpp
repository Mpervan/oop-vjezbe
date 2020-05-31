#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>  
#include "igrackomp.hpp"

using namespace std;

void ComputerPlayer::setnum(int br)
{
    num = br;
}

int ComputerPlayer::getnum()
{
    return num;
}

void ComputerPlayer::setdesna(int kuna)
{
    desna.push_back(kuna);
}

int ComputerPlayer::zbrojdesna()
{
    vector<int>::iterator it;
    int br = 0;
    for(it = desna.begin(); it != desna.end(); ++it)
    {
        br = br + *it;
    }
    return br;
}

void ComputerPlayer::setlijeva(int kuna)
{
    lijeva.push_back(kuna);
}

int ComputerPlayer::zbrojlijeva()
{
    vector<int>::iterator it;
    int br = 0;
    for(it = lijeva.begin(); it != lijeva.end(); ++it)
    {
        br = br + *it;
    }
    return br;
}

int ComputerPlayer::pogodizbr()
{
    srand(time(NULL));
    int br = 0;
    while(br == 0 && br == 4)
    {
        br = rand() % 8 + 1;
    }
    return br;
}

int ComputerPlayer::getbod()
{
    return bod;
}

void ComputerPlayer::plusbod()
{
    bod++;
}