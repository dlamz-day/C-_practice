#include <iostream>
#include <cstring> // for strcpy();

using namespace std;

class Cuboid
{
    private:
        int length, height, width;
        char Name[20];
    public :
        void setInfo(int l, int h, int w, char N[20]){
            length = l;
            height = h;
            width = w;
            strcpy(Name, N);
            cout << "Now the Name, length, height, width are " << Name << length<< height << width <<endl;
        }
        char* getName() {
            //char *tempChar = Name;
            return Name; 
        }
        int getLength() { return length; }
        int getHeight() { return height; }
        int getWidth() { return width; }
        // void setName(){
        //     cout << "type the Name :" << endl;
        //     cin.getline(Name, 20);
        //     cout << "Now the Name is " << Name << endl;
        // }
        // void setLength(){
        //     cout << "type the length :" << endl;
        //     cin >> length;
        //     cout << "Now the length is " << length << endl;
        // }
        // void setHeight(){
        //     cout << "type the height :" << endl;
        //     cin >> height;
        //     cout << "Now the height is " << height << endl;
        // }
        // void setWidth(){
        //     cout << "type the width :" << endl;
        //     cin >> width;
        //     cout << "Now the width is " << width << endl;
        // }
        int area (){
            return 2 * (length * height + length * width + height * width);
        }
        int volume(){
            return length * height * width;
        }
};

int main (int argc, char *argv[]){
    cout << " Hellloooo    \n\n";
    Cuboid size1;
    // size1.setName();
    // size1.setHeight();
    // size1.setLength();
    // size1.setWidth();
    size1.setInfo(3, 4, 5, "DandG");
    cout << "the area is " << size1.area() << endl << "the volume is " << size1.volume() <<endl;
    cout << "Now it's getFunction():" << size1.getName() << endl;
}