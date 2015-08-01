#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "json.h"

const char * temp()
{
   char device[10], command[5];
   printf("Device: ");
   scanf("%s", &device);
   printf("Command: ");
   scanf("%s", &command);
   static char text[16];
   sprintf(text, "%s %s", device, command);
   return text;
}

const char * detectCommand()
{

   const char * text = temp();
   char *str = (char *)text;  
   switch(*str)
   {
      case 'l':
         if(strcmp(str, "light on") == 0)
         {
            const char * msg = createMessage("light", 0, "on");
            puts(msg);
            return msg;
            break;
         }
         else if(strcmp(str, "light off") == 0)
         {
            const char * msg = createMessage("light", 0, "off");
            puts(msg);
            return msg;
            break;
         }
         else{
            break;
         }
      default:
         break;
   }
}

int main()
{
   detectCommand();
}

//This program uses the method detectCommand() to see if the device and command are valid. 
//If they are valid, the program invokes the method createMessage(device, deviceID, command) to put the data in JSON format
//The device and command are supposed to be supplied by the method recognizeSpeech(), but for now there is a temp function
//To run this program, type: gcc -o detectcmnd json.c detectcmnd.c
