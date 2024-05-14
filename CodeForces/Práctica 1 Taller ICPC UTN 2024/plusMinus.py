cases = int(input())
for _ in range(cases):
  nums = input().split()
  if(int(nums[0])+int(nums[1]) == int(nums[2])):
    print("+")
  else:
    print("-")