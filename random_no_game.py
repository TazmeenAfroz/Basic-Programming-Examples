import random 

def guessNumber():
    secretNo = random.randint(1,100)
    guesses = 0

    while guesses < 10:
        No = int(input("Guess a number between 1 and 100 (you have only 10 chances): "))
        guesses += 1
        if No == secretNo:
            print(f"Congratulations! You guessed the secret number in {guesses} tries.")
            return
        elif No < secretNo:
            print("Your guess is too low")
        elif No > secretNo:
            print("Your guess is too high")

    print("You have run out of guesses")
    print("The secret number was", secretNo)

if __name__ == "__main__":
    guessNumber()
