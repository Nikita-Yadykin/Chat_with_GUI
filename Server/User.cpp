#include"User.h"

User::User(int id, const string& login, string& password, string& name, int status) : _id(id), _login(login), _password(password), _name(name), _status(status)
{
}

string User::getLogin() const
{
	return _login;
}
string  User::getPassword() const
{
	return _password;
}
string  User::getName() const
{
	return _name;
}
int  User::getID() const
{
	return _id;
}
int  User::getStatus() const
{
	return _status;
}