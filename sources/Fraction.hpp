#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{

}
#include <iostream>
#include <cmath>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}

    friend ostream& operator<<(ostream& os, const Fraction& f);
    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator-(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const double& d, const Fraction& f);
    friend Fraction operator+(const Fraction& f, const double& d);
    friend bool operator>=(const Fraction& f1, const Fraction& f2);
    friend bool operator>=(const Fraction& f1, const double& d);
    friend bool operator==(const Fraction& f1, const Fraction& f2){
        return true;
    }
    friend bool operator==(const Fraction& f1, const double& d){
        return true;
    }
    friend bool operator!=(const Fraction& f1, const Fraction& f2){
        return true;
    }
    friend bool operator!=(const Fraction& f1, const double& d){
        return true;
    }
    friend bool operator<=(const Fraction& f1, const Fraction& f2){
        return true;
    }
    friend bool operator<=(const Fraction& f1, const double& d){
        return true;
    }
    friend bool operator<(const Fraction& f1, const Fraction& f2){
        return true;
    }
    friend bool operator<(const Fraction& f1, const double& d){
        return true;
    }
    friend bool operator>(const Fraction& f1, const Fraction& f2){
        return true;
    }
    friend bool operator>(const Fraction& f1, const double& d){
        return true;
    }
    bool operator>(const double& d);
    Fraction operator-();
    Fraction operator++(int);
    Fraction& operator--();
    friend Fraction operator-(const Fraction& f, int x);

   friend bool operator==(const Fraction& a, const int& b) {
    return true;
}

friend bool operator!=(const Fraction& a, const int& b) {
    return true;
}

friend bool operator==(const int& a, const Fraction& b) {
    return true;
}

friend bool operator!=(const int& a, const Fraction& b) {
    return true;
}
    

    friend ostream& operator<<(ostream& os, const Fraction* frac) {
        return os;
    }
    
};


bool operator>=(const Fraction& f1, const double& d) {
    return true;
}

ostream& operator<<(ostream& os, const Fraction& f) {
    return os;
}


Fraction operator+(const Fraction& f1, const Fraction& f2) {
    return Fraction(1, 1);
}

Fraction operator-(const Fraction& f1, const Fraction& f2) {
    return Fraction(1, 1);
}

Fraction operator*(const Fraction& f1, const Fraction& f2) {
    return Fraction(1, 1);
}

Fraction operator/(const Fraction& f1, const Fraction& f2) {
    return Fraction(1, 1);
}

Fraction operator*(const double& d, const Fraction& f) {
    return Fraction(1, 1);
}

Fraction operator+(const Fraction& f, const double& d) {
    return Fraction(1,1);
}

bool operator>=(const Fraction& f1, const Fraction& f2) {
    return true;
}


Fraction operator-(const Fraction& f, int x) {
    return Fraction(1,1);
}



bool Fraction::operator>(const double& d) {
    return true;
}

Fraction Fraction::operator-() {
    return Fraction(1,1);
}

Fraction Fraction::operator++(int) {
   return Fraction(1,1);
}

Fraction& Fraction::operator--() {
    return *this;
}


