#include <iostream>
using namespace std;

void _strcpy( char *dest, const char *src);
void _strcpy2 ( char *dest, const char *src);
void _strncpy(char *str1, char *str2, int n);
int _strlen (const char* str);
int _strcmp( const char* str1, const char* str2);
int _strncmp(const char* str1, const char* str2, int n);
char* _strstr(char *str1, char *str2); 
void _strcat(char* str1, const char* str2);
void _strncat(char* str1, const char* str2, int n);
void _strncpy(char* dest, const char* src, int n);

int main() {

    const char* mysource = "demon king";
    char mydestination[100]; 

    _strcpy(mydestination, mysource);
    cout << "_strcpy " << mydestination << endl;

    char mydestination2[100]; 

    _strcpy2(mydestination2, mysource);
    cout << "_strcpy2 " << mydestination2 << endl;

    int l = _strlen(mydestination2);
    cout << "_strlen " << l << endl;

    char s1[100] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    const char s2[100] = {'w', 'o', 'r', 'l','d', '\0'};

    char s8[100] = { 'b', 'a', 'n', 't', 'y', '\0' };
    const char s9[100] = {'b', 'a', 'n', 'l','d', '\0'};

    cout << "_strcmp S1 & S2 compare as follows : " <<_strcmp(s1,s2) << endl;

    cout << "_strncmp S8 & S9 compare as follows : " <<_strncmp(s1,s2,2) << endl;

    _strcat(s1, s2);

    char s3[100] = { 'A', 'p', 'p', 'l', 'e', '\0' };
    const char s4[100] = {'b', 'a', 'n', 'a', 'n', 'a', '\0'};

    _strncat(s3, s4, 3);

    char s5[100];

    _strncpy(s5, s3, 4);

    cout << "_strncpy " << s5 << endl;
    
    // cout << "Concatenate two strings:" << _strcat(mydestination2, s2) << endl;

    return 0;
}


// example of string copy operation
void  _strcpy(char *destination, const char *source) {

    int i=0;
    while(source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

//more elegant implementation of string copy
void _strcpy2(char *destination, const char *source) {

   //check if source is not null and destination is not null
   if (destination == NULL || source == NULL) return;

   while(*destination++ = *source++);
}

// example implementation of string length.
int _strlen(const char* str) {

    int len=0;
    while(*str++) len++;
    
    return len;
}

// //example implementation of string compare
int _strcmp(const char* s1, const char* s2) {
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

// //Fill in this method so that calling _stracat can append s2 contents to s1
void _strcat(char* s1, const char* s2) {
 
    int len = _strlen(s1);
    for (int i = 0; i < _strlen(s2); i++)
    {
        s1[len] = s2[i];
        len++;
    }
    s1[len] = '\0';

    cout << "Concatenated string is: " << s1 << endl;
}



// //check if string s2 is inside or embedded within string s1
// char* _strstr(char *s1, char *s2) {
//     if (_strlen(s2) > _strlen(s1))
//     {
//         return false;
//     }
//     for(int i = 0; s1[i] != '/0'; i++)
//     {
//         for(int j = 0; s2[j] != '/0'; j++)
//         {

//         }
//     }
// }


// // _strcpy for specified number of characters n.
void _strncpy(char *s1, char* s2, int n) {
    int i = 0; 

    while(s2[i] != '\0' && i < n) {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

}

// // _strcmp for specified number of characters n.
int _strncmp(const char* s1, const char*s2, int n) {

    while(*s1 && (*s1 == *s2) && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;

}

// // _strcat for specified number of characters n.
void _strncat(char* s1, const char *s2, int n) {
    int len = _strlen(s1);
    for (int i = 0; i < n; i++)
    {
        s1[len] = s2[i];
        len++;
    }
    s1[len] = '\0';

    cout << "Concatenated string is: " << s1 << endl;

}