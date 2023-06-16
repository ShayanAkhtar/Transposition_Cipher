/*Student Names :
  Fahad Malik(210928)
  Shayan Akhter (210907)
  Fatima Bint-e-Shahid (210937)*/


       /* **************** Transposition Cipher ***************** */

#include<iostream>
#include<regex>
#include<fstream>
#include<windows.h>
using namespace std;

typedef struct
{
    string message;
    int rail;
}data;



void cipherEncrypt()                              // Cipher Encryption
{
    data Encrypt;
cout<<"  Enter your message :";
    cout<<" ";
getline(cin, Encrypt.message);
Encrypt.message=regex_replace(Encrypt.message, regex("\\s+"), " ");
p:
cout<<"\n  Enter the Key :";
cout<<" ";
cin>>Encrypt.rail;
cin.ignore();
if(Encrypt.rail<(Encrypt.message).length()){

// Creating empty matrix
char Railmatrix[Encrypt.rail][(Encrypt.message).length()];
for(int i=0;i<Encrypt.rail;i++){
for(int j=0;j<Encrypt.message.length();j++){
Railmatrix[i][j]='.';
}
}
// Testing the matrix created above.....
//  putting the message letters one by one in rails in diagnols
int row=0;
int check=0;
for(int i=0;i<Encrypt.message.length();i++){
if(check==0){
Railmatrix[row][i]=Encrypt.message[i];
row++;
if(row==Encrypt.rail){
check=1;
row--;
}
}
else if(check==1){
row--;
Railmatrix[row][i]=Encrypt.message[i];
if(row==0){
check=0;
row=1;
}
}
}
string encrypt_text;
for(int i=0;i<Encrypt.rail;i++){
for(int j=0;j<Encrypt.message.length();j++){
encrypt_text+=Railmatrix[i][j];
}
}
// Now removing (.) from encrypted text
encrypt_text=regex_replace(encrypt_text, regex("\\."), "");
cout<<"\n  Encrypted Text :"<<encrypt_text;
fstream new_file;
string new_f;
cout<<"\n\n  Enter the Name of File :";
cout<<" ";
getline(cin,new_f);
new_file.open(new_f,ios::out);
     new_file<<encrypt_text;
         cout<<"\n  Encrypted Text is Copied To File.... ";
}
else{
        cout<<"\n\n  Key is greater than the message length !!!";
        Sleep(500);
        cout<<"\n\n";

        goto p;
}
}
void cipherDecrypt()             // Cipher Decryption
{
    data Decrypt;
cout<<"  Enter your message :";
cout<<" ";
getline(cin, Decrypt.message);
Decrypt.message=regex_replace(Decrypt.message, regex("\\s+"), " ");
p:
cout<<"\n  Enter the Key :";
cout<<" ";
cin>>Decrypt.rail;
cin.ignore();
if(Decrypt.rail<(Decrypt.message).length()){
// Creating empty matrix
char Railmatrix[Decrypt.rail][Decrypt.message.length()];
for(int i=0;i<Decrypt.rail;i++){
for(int j=0;j<Decrypt.message.length();j++){
Railmatrix[i][j]='.';
}
}
// Testing the matrix created above.....
//  putting the message letters one by one in rails in diagnols
int row=0;
int check=0;
for(int i=0;i<Decrypt.message.length();i++){
if(check==0){
Railmatrix[row][i]=Decrypt.message[i];
row++;
if(row==Decrypt.rail){
check=1;
row--;
}
}
else if(check==1){
row--;
Railmatrix[row][i]=Decrypt.message[i];
if(row==0){
check=0;
row=1;
}
}
}
// recording Rails (key).........
int ordr=0;
for(int i=0;i<Decrypt.rail;i++){
   for(int j=0;j<Decrypt.message.length();j++){
       string temp= "";
       temp+=Railmatrix[i][j];
       if(regex_match(temp, regex("\\."))){
           // skipping
           continue;
       }
       else{
           // Adding cipher letters one by one diagonally
           Railmatrix[i][j]=Decrypt.message[ordr];
           ordr++;
       }
   }
}
// for(int i=0;i<rail;i++){
// for(int j=0;j<message.length();j++){
// cout <<Rail matrix[i][j];
// }
// cout<< endl;
//}
// Now converting rows back into single line of message
string decryptext = " ";
check=0;
row=0;
for(int i=0;i<Decrypt.message.length();i++){
    if(check==0){
        decryptext+=Railmatrix[row][i];
        row++;
        if(row==Decrypt.rail){
            check=1;
            row--;
    }

}
else if(check==1){
    row--;
    decryptext+=Railmatrix[row][i];
    if(row==0){
        check=0;
        row=1;
    }
}

}
// removing (.) from decrypted text
decryptext=regex_replace(decryptext, regex("\\."), " ");
cout<<"\n  Decrypted Text :"<< decryptext;
fstream new_file;
string new_f;
cout<<"\n\n  Enter the Name of File :";           // creating a file to save the Encrypted text
cout<<" ";
getline(cin,new_f);
new_file.open(new_f,ios::out);
     new_file<<decryptext;
         cout<<"\n  Decrypted Text is Copied To File....";
         cout<<"\n\n";
          new_file.close();
}
else{
    cout<<"\n\n  Key is greater than the message length !!!";
        Sleep(500);
        cout<<"\n\n";

        goto p;
}
}


