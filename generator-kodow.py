# Generator kodow pocztowych
# przyjmuje 2 stringi: "70-900" i 80-155, zwraca liste kodow pomiedzy nimi

# first_code = input("Podaj pierwszy kod pocztowy np (79-900): ")
# last_code = input("Podaj ostatni kod pocztowy np (80-155): ")

# poprawić program na jedną funkcję przyjmującą dwa kody i zwracającą listę

first_code = '70-900'
last_code = '80-155'
result_tab = []


def remove_floor(text: str):
    return int(text.replace('-', ''))


def add_floor(text: int):
    return str(text)[:2] + '-' + str(text)[2:]


first_code = remove_floor(first_code)
last_code = remove_floor(last_code)

loops = last_code - first_code
i = 0
while i <= loops:
    result_tab.append(add_floor(first_code + i))
    i += 1

print(result_tab)

