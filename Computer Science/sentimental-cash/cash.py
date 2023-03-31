def main():
    cents = get_cents()
    cents = round(cents * 100)

    count = 0

    while cents >= 25:
        cents = cents - 25
        count += 1

    while cents >= 10:
        cents = cents - 10
        count += 1

    while cents >= 5:
        cents = cents - 5
        count += 1

    while cents >= 1:
        cents = cents - 1
        count += 1

    print(count)


def get_cents():
    while True:
        try:
            n = float(input('Change owed: '))
            if n > 0:
                return n
        except ValueError:
            print('Not an integer')


main()
