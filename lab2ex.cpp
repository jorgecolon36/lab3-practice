#include<iostream>
#include<string>
#include <cmath>

using namespace std;

// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* The function must print the inverse capitalization of the character passed as an argument */
  
void practiceCharMethod1(char character)
{
  int result = 0;
    
  //YOUR CODE GOES HERE
  if(isupper(character)) {

      result = tolower(character); 
  }

  else{
    
    result = toupper(character);
  }
  cout << "Inverse Capitalization: " << (char) result << endl;
}

  
/* Print only digits or alphanumeric characters. If other print "none". */
  
void practiceCharMethod2(char character)
{
  cout << "The character is: ";
  
  //YOUR CODE GOES HERE
  if(isalnum(character)){
      cout << character;
  }
  cout << "none";

}

/* 
  You will need to verify the character passed as an argument. 
  Sometimes it can only be a space or a punctuation character. Validate it before using it. 
  If the character is other than a space or a punctuation, then it is okay to use it.
*/
  
void practiceCharMethod3(char character)
{
  bool okToUse;
    
  //YOUR CODE GOES HERE
if(ispunct(character) || isspace(character)){
      okToUse = true;
  }
  else {
    
  okToUse = false;
}

  cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
  
/* 
  You will need to verify if the character passed as an argument is equal to 'a', 'b', or 'c'
  and if so, print "first three letters". 
  It must be CASE INSENSITIVE, so if 'A', 'B' or 'C' is given, it must also print "first three letters". 
*/
  
void practiceCharMethod4(char character)
{
  // YOUR CODE HERE
   if(character == 'a'||character =='b'||character =='c'||character =='A'||character =='B'||character =='C') {
      cout<<"first three letters";
  }
  else{
      cout<<"none";

}

//----------------------------------------------------------------------------------------


// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* It computes the radius r of a circle. Using functions from the Math Library 
  complete the function that computes the radius of a circle  using the 
  formula  r^2=(x-h)^2 +(y-k)^2  (see formula in moodle for reference), 
  given the (x,y) coordinates of one point on its circumference and 
  the (h,k) coordinates of its center.
 */
void radius(double x1, double y1, double xCenter, double yCenter) {
    
    double result = 0;
    
    //YOUR CODE GOES HERE
    result = sqrt ( pow (x1-xCenter,2) + pow (y1-yCenter,2) );
    cout << "The radius is: " << result << endl;
};

/* This function prints the biggest value of two values.
  But first you need to round down the first argument and round up the second one. 
 */

void maxRoundedValue(double first, double second) {
    
    cout << "The maximum rounded value is: ";
    
    //YOUR CODE GOES HERE
    first = floor(first);
    second = ceil(second);

    if(first > second){
        cout << first;
    }
    else{
        cout << second;
    }

};

/* It prints the cosine of the angle given d, note that d is 
  given in degrees and that you might want to turn it into radians 
  for it to be useful.
  HINT: The value of pi is given as a variable in the starter code. 
        The equation from degrees to radian is : x radians = (d degreees)* pi/180
*/
void degreeAngleCosine (double d) {
    double pi = 2*acos(0.0);
    cout << cos((d*pi)/180) << endl; //radians
    
};
//------------------------------------------------------------------------------------------

/* The function must verify the length of the string passed as an argument. 
  If it is too short (less than 8), it should print "password is too short”.
*/

void stringPractice1(string password) {

if(password.length() < 8){
    cout << "password is too short" << endl;
}
else{
    cout<< "none" << endl;
}

}

/* The function must concatenate the string arguments in order to print a string in the following way:
"Welcome <name> to the <department> department in the College of <college>"
So if the name were "Pedro", the department were "CIIC", and the college were "Engineering", your function would print:
"Welcome Pedro to the CIIC department in the College of Engineering"
*/

void stringPractice2(string name, string department, string college) {
  cout << "Welcome " <<name<<" to the "<<department<<" in the College of "<<college << endl;
}

/* The function must receive the string and replace the space in it with "_"  (you may assume that the string has only one space) and then print the word with the space replaced by “_”
*/

void stringPractice3(string twoWords) {
  // YOUR CODE HERE
  replace(twoWords.begin(), twoWords.end(), ' ','_'); //Replaces all instances of ' ' with '_'
  cout << twoWords << endl;
}

/* This function must erase the first 3 characters of a string, and append "---" at the end of the string.
If given the word is "Vehicle", the result would be: "icle---".
The altered string must be printed.
*/

void stringPractice4(string word) {
  // YOUR CODE HERE
  word.erase(0,3).append("---");
  cout << word << endl;
}


