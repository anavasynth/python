number = int(input("Enter a five-digit number: "))

digit_2 = (number//1000)%10
digit_4 = (number//10)%10
product = digit_2 * digit_4

print("\nДобуток 2 і 4 цифри:", product)