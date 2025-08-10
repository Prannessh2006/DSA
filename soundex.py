def encrypt(letter):
    zero = "AEIOUWHY"
    one = "BFPV"
    two = "CGJKFSXZ"
    three = "DT"
    four = "L"
    five = "MN"
    six = "R"
    lst = [zero,one,two,three,four,five,six]
    for i in range(0,len(lst)):
        if(letter in lst[i]):
            return str(i)
        
def code(word):
    word = word.upper()
    code=""
    code+=word[0]
    found=""
    for i in range(1,len(word)):
        if(word[i] in found or encrypt(word[i])=="0"):
            pass
        else:
            code+=encrypt(word[i])
            found+=word[i]
        if(len(code)==4):
            return code
    if(len(code)<4):
        while(len(code)<4):
            code+="0"
    return code
x = list(map(str,input().split(" ")))   
output_list=[code(u)+" "  for u in x]
print("".join(output_list))
