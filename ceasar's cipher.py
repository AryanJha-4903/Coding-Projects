import string
#-----------encrypter---------------#
def ceasar_cipher(text,coderlen):
    result=''
    for i in text:
         #lower_case
         if i.islower():
             result=result+chr((ord(i)+coderlen-97)%26+97) 
         #upper_case
         elif i.isupper():
             result=result+chr((ord(i)+coderlen-65)%26+65)
         else:
            result=result+i     
    return result      
#---------DriverCode------------#
size=int(input())
text=input()
coderlen=int(input())
print(ceasar_cipher(text,coderlen))
#-----------end-----------------#             
    