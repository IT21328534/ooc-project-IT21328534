// IT number
//name 

class register_user :
	public guest
{
protected:
	string userName;
	string password;

public:
	register_user();
	register_user(string puserName, string ppassword, int pUserID, string pUserAddress, string pUserEmail);
	void displayDetails();
	void login();
	void logout();
	string checkLoginDetails();
	~register_user();
};

