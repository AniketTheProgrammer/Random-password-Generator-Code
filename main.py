# 1.method 
# import module form internet

# from password_generator import PasswordGenerator
# password = PasswordGenerator()
# print(password.generate())


#2. method 

import random

def password(length):
    word = "abcdefghijklmnopqrstuvwxyz1234567890!@#$^&*"
    for i in range(0 , length):
        print(random.choice(word) , end="")
    print("\n")    

print("Random Password Generator ......")
passLength = int(input("Enter length of password...   "))
        
password(passLength)
