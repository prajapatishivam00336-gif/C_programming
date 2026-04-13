class Product:
    def __init__(self, pid, name, price, stock):
        self.pid = pid
        self.name = name
        self.price = price
        self.stock = stock

    def update_stock(self, quantity):
        self.stock -= quantity


class Customer:
    def __init__(self, name):
        self.name = name


class Cart:
    def __init__(self):
        self.items = {}   # {product: quantity}

    def add_item(self, product, quantity):
        if product.stock >= quantity:
            if product in self.items:
                self.items[product] += quantity
            else:
                self.items[product] = quantity
            product.update_stock(quantity)
            print(f"{quantity} {product.name}(s) added to cart")
        else:
            print(f"Not enough stock for {product.name}")

    def show_cart(self):
        print("\nCart Items:")
        total = 0
        for product, qty in self.items.items():
            cost = product.price * qty
            total += cost
            print(f"{product.name} - {qty} x {product.price} = {cost}")
        print("Total =", total)

    def checkout(self):
        print("\nOrder Placed Successfully!")
        self.show_cart()
        print("Thank you for shopping!\n")


# ----------- Main Program -----------

# Create products
p1 = Product(1, "Laptop", 50000, 5)
p2 = Product(2, "Mobile", 20000, 10)
p3 = Product(3, "Headphones", 2000, 15)

# Create customer
customer = Customer("Shivam")

# Create cart
cart = Cart()

# Add items
cart.add_item(p1, 1)
cart.add_item(p2, 2)
cart.add_item(p3, 3)

# Show cart
cart.show_cart()

# Checkout
cart.checkout()

