word = input('Enter word ')
size = len(word)
#for i in range(0,size, 2):
   # print(word[i])

pos=0
for e in word:
    if pos%2==0:
      print(e)  
    pos=pos+1   

str="Ishan is 18 years old""Ishan is in the first year of college."
str.count("Ishan")
