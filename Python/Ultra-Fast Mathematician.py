"""Codeforces problem 61A - Ultra-Fast Mathematician
"""

if __name__ == "__main__":
    first_number = input()
    second_number = input()

    result = ''
    for a, b in zip(first_number, second_number):
        if int(a) ^ int(b):
            result += '1'
        else:
            result += '0'

    print(result)
