inventory = {}

def add_product():
    name = input("Enter the name of the product: ")
    quantity = int(input("Enter the quantity of the product: "))
    price = float(input("Enter the price of the product: "))
    inventory[name] = {'quantity': quantity, 'price': price}
    print("Product added successfully.")

def update_product():
    name = input("Enter the name of the product you want to update: ")
    if name in inventory:
        quantity = int(input("Enter the new quantity of the product: "))
        inventory[name]['quantity'] = quantity
        print("Product quantity updated successfully.")
    else:
        print("Product not found in inventory.")

def remove_product():
    name = input("Enter the name of the product you want to remove: ")
    if name in inventory:
        del inventory[name]
        print("Product removed successfully.")
    else:
        print("Product not found in inventory.")

def display_inventory():
    print("Inventory:")
    for name, details in inventory.items():
        print(f"Product: {name}, Quantity: {details['quantity']}, Price: {details['price']}")
    if not inventory:
        print("Inventory is empty.")

while True:
    print("\nMenu:")
    print("1. Add a new product to the inventory")
    print("2. Update the quantity of an existing product")
    print("3. Remove a product from the inventory")
    print("4. Display the list of products in stock along with their details")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        add_product()
    elif choice == '2':
        update_product()
    elif choice == '3':
        remove_product()
    elif choice == '4':
        display_inventory()
    elif choice == '5':
        print("Exiting the program. Goodbye!")
        break
    else:
         print("Invalid choice. Please enter a number from 1 to 5.")
 