int main(){
int choice;
int choose;
s:
cout<<"\n";
p:
cout<<"\t\t----------------------------------------"<<endl;
cout<<"\t\t                                        "<<endl;
cout<<"\t\t         Transposition Cipher           "<<endl;
cout<<"\t\t                                        "<<endl;
cout<<"\t\t----------------------------------------"<<endl;
cout<<"\n\n";
cout<<"\t 1. Transposition Encryption"<<endl;
cout<<"\n";
cout<<"\t 2. Transposition Decryption"<<endl;
cout<<"\n";
cout<<"\t    Enter your choice :";
cin>>choice;
cin.ignore();
if(choice==1){
   cout<<"\n\n\n\n";
       cout<<"\t Loading ";
       char x=219;
       for(int i=0;i<40;i++){
        cout<<x;
        Sleep(50);
       }
        system("cls");
            int l;
        cout<<"\n";
cout<<"\t\t  --------------------------------------"<<endl;
    cout<<"\t\t                                            "<<endl;
cout<<"\t\t           Transposition Encryption               "<<endl;
cout<<"\t\t                                                "<<endl;
cout<<"\t\t  --------------------------------------"<<endl;
cout<<"\n\n";
cipherEncrypt();
      e:
     cout<<"\n\n  For go Back to previous screen Press 3 :";
     cout<<" ";
     cin>>choose;
     if(choose==3){
            system("cls");
        goto s;

     }
     else{
        cout<<"\n\n Invalid input !!!";
        Sleep(500);
        goto e;
     }
                                                              // Cipher Encrypt function
}
else if(choice==2){
            cout<<"\n\n\n\n";
       cout<<"\t Loading ";
       char x=219;
       for(int i=0;i<40;i++){
        cout<<x;
        Sleep(50);
       }
    system("cls");
    cout<<"\n";
    cout<<"\t\t----------------------------------------"<<endl;
cout<<"\t\t                                        "<<endl;
cout<<"\t\t         Transposition Cipher           "<<endl;
cout<<"\t\t                                        "<<endl;
cout<<"\t\t----------------------------------------"<<endl;
cout<<"\n\n";
cipherDecrypt();
                                        // Cipher Decrypt function
     t:
     cout<<"\n\n  For go Back to previous screen Press 3 :";
     cout<<" ";
     cin>>choose;
     if(choose==3){
            system("cls");
        goto s;

     }
     else{
        cout<<"\n\n Invalid input !!!";
        Sleep(500);
        goto t;
     }
}
else
{
cout<<"\n\n\t   Invalid Choice !!!"<<endl;
cout<<"\n\n\n\n";
       cout<<"\t Loading ";
       char x=219;
       for(int i=0;i<40;i++){
        cout<<x;
        Sleep(50);
       }
system("cls");
cout<<"\n";
goto p;
}
}



