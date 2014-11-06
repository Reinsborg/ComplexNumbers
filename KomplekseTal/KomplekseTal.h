#include <math.h>

class ComplexNumber
{
public:
	ComplexNumber();
	ComplexNumber(double Rez, double Imz);


	void	setSum(double rez, double imz);
	void	setPol(double mod, double arg);


	double	getRez();
	double	getImz();
	double	getMod();
	double	getArg();

private:
	void	setRez(double rez);
	void	setImz(double imz);
	void	setMod(double mod);
	void	setArg(double arg);

	void	calPol(double rez, double imz);
	void	calSum(double mod, double arg);

	double reZ;
	double imZ;
	double moD;
	double arG;

};