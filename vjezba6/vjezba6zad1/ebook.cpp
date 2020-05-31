#include <iostream>
#include <string>
#include "ebook.hpp"

using namespace std;

string EBook::getdat()
{
    return datoteka;
}

string EBook::getautor(){
    return autor;
}

string EBook::getnaslov(){
    return naslov;
}

int EBook::getgodina(){
    return godina;
}

void EBook::setautor(string c){
    autor.assign(c);
}

void EBook::setnaslov(string c){
    naslov.assign(c);
}

void EBook::setgodina(int br){
    godina = br;
}

void EBook::setdat(string c)
{
    datoteka.assign(c);
}

int EBook::getmb()
{
    return megabajti;
}

void EBook::setmb(int br)
{
    megabajti = br;
}

void EBook::printaj()
{
    cout << autor << " | ";
    cout << naslov << " | ";
    cout << godina << " | ";
    cout << datoteka << " | ";
    cout << megabajti << endl;
}

string EBook::koja()
{
    string str = "EBook";
    return str;
}
