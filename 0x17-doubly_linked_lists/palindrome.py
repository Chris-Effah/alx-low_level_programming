#!/usr/bin/python3
def is_palindrome(num):
    return str(num) == str(num)[::-1]

def find_the_largest_palindrome():
    largest_palindrome = 0

    for f in range(100, 1000):
        for s in range(100, 1000):
            product = f * s
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
    return largest_palindrome

if __name__ == "__main__":
    result = find_the_largest_palindrome()
    with open("102-result", "w") as file:
        file.write(str(result))
