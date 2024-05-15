import math

# Завданя 1
# n = 5

# y = (3 * math.sqrt(n - 1) * math.log2(n) - math.tan(n**3)) / (math.acos(0.85) + math.log(n))

# print(f"Значення виразу при n = {n}: {y}")




# Завдання 2
# x = 0.6
# s = 5.6

# r = math.sin(x) + math.log(s)
# r1 = math.sqrt(r**3)

# print(f"x = {x}")
# print(f"s = {s}")
# print(f"r = {r}")
# print(f"r1 = {r1}")






# Завдання 3
# a = 3.3
# b = 7.245
# c = 6.4
# d = -1.45e-1
# x = 1.6

# numerator = a*x + b
# denominator = c + d*x
# sqrt_term = math.sqrt(abs(math.atan(numerator / denominator)))
# exponent_term = -math.exp(2*x)
# y = (numerator / denominator) * sqrt_term + exponent_term

# print("Given values:")
# print(f"a = {a}, b = {b}, c = {c}, d = {d}, x = {x}")
# print("\nCalculated value of y:")
# print(f"y = {y:.4f}")

# provided_result = -22.7215
# print("\nComparison with the provided result:")
# if abs(y - provided_result) < 1e-4:
#     print("The calculated result matches the provided result.")
# else:
#     print("The calculated result does not match the provided result.")