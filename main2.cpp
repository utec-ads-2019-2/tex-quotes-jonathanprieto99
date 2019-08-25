#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string texto="\"To be or not to be,\" quoth the Bard, \"that\n"
             "is the question\".\n"
             "The programming contestant replied: \"I must disagree.\n"
             "To `C' or not to `C', that is The Question!\"";

int contarcomillas=0;

void resolver(string texto, int contarcomillas) {
    for (int i = 0; i < texto.size(); i++) {
        if(texto[i]=='"') {
            contarcomillas++;
            if (contarcomillas % 2 != 0) {
                texto[i] = '`';
                texto[i+1]='`';
            }
            if (contarcomillas % 2 == 0) {
                texto[i] = '\'';
                texto[i+1]='\'';
            }
        }
    }
    cout<<texto;
}



int main() {
    resolver(texto,contarcomillas);
}
