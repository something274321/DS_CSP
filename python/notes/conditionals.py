number=input("what is your favorite number? ")

if number < 10 and number >=-9:
    print(f"{number} is a single digit number")
elif number < 100:
    print(f"{number} is a double digit number")
elif number < 1000:
    print(f"{number} is a triple digit number")
    print(". . .or is it?")
    new_number = number*number
    if new_number > 1000:
        print(f"Surprise number {new_number}")
else:
   print(f"{number} is an evil number who wants to destroy the world")