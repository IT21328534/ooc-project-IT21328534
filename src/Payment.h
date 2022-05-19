// IT number
//name 

class payment {
private:
	int paymentID;
	int pkgID;
	double price;
	string packages;


public:
	double calculateTotalAmount();
	int packageID();
	void setPaymentDetails(int P_paymentID, double P_price, string P_packages, int P_pkgID);
	void newPayment();
	void Validate();
	~payment();
};
