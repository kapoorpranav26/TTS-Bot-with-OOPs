#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> //to use time function
using namespace std;
// function to wish user according to time.
void wishme()
{
    // current date  and time based on the system timezone.
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time -> tm_hour < 12){
        cout<< "Good Morning Sir, My name is Proton."<<endl;
        string phrase = "Good Morning Sir! My name is Proton.";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time -> tm_hour >= 12 && time -> tm_hour <= 16){
        cout<< "Good Afternoon Sir, My name is Proton."<<endl;
        string phrase = "Good Afternoon Sir, My name is Proton.";
        string command = "espeak \""+ phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time -> tm_hour > 16 && time -> tm_hour < 24){
        cout<< "Good Evening Sir, My name is Proton."<<endl;
        string phrase = "Good Evening Sir, My name is Proton.";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}
int main()
{
    system("cls");
    cout<<"\t\t\t Welcome Sir!"<<endl;
    cout<<"\t\t\t I'm A Text-To-Speech Assistant. "<<endl;
    cout<<"\t\t\t My name is Proton. "<<endl;
    cout<<"\t\t\t I'm here to help you sir! "<<endl<<endl;
    char password[20]; //to take password
    char ch[100]; // to take command from the user
    do
    {
        cout<<"\nXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
        cout<<": ENTER YOUR PASSWORD :"<<endl;
        cout<<"XXXXXXXXXXXXXXXXXXXXXXX\n"<<endl;
        string phrase = "enter your password: ";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        gets(password);
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        if(strcmp(password, "admin")==0)
        {
            cout<<"\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
            wishme();
            do{
                cout<<"\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
                cout<<endl<<"How can I help you sir...."<<endl<<endl;
                string phrase = "How can i help you sir....";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                cout<<"Your query: ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query: "<<endl;
                if(strcmp(strlwr(ch), "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 )
                {
                    cout<<"Hello sir....."<<endl;
                    string phrase = "Hello sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 )
                {
                    cout<<"Good Bye sir, Have a Nice Day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about you") == 0)
                {
                    cout<<"I'm Proton, A Text-To-Speech Assistant."<<endl;
                    string phrase = "I'm Proton, A Text-To-Speech Assistant.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "who created you") == 0 || strcmp(ch, "who invented you") == 0)
                {
                    cout<<"I am created by Pranav and Bhavik."<<endl;
                    string phrase = "I am created by Pranav and Bhavik.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "what's up") == 0)
                {
                    cout<<"I'm Good sir!"<<endl;
                    string phrase = "I'm good sir....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "tell me the current date and time") == 0 || strcmp(ch, "tell me the current time and date") == 0)
                {
                    cout<<"The current time and date is: "<<endl;
                    string phrase = "The current time and date is";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    datetime();
                }
                else if(strcmp(ch, "open notepad") == 0)
                {
                    cout<<"Opening Notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start notepad.exe");
                }
                else if(strcmp(ch, "close notepad") == 0)
                {
                    cout<<"Closing Notepad....."<<endl;
                    string phrase = "closing notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im notepad.exe");
                }
                // else if(strcmp(ch, "open file explorer") == 0 || strcmp(ch, "open this pc") == 0)
                // {
                //     cout<<"Opening File Explorer....."<<endl;
                //     string phrase = "opening file explorer";
                //     string command = "espeak \"" + phrase + "\"";
                //     const char *charCommand = command.c_str();
                //     system(charCommand);
                //     ShellExecute(NULL, "open", "explorer.exe", NULL, NULL, SW_SHOWDEFAULT);
                // }
                else if(strcmp(ch, "open google") == 0)
                {
                    cout<<"Opening Google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                else if(strcmp(ch, "open spotify") == 0)
                {
                    cout<<"Opening Spotify....."<<endl;
                    string phrase = "opening spotify";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start spotify.exe");
                }
                else if(strcmp(ch, "close spotify") == 0)
                {
                    cout<<"Closing Spotify....."<<endl;
                    string phrase = "closing spotify";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im spotify.exe");
                }
                else if(strcmp(ch, "open brave") == 0)
                {
                    cout<<"Opening Brave....."<<endl;
                    string phrase = "opening brave";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start brave.exe");
                }
                else if(strcmp(ch, "close brave") == 0)
                {
                    cout<<"Closing Brave....."<<endl;
                    string phrase = "closing brave";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im brave.exe");
                }
                else if(strcmp(ch, "open camera") == 0)
                {
                    cout<<"Opening Camera....."<<endl;
                    string phrase = "opening camera";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start microsoft.windows.camera:");
                }
                else if(strcmp(ch, "close camera") == 0)
                {
                    cout<<"Closing Camera....."<<endl;
                    string phrase = "closing camera";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im WindowsCamera.exe");
                }
                else if(strcmp(ch, "open ms word") == 0)
                {
                    cout<<"Opening MS Word....."<<endl;
                    string phrase = "opening ms word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start winword.exe");
                }
                else if(strcmp(ch, "close ms word") == 0)
                {
                    cout<<"Closing MS Word....."<<endl;
                    string phrase = "closing ms word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im winword.exe");
                }
                else if(strcmp(ch, "open ms excel") == 0)
                {
                    cout<<"Opening MS Excel....."<<endl;
                    string phrase = "opening ms excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start excel.exe");
                }
                else if(strcmp(ch, "close ms excel") == 0)
                {
                    cout<<"Closing MS Excel....."<<endl;
                    string phrase = "closing ms excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im excel.exe");
                }
                else if(strcmp(ch, "open ms powerpoint") == 0)
                {
                    cout<<"Opening MS PowerPoint....."<<endl;
                    string phrase = "opening ms powerpoint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start powerpnt.exe");
                }
                else if(strcmp(ch, "close ms powerpoint") == 0)
                {
                    cout<<"Closing MS PowerPoint....."<<endl;
                    string phrase = "closing ms powerpoint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im powerpnt.exe");
                }
                else if(strcmp(ch, "open calculator") == 0)
                {
                    cout<<"Opening Calculator...."<<endl;
                    string phrase = "opening calculator";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start calc.exe");
                }
                else if(strcmp(ch, "close calculator") == 0)
                {
                    cout<<"Closing Calculator...."<<endl;
                    string phrase = "closing calculator";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im CalculatorApp.exe");
                }
                else if(strcmp(ch, "open google chrome") == 0)
                {
                    cout<<"Opening Google Chrome....."<<endl;
                    string phrase = "opening google chrome";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start chrome.exe");
                }
                else if(strcmp(ch, "close google chrome") == 0)
                {
                    cout<<"Closing Google Chrome....."<<endl;
                    string phrase = "closing google chrome";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("taskkill /f /Im chrome.exe");
                }
                else if(strcmp(ch, "open youtube") == 0)
                {
                    cout<<"Opening YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if(strcmp(ch, "open instagram") == 0)
                {
                    cout<<"Opening Instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }
                else if(strcmp(ch, "shut down") == 0 || strcmp(ch, "log me out") == 0 || strcmp(ch, "exit user") == 0 )
                {
                    cout<<"Shutting Down Your PC...."<<endl;
                    string phrase = "shutting down your pc!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system("shutdown /s /t 0");
                    exit(0);
                }
                else if(strcmp(ch, "sleep") == 0 || strcmp(ch, "log me out") == 0)
                {
                    cout<<"Your PC Is Going To Sleep...."<<endl;
                    string phrase = "Your PC Is Going To Sleep!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    ExitWindowsEx(EWX_LOGOFF, 0);
                    exit(0);
                }
                else if(strcmp(ch, "open facebook") == 0)
                {
                    cout<<"Opening Facebook....."<<endl;
                    string phrase = "opening facebook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.facebook.com");
                }
                else
                {
                    cout<<"Sorry could not understand your query please try again!"<<endl;
                    string phrase = "Sorry I could not understand your query. Please try again.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            }while(1);
        }
        else
                {
                    system("cls");
                    cout<<"\t\t\t Welcome Sir! >"<<endl;
                    cout<<"\t\t\t I'm A Text-To-Speech Assistant. "<<endl;
                    cout<<"\t\t\t My name is Proton. "<<endl;
                    cout<<"\t\t\t I'm here to help you sir! "<<endl<<endl;
                    cout<<"......................"<<endl;
                    cout<<"X Incorrect Password X"<<endl;
                    cout<<"......................"<<endl<<endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);
    return 0;
}