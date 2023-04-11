
def order(*list,prices):
    for i,item in enumerate(list,1):
        ''' enumerate() is a built-in Python function that
         allows you to iterate over a sequence (like a list) 
         while keeping track of the index of the current item. 
         In the example provided, enumerate() is used to display a numbered list of dishes to the user,
         with their corresponding index displayed before the dish name.'''
        print(f"{i}.{item}")
    print("Enter 'exit' when you're finished.")

    user_order = []

    while True:
        choice = input("Enter dish number (or 'exit') :")
        if choice == 'exit':
            break
        try:
            choice = int(choice)
            if 1 <= choice <= len(list):
                user_order.append(list[choice -1])
                '''append() is a built-in method in Python lists
                 that allows you to add an item to the end of a list. 
                In the example provided, append() is used to add the chosen dish to the user_order list.'''
            else:
                    print("Invalid choice. Please enter a valid dish number.")
        except ValueError:
                    print("Invalid input. Please enter a valid dish number or 'done'")

    print("You ordered the following dishes:")
                    
    for dish in user_order:
     print("- " + dish)
                       
     print("Enjoy your meal!")
                    
    total_cost = 0
    for dish in user_order:
        total_cost += prices.get(dish, 0)

    print(f"Your total cost is ${total_cost:.2f}.")
    print("Thank you for visiting our restaurant!")

dish_prices ={"Pizza": 2000, "Pasta": 800, "Burger": 1200, "Coke": 50, "Fries": 600, "Ice Cream": 400, "Cake": 700, "Salad": 200, "Sandwich": 300, "Soup": 100}
order("Pizza","Pasta","Burger","Coke","Fries","Ice Cream","Cake","Salad","Sandwich","Soup",prices=dish_prices)