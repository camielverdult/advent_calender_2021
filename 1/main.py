
with open('input.txt', 'r') as f:
    measurements = f.read()

numbers = list(filter(None, [int(x.split(" ")[0]) for x in measurements.split("\n")]))

increasements = 1
decreasements = 0

for i in range(1, len(numbers)):
    if numbers[i - 1] < numbers[i]:
        increasements += 1
    else:
        decreasements += 1

print(f"1st answer: increasements: {increasements}, decreasements: {decreasements}")

three_measurements_window = []

for i in range(0, len(numbers) - 3):

    # print("{} + {} + {} = {}".format(numbers[i], numbers[i + 1], numbers[i + 2], numbers[i] + numbers[i + 1] + numbers[i + 2]))

    sums = numbers[i] + numbers[i + 1] + numbers[i + 2]

    three_measurements_window.append(sums)

increasements = 1
decreasements = 0

for i in range(1, len(three_measurements_window)):
    if three_measurements_window[i - 1] < three_measurements_window[i]:
        increasements += 1
    else:
        decreasements += 1

print(f"2nd answer: increasements: {increasements}, decreasements: {decreasements}")
