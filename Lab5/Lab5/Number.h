class Number
{
private:
	char* number = nullptr;
	long numberBase10 = 0;
	unsigned short int base;
	bool isNegative = false;

public:
	Number(const char* value, int base); 
	Number(const Number& oldNumber);
	Number(Number&& oldNumber);
	~Number();
	

	
	//+,-, negate unar, index op[], relation op > < >= <= == 
	//-- operator

	bool operator==(Number otherNumber);
	bool operator>(Number otherNumber);
	bool operator<(Number otherNumber);
	bool operator<=(Number otherNumber);
	bool operator>=(Number otherNumber);
	bool operator!=(Number otherNumber);
	Number operator|(Number& otherNumber); //ret un nou nr = cu concatenarea celor 2 nr
	friend Number operator+(const Number& firstNum, const Number& secondNum);
	friend Number operator-(const Number& firstNum, const Number& secondNum);
	friend bool isPowerOfTwo(int x);
	friend short int getExponent(int number);

	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount() const;
	unsigned short int GetBase() const;
};
Number operator+(const Number& firstNum, const Number& secondNum);
Number operator-(const Number& firstNum, const Number& secondNum);
bool isPowerOfTwo(int x);
short int getExponent(int number);