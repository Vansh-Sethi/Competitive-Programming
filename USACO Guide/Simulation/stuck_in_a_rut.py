a = int(input(""))

grid = []
for i in range(100):
  row = []
  for j in range(100):
    row.append(0)
  grid.append(row)

cows = []
for i in range(a):
  row = []
  b = input("")
  b = b.split(" ")
  cows.append([b[0],int(b[1]),int(b[2]), 0, "going"])

for i in range(101):
  already = []
  for cow in cows:
    if i == 0:
      grid[cow[1]][cow[2]] = 1


    if (cow[0] == "N"):
      cow[2]+=1
    if (cow[0] == "E"):
      cow[1]+=1
    if (cow[0] == "S"):
      cow[2]-=1
    if (cow[0] == "W"):
      cow[1]-=1
  

    if (cow[4] == "going"): 
      try:
        if(grid[cow[1]][cow[2]] == 0 or ([cow[1], cow[2]] in already)):
          cow[3]+=1
          grid[cow[1]][cow[2]] = 1
          already.append([cow[1], cow[2]])
        else:
          cow[4] = "stop"
      except:
        cow[4] = "infinity"

for cow in cows:
  if (cow[4] == "infinity" or cow[4] != "stop"):
    print("Infinity")
  else:
    print(cow[3]+1)