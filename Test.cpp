#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("TEST#1") // checks if adding works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    Fraction c = a + b;
    Fraction d = b + a;

    CHECK(c == d);
    CHECK(c == Fraction(7, 3));
}

TEST_CASE("TEST#2") // checks if multiplying works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    Fraction c = a * b;
    Fraction d = b * a;

    CHECK(c == d);
    CHECK(c == Fraction(10, 9));
}

TEST_CASE("TEST#3") // checks if subbing works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    Fraction c = a - b;
    Fraction d = b - a;

    CHECK(c == Fraction(1, 1));
    CHECK(d == Fraction(-1, 1));
}

TEST_CASE("TEST#4") // checks if dividing works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    Fraction c = a / b;
    Fraction d = b / a;

    CHECK(c == Fraction(5, 2));
    CHECK(d == Fraction(2, 5));
}

TEST_CASE("TEST#5") // checks if they are oposite
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    Fraction c = a / b;
    Fraction d = b / a;
    Fraction e = c * d;

    CHECK(e == Fraction(1, 1));
}

TEST_CASE("TEST#6") // dividing by 0
{
    Fraction a(0, 3);
    Fraction b(14, 21);

    CHECK_THROWS(b / a);
}

TEST_CASE("TEST#7") // checks if >= works
{
    Fraction a(5, 3);
    Fraction b(14, 21);

    CHECK(a >= b);
}

TEST_CASE("TEST#8") // checks if > works
{
    Fraction a(5, 3);
    Fraction b(14, 21);

    CHECK(a > b);
}

TEST_CASE("TEST#9") // checks if < works
{
    Fraction a(5, 3);
    Fraction b(14, 21);

    CHECK(b < a);
}

TEST_CASE("TEST#10") // checks if <= works
{
    Fraction a(5, 3);
    Fraction b(14, 21);

    CHECK(b <= a);
}

TEST_CASE("TEST#11") // checks if ++ works after
{
    Fraction a(5, 3);
    a++;

    CHECK(a == Fraction(8, 3));
}

TEST_CASE("TEST#12") // checks if ++ works befor
{
    Fraction a(5, 3);
    ++a;

    CHECK(a == Fraction(8, 3));
}

TEST_CASE("TEST#13") // checks if -- works after
{
    Fraction a(5, 3);
    a--;

    CHECK(a == Fraction(2, 3));
}

TEST_CASE("TEST#14") // checks if -- works befor
{
    Fraction a(5, 3);
    --a;

    CHECK(a == Fraction(2, 3));
}

TEST_CASE("TEST#15") // checks if not throws
{
    Fraction a(5, 3);
    Fraction b(14, 21);

    CHECK_NOTHROW(a * b);
    CHECK_NOTHROW(a + b);
    CHECK_NOTHROW(a - b);
    CHECK_NOTHROW(a / b);
}

TEST_CASE("TEST#16") // checks if += works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    a += b;

    CHECK(a == Fraction(7, 3));
}

TEST_CASE("TEST#17") // checks if -= works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    a -= b;

    CHECK(a == Fraction(1, 1));
}

TEST_CASE("TEST#18") // checks if *= works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    a *= b;

    CHECK(a == Fraction(10, 9));
}

TEST_CASE("TEST#19") // checks if /= works
{
    Fraction a(5, 3);
    Fraction b(14, 21);
    a /= b;

    CHECK(a == Fraction(5, 2));
}

TEST_CASE("TEST#20") // checks if ostream works
{
    Fraction a(5, 3);
    Fraction b(14, 21);

    CHECK_NOTHROW(a + b);
    CHECK_NOTHROW(a - b);
    CHECK_NOTHROW(a / b);
    CHECK_NOTHROW(a * b);
    CHECK_NOTHROW(2.3 * b);
    CHECK_NOTHROW(a + 2.421);
}