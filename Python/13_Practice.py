import random


# �������� 1
# def fill_list(n, option):
#     lst = []
#     if option == 'a':
#         for _ in range(n):
#             lst.append(random.random())
#     elif option == 'b':
#         for _ in range(n):
#             lst.append(random.randint(-10, 10))
#     elif option == 'c':
#         for _ in range(n):
#             lst.append(random.randint(0, 50))
#     else:
#         print("������������ ���� �����")
#         return []
#     return lst

# def product_until_last_positive(lst):
#     product = 1
#     for num in lst:
#         if num > 0:
#             product *= num
#         else:
#             break
#     return product

# n = int(input("������ ����� ������: "))
# option = input("������� ����� (a, b, ��� c): ")

# lst = fill_list(n, option)
# print("������:", lst)

# if option == 'b':
#     result = product_until_last_positive(lst)
#     print("������� �������� �� ���������� ���������:", result)
# else:
#     print("��� �����", option, "�� ������� ����������� �������")









# �������� 2
# def fill_list(n):
#     lst = []
#     for _ in range(n):
#         lst.append(random.randint(-10, 10))
#     return lst

# def min_until_first_negative(lst):
#     min_val = float('inf')
#     for num in lst:
#         if num < 0:
#             break
#         min_val = min(min_val, num)
#     return min_val if min_val != float('inf') else None

# n = int(input("������ ����� ������: "))
# lst = fill_list(n)
# print("������:", lst)

# result = min_until_first_negative(lst)
# if result is not None:
#     print("̳�������� ������� �� ������� ��'������:", result)
# else:
#     print("� ������ ���� �������� ��������")







# �������� 3
# def fill_matrix(n, option):
#     matrix = []
#     if option == 'a':
#         for _ in range(n):
#             row = [random.random() for _ in range(n)]
#             matrix.append(row)
#     elif option == 'b':
#         for _ in range(n):
#             row = [random.randint(-10, 10) for _ in range(n)]
#             matrix.append(row)
#     elif option == 'c':
#         for _ in range(n):
#             row = [random.randint(0, 20) for _ in range(n)]
#             matrix.append(row)
#     elif option == 'd':
#         for _ in range(n):
#             row = [random.uniform(-10, 10) for _ in range(n)]
#             matrix.append(row)
#     else:
#         print("������������ ���� �����")
#         return []
#     return matrix

# def generate_magic_square(n):
#     magic_square = [[0 for _ in range(n)] for _ in range(n)]
#     i, j = 0, n // 2
#     num = 1
#     while num <= n ** 2:
#         magic_square[i][j] = num
#         i, j = (i - 1) % n, (j + 1) % n
#         if i < 0:
#             i += n
#         if magic_square[i][j]:
#             i += 1
#         num += 1
#     return magic_square

# n = int(input("������ ����� ��������� �������: "))
# option = input("������� ����� (a, b, c, ��� d): ")

# if option == 'a' or option == 'b' or option == 'c' or option == 'd':
#     matrix = fill_matrix(n, option)
#     print("����������� �������:")
#     for row in matrix:
#         print(row)
# else:
#     print("������������ ���� �����")

# magic_square = generate_magic_square(n)
# print("\n������� �������:")
# for row in magic_square:
#     print(row)











#�������� 4
# # import numpy as np

# # def matrix_vector_product(matrix, vector):
# #     if matrix.shape[1] != len(vector):
# #         raise ValueError("������ ������� �� ������� �� ����� ��� ��������")

# #     result_vector = np.dot(matrix, vector)

# #     max_element = np.max(result_vector)

# #     return result_vector, max_element

# # matrix = np.array([[1, 2, 3],
# #                    [4, 5, 6],
# #                    [7, 8, 9]])
# # vector = np.array([1, 2, 3])

# # result_vector, max_element = matrix_vector_product(matrix, vector)
# # print("������� ������� �� ������:", result_vector)
# # print("������������ ������� ���������� �������:", max_element)