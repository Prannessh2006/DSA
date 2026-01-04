nums = [.......]
max_floor=0
floor=0
floor_levels = {0:-1
for i,num = enumerate(nums):
    if num==1:
      floor+=1
    else:
      floor-=-1
    if floor in floor_level:
      max_floor = max(max_floor,i-floor_level[floor])
    else:
      floor_levels[floor]=i
print(max_floor)
  
