import math


# Завдання 1
# min_num = float('inf')  # Assume minimum number is positive infinity initially
# total_sum = 0

# print("Enter a sequence of positive numbers (enter a non-positive number to stop):")

# while True:
#     num = float(input())
#     if num <= 0:
#         break

#     min_num = min(min_num, num)
#     total_sum += num

# print("\nInput sequence of positive numbers:")
# print(f"Minimum number: {min_num:.2f}")
# print(f"Sum of all numbers: {total_sum:.2f}")







# Завдання 2
# def factorial(n):
#     """
#     Calculates the factorial of a non-negative integer n.
#     """
#     if n < 0:
#         raise ValueError("Factorial is not defined for negative numbers.")
#     if n == 0:
#         return 1
#     else:
#         return n * factorial(n - 1)

# def calculate_summation(x, n):
#     """
#     Calculates the summation expression based on the given x and n values.
#     """
#     summation = 0
#     for k in range(n + 1):
#         numerator = pow(-1, k) * pow(x, k + 2)
#         denominator = factorial(2 * k + 1) * factorial(k)
#         term = numerator / denominator
#         summation += term
#     return summation

# x = float(input("Enter the value of x: "))
# n = int(input("Enter the value of n: "))

# result = calculate_summation(x, n)

# print(f"The value of the summation for x = {x} and n = {n} is: {result}")







# Завдання 3
# x0 = 0.2  # Start of the interval
# xk = 3.0  # End of the interval
# h = 0.2   # Step size
# a = 3.0   # Constant a
# b = 4.0   # Constant b

# x = x0
# result = 0

# while x <= xk:
#     y = 0
#     j = 0
#     while j <= 10:  # Arbitrary limit of 10 for the inner loop
#         term = pow(x, j) * pow(a, j - 1) * pow(b, 2 * j)
#         y += term
#         j += 1

#     function_value = 1 / (1 + math.exp(-y))
#     print(f"x = {x:.2f}, y = {y:.6f}, f(x) = {function_value:.6f}")

#     x += h

# print("Calculation completed.")