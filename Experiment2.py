print("1 Circle")
print("2 Rectangle")
print("3 Triangle")

c = int(input("choose"))

if c == 1:
    r = float(input("Radius:"))
    print("Area =",3.14*r*r)

elif c == 2:
    l = float(input("length"))
    b = float(input("breath"))
    print("Area =", l*b)

elif c == 3:
    l = float(input("length"))
    b = float(input("breath"))
    print("Area", l*b*0.5)
