#include<string>

using namespace std;

class money {
	int kn;
	int lp;
public:
	money()
	{
		kn = 0;
		lp = 0;
	}
	money(int k, int l)
	{
		kn = k;
		lp = l;
	}
	money(int k)
	{
		kn = k;
		lp = 0;
	}
	~money() {};
	money operator+(money n);
	money operator-(money n);
	void operator+=(money n);
	void operator-=(money n);
	friend ostream& operator<<(ostream& s, const money& n);
	double& operator()(double& a);
};
