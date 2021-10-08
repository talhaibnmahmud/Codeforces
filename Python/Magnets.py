"""Codeforces problem 344A "Magnets"
"""

if __name__ == "__main__":
    n = int(input())

    magnets: list[str] = []
    for i in range(n):
        magnets.append(input())

    count = 0
    for index in range(n):
        if index == n - 1:
            count += 1
            break
        if magnets[index] == magnets[index + 1]:
            continue

        count += 1

    print(count)
