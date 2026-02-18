import random
number = random.randint(1,20)
while True:
    guess = int(input("Tell me a number between 1 and 20: "))
    if guess == number:
        print(f"You won The number was {number}!")
        break
    elif guess < number:
        print("Guess Higher")
    else:
        print("Guess Lower")