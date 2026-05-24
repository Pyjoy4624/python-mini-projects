**_Hello~ 
This is a 《💻Coding☆World🌏》 .
 You can anything with Code. 
You can anything with C or Python and ect too. 
You can choose coding language and that coding language to do coding. 
You can make codespase at this. 
enjoy the coding~ 
thank you~_**

This is a Python one line notepad&Binary change Program .py code.

```
#import sys
#sys.stdin("input.txt", "r",encoding="UTF-8")
#sys.outdin("output.txt", "w",encoding="UTF-8")

def Chat():
    # MCAT = [] # Remove this variable because it is not used and is immediately overwritten.
    # CB = [] # CB is newly created and used for each message.
    C = {}
    CM = 0
    M = 0

    Nick = input("input the Nickname : ")
    print(Nick,"user, welcome to my Python one line notepad&2binary string change~!")
    print()

    while True:
        input_message = input("input the txt(when want to exit, input the 'exit') :") # Use a clearer variable name instead of 'MCAT'.
        C[CM] = input_message

        # Generates a real binary string list instead of a generator object.
        binary_parts = [format(ord(char), '08b') for char in input_message]
        # Link the generated binary string list to a blank space.
        joined_binary_string = ' '.join(binary_parts)

        M += (len(input_message)+len(joined_binary_string))
        if input_message.lower() == 'exit':
            break
#        sys.outdin(write(f"{Nick} {M}₩/$ : {C[CM]}\n"))
#        sys.outdin(write(f"-> 2진수 = {joined_binary_string}\n"))
        print(f"{Nick} {M}₩/$ : {C[CM]}")
        print(f"-> change to binary string = {joined_binary_string}") # Prints a properly connected binary string.
        CM += 1

Chat()

```
