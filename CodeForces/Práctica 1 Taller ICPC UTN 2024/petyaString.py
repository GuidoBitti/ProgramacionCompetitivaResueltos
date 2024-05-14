w1 = input().lower()
w2 = input().lower()
var = True
for i in range(len(w1)):
  if(w1[i] != w2[i]):
    if(w1[i]>w2[i]):
      print(1)
    else:
      print(-1)
    var = False
    break;
if(var):
  print(0)