def hello(name):
    print(f"Hello {name}!")

def full_name(first_name, last_nane):
    return f"{first_name} {last_nane}"



print(f"Hello {full_name("Bob","Bobson")}")
person_one = full_name("Cob","Cobson")
print(f"The second person if {person_one}")
person = full_name("Job","Jobson")
hello(person)

hello(person)
hello(person)
hello("s")
hello(person)





def factorial(number):
    total = 1
    for x in range(number,1,-1):
        total *= x
    return total

for y in range(1,10):
    print(f"The factorial of y is {factorial(y)}")



num = 1

def add():
   num = 1
   num += 1
   return num

print(add())