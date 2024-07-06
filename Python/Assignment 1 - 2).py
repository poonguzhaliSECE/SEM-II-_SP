import random

def guess_number():
    random_number = random.choice(range(1, 101)) # Generates a random number between 1 and 100
    attempts = 0

    while True:
        guess = int(input("Guess the number (between 1 and 100): "))
        attempts += 1

        if guess < random_number:
            print("Too low! Try again.")
        elif guess > random_number:
            print("Too high! Try again.")
        else:
            print(f"Congratulations! You guessed the number {random_number} correctly in {attempts} attempts.")
            break

guess_number()
