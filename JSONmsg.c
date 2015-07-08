#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

const char * createMessage(char d[30], char ID[50], char cmnd[50])
{
   char beg[20] = "{\"IOT_message\":[";
   char device[15] = "\"device\": \"";
   char deviceID[15] = "\"deviceID\": \"";
   char command[15] = "\"command\": \"";
   char enter[2] = "{";
   char end1[5] = "\"}";
   char end2[5] = "]}";
   static char json[200];
 
   sprintf(json, "%s \n%s %s %s %s \n%s %s %s %s \n%s %s %s %s \n%s", beg, enter, device, d, end1, enter, deviceID, ID, end1, enter, command, cmnd, end1, end2); 
   return json;
}   

int main()
{
   char dvice[30], dID[50], action[50];
 
   printf("Enter device: \n");
   scanf("%s", &dvice);

   printf("Enter device ID: \n");
   scanf("%s", &dID);

   printf("Enter command: \n");
   scanf("%s", &action);

   const char * msg = createMessage(dvice, dID, action);
   puts(msg);
}

//This program takes a device name, a device ID, and a command as parameters to create a message in JSON format. You may expand this program by adding a parameter list for the command.
