// IT21333552
// Abeysinghe I. U.

class Package {
private:
	int packageID;
	double price;
	int night;
	string packages;
	string inclusions;

public:
	void setPackageDetails(int SpackageID, double Sprice, int Snight, string Spackages, string Sinclusions);
	void DisplayPackageDetails();
	string getPackages();
	//desturctor
	~Package();
};
