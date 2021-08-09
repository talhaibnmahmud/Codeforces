""" Solution for Anton and Danik """


def main():
    """ Main function """
    _: int = int(input())
    string: str = input()
    anton, danik = 0, 0

    for letter in string:
        if letter == 'A':
            anton += 1
        if letter == 'D':
            danik += 1

    if anton > danik:
        print("Anton")
        return
    if danik > anton:
        print("Danik")
        return

    print("Friendship")


if __name__ == "__main__":
    main()
