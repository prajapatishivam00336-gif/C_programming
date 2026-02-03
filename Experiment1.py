print("1 circle")
print("2 rectangle")
print("3 triangle")

c = int(input("choose: "))

if c == 1:
    r = float(input("radius: "))
    print("area =", 3.14 * r * r)

elif c == 2:
    l = float(input("length: "))
    b = float(input("breadth: "))
    print("area =", l * b)

elif c == 3:
    b = float(input("base: "))
    h = float(input("height: "))
    print("area =", 0.5 * b * h)

else:
    print("Invalid choice")
