time = int(input("what hour is it in military time? "))
if time == 24:
    print("GO TO SLEEP IT'S MIDNIGHT!")
elif time == 1:
    print("it's way to early to be awake")
elif time < 0:
    if time >= -24:
        print("that's yesterday")
    else:
        print("I'm not a time machine")
elif time == 12:
    print("It's noon")
elif time == 16:
    print("It's time to go home")
elif time == 0:
    print("ZZZZZZZZZZZZZZZZZZZZZZZZZ")
elif time > 24:
    if time <=48:
        print("that's tomarrow")
    else:
        print("I'm not a time machine, come back later and ask me again")
elif time < 5:
    print("go back to sleep")
elif time < 6:
    print("you're up early")
elif time < 12:
    print("Good morning")
elif time < 17:
    print("Good afternoon")
elif time < 21:
    print("Good evening")
elif time < 23:
    print("Good Night")
elif time < 24:
    print("Go To Bed")
else:
    print("WITCHCRAFT!")