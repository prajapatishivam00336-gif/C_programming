
# Enter file name
file_name = input("Enter file name: ")

# Enter required word length
length = int(input("Enter word length: "))

# Open and read file
file = open(file_name, "r")
data = file.read()
file.close()

# Split text into words
words = data.split()

print("Words with length", length, "are:")

# Check each word length
for word in words:
    if len(word) == length:
        print(word)
