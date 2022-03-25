
class Number
{
	char* value;
	int base;

public:

	Number(const char* value, int base); // where base is between 2 and 16
	Number(const int num);
	~Number();

	Number(const Number& num); //copy constructor
	Number(Number&& num); //move constructor

	friend Number operator+ (const Number n1, const Number n2);
	friend Number operator- (const Number n1, const Number n2);

	char operator[] (int n); //index

	bool operator<(Number );
	bool operator>(Number );
	bool operator<=(Number );
	bool operator>=(Number );
	bool operator==(Number );
	

	void operator= (const char*);
	void operator= (const Number& n);
	void operator= (int n);

	void operator-- ();
	void operator-- (int);

	void operator+= (Number& n);


	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

	long long getBaseTen();

	//friend int toBaseTen(char* p, int base);
	

private :
	long long toBaseTen(char* p, int base);
	char* fromDeci(int inputNum, int base);
	int valToInt(char c);
	char valToChar(int n);
	

};
char* toString(int n);