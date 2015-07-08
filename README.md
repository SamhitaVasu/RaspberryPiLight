# RaspberryPiLight

Voice activated raspberry pi light switch

Methods invoked:

1. recognizeSpeech() turns speech into text

2. detectCommand(str) detects valid command

3. If the command is valid, then createMessage(device, deviceID, command) in JSON format

4. writeToUSB(msg) 
