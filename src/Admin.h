// IT21333552
// Abeysinghe I. U.     

class Admin {
private:
	string Aname;
	int A_ID;
	string new_packages;
	int new_packageID;
	double new_price;
	int new_night;
	string new_inclusions;
	int day, month, year;
public:
	Admin();
	Admin(string pAname, int PA_ID);
	void AdminDetails();
	void packageDetails(string pNew_packages, int pnew_packageID, double pnew_price, int pnew_night, string pnew_inclusions);
	void inputPackage();
	void setUpdateDate();
	int getDay();
	int getMonth();
	int getYear();
	void RemovePackages();
	string AddNewUser();
	~Admin();

};