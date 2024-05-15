
# Завдання 1
# def find_min_max_length_elements(array):
#     min_length = float('inf')
#     max_length = float('-inf')
#     min_index = -1
#     max_index = -1

#     for i, word in enumerate(array):
#         length = len(word)
#         if length < min_length:
#             min_length = length
#             min_index = i
#         if length > max_length:
#             max_length = length
#             max_index = i

#     return min_index, max_index

# def swap_elements(array, i, j):
#     array[i], array[j] = array[j], array[i]

# A = ["Python", "Java", "C++", "JavaScript", "Ruby", "PHP", "Swift", "Go", "R", "Kotlin", "Perl", "Rust", "Scala", "Haskell", "TypeScript"]
# min_index, max_index = find_min_max_length_elements(A)
# swap_elements(A, min_index, max_index)
# print("Масив після обміну:", A)








# Завдання 2
# def find_unique_letters(word1, word2):
#     set1 = set(word1)
#     set2 = set(word2)

#     unique_letters = set1.symmetric_difference(set2)

#     return unique_letters

# def main():
#     try:
#         word1 = input("Введіть перше слово: ")
#         word2 = input("Введіть друге слово: ")

#         unique_letters = find_unique_letters(word1, word2)
#         print("Унікальні літери:", ' '.join(unique_letters))
#     except Exception as e:
#         print("Сталася помилка:", e)

# if __name__ == "__main__":
#     main()