txt = input('Text: ')

letters = len(list(filter(str.isalpha, txt)))

words = len(txt.split(' '))

senteces = sum(txt.count(x) for x in ('.!?'))

L = letters / words * 100
S = senteces / words * 100

total = round(0.0588 * L - 0.296 * S - 15.8)

if total >= 16:
    print('Grade 16+')
elif total < 1:
    print('Before Grade 1')
else:
    print(f'Grade {total}')
