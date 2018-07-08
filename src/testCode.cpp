//============================================================================//
//
//	File Name	: testCode.c
//	Create Date	: 2018/07/08
//	Designers	: Deniz Uras
//	Description	: Test Code of Classes
//
//	Important Notes:
//
//============================================================================//


//============================================================================//
//=============================== INCLUDES ===================================//
//============================================================================//
#include <iostream>
#include "fraction.h"
#include "date.h"

//============================================================================//
//==========================  MACRO DEFINITIONS ==============================//
//============================================================================//

//============================================================================//
//=========================== TYPE DEFINITIONS ===============================//
//============================================================================//


//============================================================================//
//=========================== CLASS DEFINITIONS ==============================//
//============================================================================//

//============================================================================//
//========================== FUNCTION PROTOTYPES =============================//
//============================================================================//


//============================================================================//
//============================ GLOBAL VARIABLES ==============================//
//============================================================================//

//============================================================================//
//============================ PRIVATE FUNCTIONS =============================//
//============================================================================//

//============================================================================//
//============================ PUBLIC FUNCTIONS ==============================//
//============================================================================//

void testOfFractionClass()
{
	Fraction f1 = Fraction::random();
	Fraction f2{ 1,-3 };
	Fraction f3 = -f2;
	Fraction f4 = { 2,-3 };
	Fraction f5 = "-15/72";
	Fraction f6 = 3.2;
	Fraction f7 = 2;
	Fraction f8(-3, -5);
	Fraction f9;

	std::cout << "f1 = " << f1 << "\n";
	std::cout << "f2 = " << f2 << "\n";
	std::cout << "f3 = " << f3 << "\n";
	std::cout << "f4 = " << f4 << "\n";
	std::cout << "f5 = " << f5 << "\n";
	std::cout << "f6 = " << f6 << "\n";
	std::cout << "f7 = " << f7 << "\n";
	std::cout << "f8 = " << f8 << "\n";
	std::cout << "f9 = " << f9 << "\n";

	std::cout << "Deger giriniz : \n";
	std::cin >> f9;
	std::cout << "f9 = " << f9 << "\n";

	std::cout << "\n***comparing operators***\n";
	std::cout << "(" << f1 << ")" << " < " << "(" << f2 << ")" << " = " << (f1 < f2) << "\n";
	std::cout << "(" << f1 << ")" << " > " << "(" << f2 << ")" << " = " << (f1 > f2) << "\n";
	std::cout << "(" << f1 << ")" << " <= " << "(" << f2 << ")" << " = " << (f1 <= f2) << "\n";
	std::cout << "(" << f1 << ")" << " >= " << "(" << f2 << ")" << " = " << (f1 >= f2) << "\n";
	std::cout << "(" << f1 << ")" << " == " << "(" << f2 << ")" << " = " << (f1 == f2) << "\n";
	std::cout << "(" << f1 << ")" << " != " << "(" << f2 << ")" << " = " << (f1 != f2) << "\n";
	std::cout << "\n";

	std::cout << "\n***operators***\n";
	std::cout << "f1 = " << f1 << "\n" << "f2 =" << f2 << "\n";
	std::cout << "f1 + f2 = " << f1 + f2 << "\n";
	std::cout << "f1 - f2 = " << f1 - f2 << "\n";
	std::cout << "f1 * f2 = " << f1 * f2 << "\n";
	std::cout << "f1 / f2 = " << f1 / f2 << "\n";
	std::cout << "\n";

	std::cout << "\n***fixes***\n";
	std::cout << "f1 = " << f1 << "\n";;
	std::cout << "++f1 = " << ++f1 << "\n";;
	std::cout << "--f1 = " << --f1 << "\n";;
	std::cout << "f1++ = " << f1++ << "\n";;
	std::cout << "f1 = " << f1 << "\n";;
	std::cout << "f1-- = " << f1-- << "\n";;
	std::cout << "f1 = " << f1 << "\n";;
	std::cout << "\n";

	std::cout << "\n***sign operators***\n";
	std::cout << "+f1 = " << +f1 << "\n";;
	std::cout << "-f1 = " << -f1 << "\n";;
	std::cout << "\n";

	std::cout << "\n***assignment operators***\n";
	std::cout << f1 << " += " << f2 << " -------> " << "f1 = ";
	f1 += f2;
	std::cout << f1 << "\n";

	std::cout << f1 << " -= " << f2 << " -------> " << "f1 = ";
	f1 -= f2;
	std::cout << f1 << "\n";

	std::cout << f1 << " *= " << f2 << " -------> " << "f1 = ";
	f1 *= f2;
	std::cout << f1 << "\n";

	std::cout << f1 << " /= " << f2 << " -------> " << "f1 = ";
	f1 /= f2;
	std::cout << f1 << "\n";

	std::cout << std::endl;
}

void testOfDateClass()
{
	Date date1(1, 1, 1980);
	Date date2;
	Date date3 = "20/11/2018";

	std::cout << date1 << "\n";
	std::cout << date2 << "\n";
	std::cout << date3 << "\n";
}