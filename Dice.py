
import random 

def roll_a_dice():

    return random.randint(1,6)

def play_game():
    input("Press Enter to roll the dices...")
    roll_no_1 = roll_a_dice()
    roll_no_2 = roll_a_dice()
    print("You rolled a ",roll_no_1 ,"and a ",roll_no_2)
    if roll_no_1 == 6 and roll_no_2 == 6:
            print("You rolled two sixes! You can start the game now.")
          
    else:
            print("You didn't roll two sixes. Try again.")
            play_game()

if __name__ == "__main__":
    play_game()