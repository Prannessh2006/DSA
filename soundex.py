x = str(input("Enter a name: "))
x = x.lower()

lst_0 = ['a', 'i', 'o', 'u', 'e', 'h', 'w', 'y']
lst_1 = ['b', 'f', 'p', 'v']
lst_2 = ['c', 'g', 'j', 'k', 's', 'x', 'z']
lst_3 = ['d', 't']
lst_4 = ['l']
lst_5 = ['m', 'n']
lst_6 = ['r']

x_1 = []

for i in range(len(x)):
    if i == 0:
        x_1.append(x[i].upper())  # Capitalize first letter
    elif x[i] == x[i-1]:  
        continue  # Ignore consecutive duplicates
    elif x[i] in lst_0:
        continue  # Ignore vowels and silent letters
    elif x[i] in lst_1:
        x_1.append('1')
    elif x[i] in lst_2:
        x_1.append('2')
    elif x[i] in lst_3:
        x_1.append('3')
    elif x[i] in lst_4:
        x_1.append('4')
    elif x[i] in lst_5:
        x_1.append('5')
    elif x[i] in lst_6:
        x_1.append('6')

# Ensure length is **exactly** 4 characters
while len(x_1) < 4:
    x_1.append('0')

print("".join(x_1[:4]))  # Corrected output logic
