txt = open("numbers.txt", "r")
content = txt.readlines()

num1 = content[0]

print(num1.strip())
