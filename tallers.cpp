#include<iostream>

int main(){
    int n;
    std::cout<<"ingrese el numero de vertices: ";
    std::cin>>n;

    float vertices [n][3];
    
    for (int i=0; i<n; i++){
        std::cout<<"ingrese la coordenada x "<< i+1<<": ";
        std::cin>>vertices[i][0];

        std::cout<<"ingrese la coordenada y "<< i+1<<": ";
        std::cin>>vertices[i][1];

        std::cout<<"ingrese la coordenada z "<< i+1<<": ";
        std::cin>>vertices[i][2];
    }

    int a;
    std::cout<<"ingrese el numero de caras: ";
    std::cin>>a;

    int caras[a][3];

    for (int i=0; i<a; i++){
        std::cout<<"ingrese cara "<< i+1<<": ";
        std::cin>>caras[i][0];

        std::cout<<"ingrese cara "<< i+1<<": ";
        std::cin>>caras[i][1];

        std::cout<<"ingrese cara "<< i+1<<": ";
        std::cin>>caras[i][2];
    }

    std::cout<<"codigo OBJ:"<< std::endl;

    for (int i=0; i<n; i++){
        std::cout<<"v " <<vertices[i][0]<<" "<<vertices[i][1]<<" "<<vertices[i][2]<<std::endl;
    }

    for (int i=0; i<n; i++){
        std::cout<<"f " <<caras[i][0]<<" "<<caras[i][1]<<" "<<caras[i][2]<<std::endl;
    }

    return 0;
}