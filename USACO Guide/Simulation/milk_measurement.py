a = int(input(""))

cows = []
cow_rank = []
for i in range(a):
  b = input("")
  b = b.split()
  cows.append([int(b[0]), b[1], int(b[2])])
  cow_rank.append([b[1],0])

cows = sorted(cows)
changes = 0
winner = "noone"
maxi = 0
for sim in cows:
  for cow in cow_rank:
    if (sim[1] == cow[0]):
      cow[1]+=sim[2]
      if (cow[1] >= maxi):
        if (winner == "noone"):
          winner = cow[0]
          maxi = cow[1]
          changes+=1
        else:
          winner = cow[0]
          maxi = cow[1]
          changes+=1

print(changes)
  