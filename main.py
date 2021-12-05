
with open('input.txt', 'r') as f:
    actions = f.read().split("\n")

horizontal = depth = 0

for line in actions:
    pair = line.split(" ")

    move = pair[0]
    amount = int(pair[1])
    
    if move == "up":
        depth -= amount
    elif move == "down":
        depth += amount
    elif move == "forward":
        horizontal += amount

print(f"1. horizontal: {horizontal}, depth: {depth}, answer: {horizontal * depth}")

aim = horizontal = depth  = 0

for line in actions:
    pair = line.split(" ")

    move = pair[0]
    amount = int(pair[1])
    
    if move == "up":
        aim -= amount
    elif move == "down":
        aim += amount
    elif move == "forward":
        horizontal += amount
        depth += aim * amount

print(f"2.  horizontal: {horizontal}, depth: {depth}, aim: {aim} answer: {horizontal * depth}")