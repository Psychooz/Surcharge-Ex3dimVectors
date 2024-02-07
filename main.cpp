#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Vector{
private:
    double x;
    double y;
    double z;
public:
    Vector(double newx,double newy,double newz){
        x=newx;
        y=newy;
        z=newz;
    }
    double getx() const {
        return x;
    }
    double gety() const {
        return y;
    }
    double getz() const {
        return z;
    }
    void setx(double newx){
        x=newx;
    }
    void sety(double newy){
        y=newy;
    }
    void setz(double newz){
        z=newz;
    }
    double magnitude() const {
        return sqrt(x*x+y*y+z*z);
    }
    Vector operator+(Vector &Vector2){
        Vector vect(x+Vector2.x,y+Vector2.y,z+Vector2.z);
        return vect;
    }
    Vector operator-(Vector &Vector2){
        Vector vect(x-Vector2.x,y-Vector2.y,z-Vector2.z);
        return vect;
    }

    Vector operator*(Vector &Vector2){
        Vector vect(x*Vector2.x,y*Vector2.y,z*Vector2.z);
        return vect;
    }
    bool operator==(Vector &Vector2){
        if((x==Vector2.x)&&(y==Vector2.y)&&(z==Vector2.z)){
            return true;
        }else{
            return false;
        }
    }
    //bool operator!=(Vector &Vector2){
    //    if(this == Vector2){
    //        return false;
    //    }else{
    //        return true;
    //    }
    //}
    bool operator!=(Vector &Vector2){
        if((x!=Vector2.x)||(y!=Vector2.y)||(z!=Vector2.z)){
            return true;
        }else{
            return false;
        }
    }

    friend ostream& operator<<(ostream& output,Vector vect){ //affiche info de "vect"
        output << "( "<<vect.x<<" , "<<vect.y<<" , "<<vect.z<<" )";
        return output;
    }
    friend istream& operator>>(istream& input, Vector& vect){ //entrer info du vect
        cout<<"Entrer x: ";
        input >> vect.x;
        cout<<"Entrer y: ";
        input >> vect.y;
        cout<<"Entrer z: ";
        input >> vect.z;
        return input;
    }

};

int main() {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector v3(1, 2, 3);

    cout << "v1: (" << v1.getx() << ", " << v1.gety() << ", " << v1.getz() << ")" << endl;

    cout << "Magnitude of v1: " << v1.magnitude() << endl;

    Vector sum = v1 + v2;
    cout << "Sum of v1 and v2: " << sum << endl;

    Vector diff = v1 - v2;
    cout << "Difference of v1 and v2: " << diff << endl;

    Vector prod = v1 * v2;
    cout << "Product of v1 and v2: " << prod << endl;

    cout << "Are v1 and v3 equal? "<< endl;
    if (v1 == v3) {
    cout << "v1 and v3 are equal" << endl;
    } else {
        cout << "v1 and v3 are not equal" << endl;
    }

    cout << "Are v1 and v2 not equal? "<< endl;
    if (v1 != v2) {
    cout << "v1 and v2 are not equal" << endl;
    } else {
    cout << "v1 and v2 are equal" << endl;
    }

    Vector v4(0, 0, 0);
    cout << "Enter coordinates for v4: "<<endl;
    cin >> v4;
    cout << "v4: " << v4 << endl;

    return 0;
}



