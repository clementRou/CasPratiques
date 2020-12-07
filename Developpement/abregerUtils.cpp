#include "pch.h"
#include "abregerUtils.h"

using namespace Abreger;
using namespace std;


string Abreger::AbregerUtils::abreger(string mot)
{
	string motAbrege = "";
	int longueur = mot.length();
	if (longueur < 3) {
		motAbrege = mot;
	}
	else {
		motAbrege = mot.at(0) + to_string(longueur - 2) + mot.at(longueur - 1);
	}
	return motAbrege;
}
