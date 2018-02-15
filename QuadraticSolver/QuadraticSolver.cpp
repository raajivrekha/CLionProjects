#include <cmath>
#include <iostream>
using namespace std;

//example can be a=2 b=-6 and c=5
// see khan academy link for the follow through

int main() {

    long double a, b, c;

    cout << "Solving a quadratic equation" << endl;
    cout << "Use standard form representation 'ax^2 + bx + c = 0'" << endl;
    cout << endl;
    cout << "Please enter a, b, and c: " << flush;
    cin >> a >> b >> c;
    cout << "You Entered: " << a << " " << b << " " << " & " << c << endl;


    //Discriminant of Quadratic Equations
    // discriminant is the b^2 - 4ac. under the radical sign of the formula
    // when discriminant is greater than 0, there are two solutions
    // when discriminant is equal to 0, there is only one solution. the x coordinate of the vertex
    // when discriminant is less than 0, there will be no 'real' solutions

    long double discriminant;
    discriminant = b*b - (4*a*c);
    cout << "The discriminant is: " << discriminant << endl;

    long double xVertex, yVertex;
    xVertex = (-b / 2*a);
    yVertex = ((a*(xVertex*xVertex)) + b*xVertex + c);
    cout << "Vertices are: " << "(" << xVertex << "," << yVertex << ")" << endl;
    cout << "x Vertex (axis of symmetry): " << xVertex << endl;
    cout << "y Vertex: " << yVertex << endl;

    if (discriminant > 0) {
        // find the two solutions
        // negative b plus ... and negative b minus ...

        long double equation1, equation2;
        equation1 = ((-b + sqrt(discriminant)) / 2*a ); // the +
        equation2 = ((-b - sqrt(discriminant)) / 2*a ); // the -
        cout << endl;
        cout << "First Real Root is: " << equation1 << endl;
        cout << "Second Real Root is: " << equation2 << endl;

    }

    else if (discriminant == 0) {
        // find the one solution

        long double equation1;
        equation1 = ((-b + sqrt(discriminant)) / 2*a );
        cout << endl;
        cout << "First and Second Real Roots are: " << equation1 << endl;

    }

    else {
        // for when the discriminant is less than 0
        // you'll get an imaginary number and complex roots
        long double imaginary;
        imaginary = ((sqrt(-discriminant)/(2*a)));
        cout << endl;
        cout << "Roots are Imaginary" << endl;
        cout << "Equation 1 = " << xVertex << "+" << imaginary << "i" << endl;
        cout << "Equation 2 = " << xVertex << "-" << imaginary << "i" << endl;

    }

    return 0;
}