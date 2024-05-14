colors= ["purple", "green", "blue", "orange", "red", "yellow"]
gems = ["Power", "Time", "Space", "Soul", "Reality", "Mind"]
cases = int(input())
for _ in range(cases):
  color = input()
  index = colors.index(color)
  colors.pop(index)
  gems.pop(index)
print(len(gems))
for i in gems:
  print(i)