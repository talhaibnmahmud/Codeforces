"""Codeforces problem 266B "Queue at the School"
"""

if __name__ == "__main__":
    n, t = [int(x) for x in input().split()]
    sequence = list(input())

    for time in range(t):
        index = 0
        while index < n - 1:
            if sequence[index] == "B" and sequence[index + 1] == "G":
                sequence[index], sequence[index + 1] = sequence[index + 1], sequence[index]
                index += 2
                continue

            index += 1

    print("".join(sequence))
