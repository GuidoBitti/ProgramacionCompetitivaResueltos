cases = int(input())
codeforces = "codeforces"
for _ in range(cases):
  word = input()
  sol=0
  for i in range(10):
    if(word[i]!=codeforces[i]):
      sol += 1
  print(sol)