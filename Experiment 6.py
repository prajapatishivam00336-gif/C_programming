# students in exams
cet = {"Kartavya", "Bob"}
jee = {"Tathagat", "Bob"}
neet = {"Saad", "Eve"}
print("All students:", cet|jee|neet) #Union
print("Students in all exam:", cet & jee & neet) # intersection
print("Cet but not in jee:", cet - jee) #Difference
