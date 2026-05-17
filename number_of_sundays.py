days = {"sunday":0,"monday":1,
"tuesday":2,"wednesday":3,
"thursday":4,"friday":5,"saturday":6}
start_day = input()
number_of_days = int(input())
count = 0
occurence = 1-days[start_day]
if occurence<=0:
    occurence+=7
if occurence<=number_of_days:
    count+=((number_of_days-occurence)//7)+1
    print(count)
else:
    print(0)
