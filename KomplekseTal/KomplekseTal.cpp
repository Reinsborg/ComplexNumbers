
#include "KomplekseTal.h"

ComplexNumber::ComplexNumber()
{
	setRez(0);
	setImz(0);
	setMod(0);
	setArg(0);
}

ComplexNumber::ComplexNumber(double rez, double imz)
{
	setSum(rez, imz);
	
}

void ComplexNumber::setSum(double rez, double imz)
{
	setRez(rez);
	setImz(imz);
	calPol(rez, imz);
}

void ComplexNumber::setPol(double mod, double arg)
{
	setMod(mod);
	setArg(arg);
	calSum(mod, arg);
}

void ComplexNumber::setRez(double rez)
{
	reZ = rez;
}

void ComplexNumber::setImz(double imz)
{
	imZ = imz;
}

void ComplexNumber::setArg(double arg)
{
	arG = arg;
}

void ComplexNumber::setMod(double mod)
{
	moD = mod;
}

double ComplexNumber::getRez()
{
	return reZ;
}

double ComplexNumber::getImz()
{
	return imZ;
}

double ComplexNumber::getMod()
{
	return moD;
}

double ComplexNumber::getArg()
{
	return arG;
}

void ComplexNumber::calPol(double rez, double imz)
{
	moD = sqrt(pow(rez, 2) + pow(imz, 2));
	arG = atan(imz / rez) - (rez < 0 ? 3.1415 : 0);

}

void ComplexNumber::calSum(double mod, double arg)
{
	reZ = (mod * cos(arg));
	imZ = (mod * sin(arg));
}