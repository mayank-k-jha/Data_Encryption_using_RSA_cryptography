/*@author mayank_kumar_jha */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <dos.h>
#include <math.h>
#include <string.h>

char s[10000];

long long n=14,e=5,d=11,c=0,m=0,decr=0;
long  long p=2,q=7,shi=6,e1=0,d1=0;
int encrch=0,check=0,check2=0,check3=0,defalt=1234,delch=0;

void encrypt();
void decrypt();
void data();
void showdata();
void about();
void delData();
void setup();
void RsaSetup();


using namespace std;



int main()
{
    cout<<"\n<--------------------------------------------------------------------------->\n";
    cout <<"     "<< "\n                  Welcome To Data Encryption \n" ;
    cout<<"\n<--------------------------------------------------------------------------->\n";
    int input=0;
    while(input!=8){
        cout<< "\n\n"<<"     "<<"Please Select an operation : ----------------->"<<endl<<endl;
        cout<<"     "<<"1.Encryption Setup (For advanced users)"<<endl;
        cout<<"     "<<"2.Data Entry"<<endl;
        cout<<"     "<<"3.Data Encryption"<<endl;
        cout<<"     "<<"4.Data Decryption"<<endl;
        cout<<"     "<<"5.Delete Data "<<endl;
        cout<<"     "<<"6.Show Data\n";
        cout<<"     "<<"7.About\n";
        cout<<"     "<<"8.Exit"<<endl;
        cout<<endl;
        cin>>input;

        if(input==1){
                setup();
        }
        else if(input==2){ data();
        }
        else if(input==3){encrypt();
        }
        else if(input==4){decrypt();
        }
        else if(input==5){delData();
        }
        else if(input==6){showdata();}
        else if(input==8){cout<<"\n<=========Thanks For Using Data Encryption Software ==========>\n";
        cout<<"\n<--------------------------------------------------------------------------->\n";}
        else if(input==7){about();}
        else{cout<<"\n     Please enter a valid option --------------------->\n";}
    }
int get=0;
cout<<"Enter 1 to exit\n";
cin>>get;
    return 0;
}


void data(){
 if(check==0){
        cout<<"\n<--------------------------------------------------------------------------->\n";
cout<<"\n   Please Enter the data for operation : ------------>\n"<<endl;
cout<<"   Note : DATA should be in characters with no spaces \n\n";
cin>>s;
cout<<"\n    Enter password to prohibit data modification (Only Numeric Password is Allowed)\n";
cin>>check;}
else {cout<<"\n  ********* You already have the data,Delete it first\n";}
}


void showdata(){
    if(check==0){
        cout<<"\n ********** No data Found **********\n";
       gt: cout<<"\n   Enter 1 for Data Entry\n";
        cout<<"   Enter 2 to Return\n";
        int op=0;
        cin>>op;
        if(op==1){data();}
        else if(op==2){return;}
        else{cout<<"\n  ******* Enter Correct Option\n";goto gt;}
    }
    else{
            cout<<"\n<--------------------------------------------------------------------------->\n";
cout<<"\n   Your Data is ";
cout<<"\n<--------------------------------------------------------------------------->\n";
cout<<"   "<<s;
cout<<"\n<--------------------------------------------------------------------------->\n";
}
}


void about(){
cout<<"\n\n<------------------------- Data Encryption Software ---------------------------> \n";
cout<<"\n This software uses the modern RSA Encryption Algorithm to Encrypt Your Data.\n";
cout<<" For better Data Protection a mix Algorithm of ADS(Advance Data Encryption)\n";
cout<<" is used to protect your data from being stolen by Hackers.\n";
cout<<" Developed by :  Mayank Kumar Jha\n";
cout<<"                 @copyright mayankKumar_jha\n";
cout<<"\n<--------------------------------------------------------------------------->\n";
cout<<"\n<--------------------------------------------------------------------------->\n";
}


