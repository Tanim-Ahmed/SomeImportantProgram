#include<iostream>
using namespace std;
public class rational
{
private:
    int numerator;
    int denominator;

}

public rational()
{
    int numerator = 1;
    int denominator = 1;
}
public rational(int numerator,int denominator){
this.numerator = numerator;
this.denominator = denominator;


}
public int getNumerator()
{
    return numerator;
}

public void setNumerator(int numerator)
{
    this.numerator = numerator;
}
public int getdenominator()
{
    return denominator;
}

public void setdenomerator(int denominator)
{
    this.denominator = denominator;
}

public String toString(){
return "("numerator + "/" + denominator +")";
}
