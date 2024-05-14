cases = int(input())
for _ in range(cases):
  n = input()
  cant = n.count("?")
  if(n[0]=="0"):
    print(0)
  elif (n[0]=="?"):
    print(pow(10,cant-1)*9)
  else:
    print(pow(10,cant))