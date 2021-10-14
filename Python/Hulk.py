"""Codeforces problem 705A - Hulk
"""

if __name__ == "__main__":
    n = int(input())

    FIRST_PHRASE = "I hate that "
    SECOND_PHRASE = "I love that "

    result = ""

    for i in range(1, n + 1):
        if i % 2 == 1:
            result += FIRST_PHRASE
        else:
            result += SECOND_PHRASE

    print(result[:-6], "it")
