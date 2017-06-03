import time

import random

name = input("What is your name? ")
print ("Hello, " + name, "Time to play hangman!\n")

time.sleep(1)
print("Start guessing...")
time.sleep(0.5)

listOfWords = ("devmedia", "secret", "cat", "trash", "python")

randomNumber = random.randint(0, len(listOfWords) - 1)

guessWord = listOfWords[randomNumber]
word = guessWord
guesses = ''
turns = 10

while turns > 0:
    failed = 0

    for char in word:
        if char in guesses:
            print(char),
        else:
            print("_"),
            failed += 1

    if failed == 0:
        print("\nYou win")
        break
    print

    guess = input("guess a character: ")

    guesses += guess

    if guess not in word:
        turns -= 1
        print("Wrong\n")
        print("You have ", turns, " more guesses")

        if turns == 0:
            print("You Loose\n")
            
