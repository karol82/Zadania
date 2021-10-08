# Podana jest lista zawierająca elementy o wartościach od 1 do n
# Napisz funkcję która sprawdzi jakich elementów brakuje

# 1-n = [1,2,3,4 ... 10]
# np n = 10
# wejście: [2,3,7,4,9], 10
# wyjście: [1,5,6,8,10]

def return_missing(input_list: list, max_value: int):
    temp_list = [i + 1 for i in range(max_value)]
    return list(set(temp_list).difference(set(input_list)))


print(return_missing([2, 3, 7, 4, 9], 10))
