#include <iostream>
using namespace std;

class Person
{
    public: 
        Person(string name, string address, string email)
        : m_name(name)
        , m_address(address)
        , m_email(email)
        {
        }

        Person()    
        {
        }

        ~Person()
        {
        }

        string getMail()
        {
            return m_email;
        }

        string getName()
        {
            return m_name;
        }

    protected:
        string m_name;
        string m_address;
        string m_email;
};

class MailHandler : public Person
{
    public:
        MailHandler(string message, Person receiver) 
        : m_mailbuff(Person::getMail())
        {
            cout << "Mail sent to " << receiver.getName() << " using the Mail-Addresss " << receiver.getMail() << " with message: " << message << endl;
        }


        ~MailHandler()
        {
        }

    private:
        string m_mailbuff;

};

class Professor : public Person
{
    public:
        Professor(string iban, string name, string address, string email)
        : Person(name, address, email)
        , m_iban(iban)
        {
        }

        ~Professor()
        {
        }
    
    private:
        string m_iban;
};

class Student : public Person
{
    public:
    Student(double averageGrade, string name, string address, string email)
    : Person(name, address, email)
    , m_averageGrade(averageGrade)
    {
    }

    ~Student()
    {
    }
    private:
        double m_averageGrade;
};

int main()
{
    Professor myProfessor("DE123456789", "Prof. Dr. Max Mustermann", "Musterstraße 1", "professor1@dhbw.de");
    MailHandler myMailHandler("Hello World", myProfessor);
    Student myStudent(1.0, "Max Mustermann", "Musterstraße 2", "maxmuster@dhbw.de");
    MailHandler StudentMailHandler("Morgen Vorlesung", myStudent);
}