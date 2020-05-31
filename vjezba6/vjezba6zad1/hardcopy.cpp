#include <iostream>
#include <string>
#include "hardcopy.hpp"

using namespace std;

string HardCopyBook::getautor(){
    return autor;
}

string HardCopyBook::getnaslov(){
    return naslov;
}

int HardCopyBook::getgodina(){
    return godina;
}

void HardCopyBook::setautor(string c){
    autor.assign(c);
}

void HardCopyBook::setnaslov(string c){
    naslov.assign(c);
}

void HardCopyBook::setgodina(int br){
    godina = br;
}

int HardCopyBook::getbrstr()
{
    return brojstr;
}

void HardCopyBook::setbrstr(int br)
{
    brojstr = br;
}

void HardCopyBook::printaj()
{
    cout << autor << " | ";
    cout << naslov << " | ";
    cout << godina << " | ";
    cout << brojstr << endl;
}

string HardCopyBook::koja()
{
    string str = "HardCopyBook";
    return str;
}
