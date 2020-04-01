import random

bars = ["Shoolbred's",
        "The Wren",
        "The Scratcher",
        "ACME",
        "Blind Barber"]

people = ["Mattan",
          "Chris",
          "that person you forgot to text back",
          "Kanye West",
          "Samuel L. Jackson",
          "Hamza"]

random_bar = random.choice(bars)
random_person1 = random.choice(people)
random_person2 = random.choice(people)

if random_person1==random_person2:
	random_person2 = random.choice(people)

print(f"Who are you going to the university with?"
	"with {random_person1} or {random_person2}?")