void encrypt(){
    if(check2==0){
        if(check==0){
                cout<<"\n   ********** No Data to Encrypt *********** \n";
                 gt: cout<<"\n   Enter 1 for Data Entry\n";
        cout<<"   Enter 2 to Return\n";
        int op=0;
        cin>>op;
        if(op==1){data();}
        else if(op==2){return;}
        else{cout<<"\n  ******* Enter Correct Option\n";goto gt;}
}
        else{
                cout<<"\n<--------------------------------------------------------------------------->\n";
        cout<<"\n **********DATA ENCRYPTION STARTED ********** \n\n";
        encrch=-1;
        c=(pow(p,e));
        c=c % n;
        for(int i=0;s[i]!='\0';i++){
            s[i]=c+ s[i];
            }

           cout<<"\n<--------------------------------------------------------------------------->\n";
           cout<<"\n ***** CONGRATULATION,YOUR DATA HAS BEEN SUCCESSFULLY ENCRYPTED\n";
           check2=-1;check3=0,delch=-1;
           cout<<"Press 1 to show your Encrypted Data \n";
           int in=0;
           cin>>in;
           if(in==1){
            showdata();
        cout<<"\n<--------------------------------------------------------------------------->\n";
           }
           else{
            cout<<"\n  Returning \n";
            cout<<"\n<--------------------------------------------------------------------------->\n";
           }
        }}
        else{
            cout<<"\n        DATA is Already Encrypted\n\n";
            cout<<"\n<--------------------------------------------------------------------------->\n";
            return;
        }
}


void decrypt(){

if(check3==0)    {
if(check==0){
    cout<<"\n   ********** No Data to Decrypt *********** \n";
     gt: cout<<"\n   Enter 1 for Data Entry\n";
        cout<<"   Enter 2 to Return\n";
        int op=0;
        cin>>op;
        if(op==1){data();}
        else if(op==2){return;}
        else{cout<<"\n  ******* Enter Correct Option\n";goto gt;}

}

else if(encrch==0){
        cout<<"\n<--------------------------------------------------------------------------->\n";
   cout<<"\n   DATA is Currently not Encrypted  \n";
   cout<<"\n   Select 1 to Proceed for Encryption  \n";
   int op=0;
   cin>>op;
   if(op==1){encrypt();}
   else{cout<<"\n    Returning  \n";
   cout<<"\n<--------------------------------------------------------------------------->\n";
return;}
    }
   else{    int trial=3;
            long long key=0;cout<<"\n<--------------------------------------------------------------------------->\n";
   dfg :  cout<<"\n   Enter The Private Key for Decryption  \n";
    cin>>key;

    if(key==d){

        cout<<"\n   Private Key Matched \n";
        cout  <<"\n  DATA Decryption Started \n ";
        m=(pow(c,d));
m=m%n;   decr=pow(m,e);

    decr=decr%n;
    for(int i=0;s[i]!='\0';i++){
        s[i]=s[i]-decr;
    }
    decr=0;
        cout<<"\n<--------------------------------------------------------------------------->\n";
        cout<<"\n   ***** CONGRATULATION , YOUR DATA HAS BEEN SUCCESSFULLY DECRYPTED \n";
        check2=0;check3=-1,delch=0;
        cout<<"\n  Enter 1 to show your Decrypted Data \n";
        int op=0;
        cin>>op;
        if(op==1){
            showdata();
            cout<<"\n<--------------------------------------------------------------------------->\n";
        }
        else{
            cout<<"\n      Returning \n";
            cout<<"\n<--------------------------------------------------------------------------->\n";
            return;
        }
    }
    else if(trial!=0){
         --trial;
        cout <<"\n Trials Left ----->  "<<trial;
        goto dfg;
    }

    }}
    else{
        cout<<"\n   **********  Data is Already Decrypted **********\n";
        return;
    }

}


void setup(){
    int entry=0;
    cout<<"\n<--------------------------------------------------------------------------->\n";
    cout<<"\n This setup is used to setup the parameters Used in RSA Encryption\n";
    cout<<" If you Have prior knowledge of RSA Encryption,only then you are \n";
    cout<<" advised to modify the setup.\n ";
ghj:cout<<"1.Select 1 to Proceed for Setup\n 2.Select 2 to return\n";
    int opt=0,triall=3;
    cin>>opt;
    if(opt==1){
            cout<<"\n<--------------------------------------------------------------------------->\n";
            cout<<"\nSecurity checkup";
       st: cout<<"\n  Please Enter default ROOT PIN to proceed (PIN should be NUMERIC)\n";
    cin>>entry;
    if(defalt==entry){cout<<"\n<--------------------------------------------------------------------------->\n";
        cout<<"\n  ************ Password matched ***********\n";
       fc: cout<<"Enter 1 to change default ROOT PIN \n";
        cout<<"Enter 2 to proceed for RSA setup \n ";
        int inp=0,pre=defalt;
        cin>>inp;
        if(inp==1){
            cout<<"\nEnter The new Default ROOT PIN\n";
            cin>>defalt;
            cout<<"\n Your Default ROOT PIN has been Successfully changed from "<<pre<<" to "<<defalt<<endl;

        }
        else if(inp==2){RsaSetup();}
        else{cout<<"\nPlease Enter Correct Option\n";goto fc;}
    }
    else{cout<<"\n   **** Please Enter correct ROOT PIN **** \n";
    --triall;
    if(triall>0){
        cout <<"\n  Trials Left ----->  "<<triall;
        goto st;
    }
     else{cout<<"\n   You Have Used Maximum number of Trials \n";
    cout<<"\n<--------------------------------------------------------------------------->\n";
    return;}
    }
    }
    else if(opt==2){cout<<"\n<--------------------------------------------------------------------------->\n";return;}
    else{cout<<"\    ********* Please Enter correct Option\n";goto ghj;}
}


