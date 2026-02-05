bs = int(input("Enter basic salary:"))
da = bs * 70/100
ta = bs * 30/100
hra = bs * 10/100
gross = bs + da + ta + hra 
print("Gross salary =", gross)
