// IT number
//name 

class Financial_Records {
private:
	int TransactionID;

public:
	Financial_Records();
	Financial_Records(int pTransactionID);
	void Update();
	float calcTotal();
	int generatePayment();
	~Financial_Records();
};