import itertools
numbers = list(map(int,input("Enter the numbers: ").split(" ")))
target = int(input("Enter the target: "))
list_of_options = [list(x) for x in itertools.combinations(numbers,2) if sum(list(x))==target]
print(list_of_options)

