//
//  main.cpp
//  Proyecto2B
//
//  Created by Miguel Cuellar on 4/13/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//
#include <iostream>
using namespace std;
int main() {
    int casos,great;
    int tamano1,tamano2;
    string uno,dos;
    cin>>casos;
    for (int ix=0; ix<casos; ix++) {
        cin>>uno>>dos;
        great=0;
        tamano1=uno.length()+1;
        tamano2=dos.length()+1;
        int mat[tamano1][tamano2];
        
        for (int i=0; i<=tamano1; i++) {
            for (int iy=0; iy<=tamano2; iy++) {
                if (i==0 || iy==0 )mat[i][iy]=0;
                
                else if (uno[i-1]==dos[iy-1]){
                    mat[i][iy]=mat[i-1][iy-1]+1;
                    great>mat[i][iy] ? great=great : great=mat[i][iy];
                }
                else mat[i][iy]=0;
            }
        }
        
        for (int k=0; k<tamano1; k++) {
            for (int l=0; l<tamano2; l++) {
                cout<<mat[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<"Case "<<ix+1<<": "<<great<<endl;
    }
    return 0;
}
