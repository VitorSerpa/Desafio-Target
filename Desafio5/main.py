#Primeira forma
string = input("Digite a String a ser invertida")
string_invertida = string[::-1]
print(string_invertida)


#Segunda forma
string_invertida = "" 
for i in range(len(string) - 1, -1, -1):
    string_invertida += string[i] 
print(string_invertida)