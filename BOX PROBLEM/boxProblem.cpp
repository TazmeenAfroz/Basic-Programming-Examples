/*To solve the box problem, we need to follow these steps:

    Prompt the user to enter the area of the flat cardboard.
    Calculate the length and width of the cardboard by finding the square root of the area and dividing it by 2.
    Write a function that takes the length and width of the cardboard as input and returns the side of the square that should be cut to maximize the volume. To do this, we need to find the derivative of the volume function with respect to the side length of the square, set it equal to zero, and solve for the side length. The resulting side length will maximize the volume of the box.
    Calculate the maximum volume of the box using the side length of the square that we found in step 3.
    Output the length and width of the cardboard and the side length of the square that should be cut to maximize the volume, along with the maximum volume.*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double findMaxVolume(double length, double width) {
// x can be find by taking derivative of maxvolume and then put it to zero

    double x = (length + width - sqrt(length*length + width*width - length*width))/6.0;
    // volume = height * length * width 
    // In the cube case the height is x and length is length -2x as we are cutting the corners from both sides like folding it from both sides
    double maxVolume = x * (length - 2*x) * (width - 2*x); 
    return maxVolume;
}

int main() {
    double area;
    cout << "Enter the area of the cardboard: ";
    cin >> area;
       
    double length = sqrt(area); 
    double width = area / length; 
    double x = (length + width - sqrt(length*length + width*width - length*width))/6.0; 
    double maxVolume = findMaxVolume(length, width); 

    
    cout << "Length of the cardboard: " << length << " inches" << endl;
    cout << "Width of the cardboard: " << width << " inches" << endl;
    cout << "Side of the square to be cut: " << fixed << setprecision(3) << x << " inches" << endl;
    cout << "Maximum volume of the box: " << fixed << setprecision(3) << maxVolume << " cubic inches" << endl;

    return 0;
}
