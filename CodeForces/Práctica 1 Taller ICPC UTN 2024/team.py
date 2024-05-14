
cases = int(input())
sol = 0
for _ in range(cases):
  problems = input().split()
  if(problems.count("1")>1):
    sol += 1
print(sol)