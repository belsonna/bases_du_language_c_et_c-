#include <iostream>

using namespace std;

main()
{
    float x, y, z;
    cout <<"ce progrramme permet de prendre 3 nombrees et les afficher par ordre decroissant\n";
    cout <<"entrez trois nombres\n";
    cin >>x  >>y  >>z;
    if (x>=y && x>=z)
        if (y>=z)
            cout <<x <<"\t" <<y <<"\t" <<z;
        else
            cout <<x <<"\t" <<z <<"\t" <<y;
    else
        if (y>=x && y>=z)
            if (x>=z)
                cout <<y <<"\t" <<x <<"\t" <<z;
            else
                cout <<y <<"\t" <<z <<"\t" <<x;
        else
            if (x>=y)
                cout <<z <<"\t" <<x <<"\t" <<y;
            else
                cout <<z <<"\t" <<y <<"\t" <<x;

}
