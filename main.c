/*
Licensed: MIT License
User Was Allowed to Sell or Copy this file however still included
Developer Name. -Trisyefo

Only works in Debian-Based Operating System. example: Ubuntu, Mint, Debian, and other... 
*/

#include <stdio.h>
#include <stdlib.h>

char input;

char *logo =
"                                 :.                    \n"
"                                                       \n"
"                                                       \n"
"                       -**:  .+###-                    \n"
"                      .= :*. -+  -%.                   \n"
"                       +=-++++*--+=                    \n"
"                       -==++**++===                    \n"
"                       .-=====-====  --                \n"
"                       =**=--=**#%%%                   \n"
"                      =%%##*##%%%%%%#.                 \n"
"                     #%%%%%%%%%%%%%%%+                 \n"
"                    -%%%%%%%%%%%######-                \n"
"                   :%%%%%%%%%%%%%%%%%%#%   .           \n"
"                . =%%%%%%%%%%%%%%%%%%%%%#..            \n"
"                 :%%%%%%%%%%%%%%%%%%%%%%%=   .         \n"
"                 #%%%%%%%%%%%%%%%%%%%%%%%+   .         \n"
"              ...%%%%%%%%%%%%%%%%%%%%%%%%+  .          \n"
"            .--.-%%%%%%%%%%%%%%%%%%%%%%%%=    .-.      \n"
"          -==+++- :#%%%%%%%%%%%%%%%%%%*=+-      .==    \n"
"     -=====++++++=.  -#%%%%%%%%%%%%%%#*=+=:  .:=++=    \n"
"     ==+++++++++++=:   :%%%%%%%%%%%%%#+=++====+++++==+ \n"
"     -==++++++++++++=  =%%%%%%%%%%%%#..=+++++++++++++==\n"
"     -=++++++++++++++==%%%%%%%%%%#-   :=+++++++++++==--\n"
"     -====+++++++++++=-:  .:::.       :=++++++==--:::  \n"
"      --------========-:              :--===--:::      \n"
"               :::::::..              ....::..         \n";

int main(){
	system("clear");
	printf("\033[32m%s\n\n\033[0m",logo);
	printf("\033[32mWelcome to Ubuntu setup please select the option below:\n\n\033[0m");
printf("\033[34m0. Complete Installation\n(Also Includes Git and 4 Programming Language and Vim code editor)\033[0m\n\n1. Update and Upgrade\n2. Update\n3. Upgrade\n\n");
printf(": ");
printf("\033[3 q");
scanf("%c", &input);
if(input == '0'){
system("apt -y update && apt -y upgrade && apt -y install git && apt install -y python-is-python3 && apt install -y gcc && apt install -y vim && apt install -y g++ && apt install -y nodejs");
}
else if(input ==  '1'){
system("apt -y update && apt -y upgrade");
}
else if(input == '2') {
system("apt -y update");
}
else if(input == '3') {
system("apt -y upgrade");                                             }
return 0;
}