void delData(){
    cout<<"\n<--------------------------------------------------------------------------->\n";
    int pin=0;
if(check==0){cout<<"\n     WARNING !!!! ---->>> No Data Found.Please Enter the Data\n";
cout<<"<--------------------------------------------------------------------------->\n";
}
else{
    if(delch==0){
    cout<<"\n   Please Enter your Data Modification PIN (PIN should be NUMERIC)\n";
    cin>>pin;
    if(pin==check){
        delete s;
        cout<<"\n      Your Data has been Deleted Successfully\n";
        cout<<"\n<--------------------------------------------------------------------------->\n";
        check=0;pin=0;
    }
}
else{cout<<"\n<--------------------------------------------------------------------------->\n";
        cout<<"\n  ****** WARNING ,YOU CAN'T DELETE THE DATA\n";
cout<<"\n   ******* Data is Encrypted  ";
cout<<"\n<--------------------------------------------------------------------------->\n";
}}
}


void RsaSetup(){
    cout<<"\n<--------------------------------------------------------------------------->\n";
cout <<"\n              ***  RSA Setup ***\n";

cout<<"\n  **********   SECURITY CHECKUP **********\n";
cout << "Please Enter old Public and Private Key (PIN should be NUMERIC)\n";
cin>>e1>>d1;
if(e1==e && d1==d){
cout<<"\n     ********  PASSWORD MATCHED *********  \n";
cout<<"\n  Enter two prime number \n";
cin>>p>>q;
shi=(p-1)*(q-1);
n=p*q;
cout<<"  p = "<<p<<"   q = "<<q;
cout<<"\n   Thus n = p*q = "<<n;
cout<<"\n   and SHI(n) = "<<shi;
cout<<"\n<--------------------------------------------------------------------------->\n";
cout<<"\n   Finding Encryption Key  \n";
cout<<"\n<--------------------------------------------------------------------------->\n";
for(int i=3;i<shi;i+=2){
    if(shi%i!=0 && n%i!=0){
        e=i;break;
    }
}
cout<<"\n  ******** Public Key Generated \n";
cout<<"  Public key ----> "<<e;
cout<<"\n<--------------------------------------------------------------------------->\n";
cout <<"\n  Now Generating Private Key ";
cout<<"\n<--------------------------------------------------------------------------->\n";
for(int i=e+1;;i++){
    d=i;
    if((d*e)%shi==1){ d=i;
        break;
    }
}
cout<<"\n \n  ******** Private Key Generated ";
cout<<"\n  Private Key ---->"<<d;
cout<<"\n<--------------------------------------------------------------------------->\n";
cout<<"\n\n  *****CONGRATULATION SETUP HAS BEEN SUCCESSFULLY COMPLETED ******\n";
cout<<"\n  Note : Please Remember You Public and Private Keys For Future Reference";
cout<<"\n<--------------------------------------------------------------------------->\n";
int gg=0;
cout<<"\n  Enter 1 to continue \n";
cin>>gg;
cout<<"\n<--------------------------------------------------------------------------->\n";
}
else{
    cout<<"\n WARNING !! WARNING !! WARNING !! WARNING !!\n";
    cout<<"\n WARNING,YOUR KEY DOES NOT MATCH \n";
    cout<<"\n YOU ARE NOT ALLOWED TO MAKE CHANGES\n";
    cout<<"\n<--------------------------------------------------------------------------->\n";
    return;
}
}
