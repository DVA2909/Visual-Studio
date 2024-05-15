# def check_passengers_luggage(passengers):
#     eligible_passengers = []

#     for surname, luggage_info in passengers.items():
#         if luggage_info[0] == 1 and luggage_info[1] < 25:
#             eligible_passengers.append(surname)

#     return eligible_passengers

# def main():
#     try:
#         passengers = {}

#         num_passengers = int(input("Введіть кількість пасажирів: "))
#         for i in range(num_passengers):
#             surname = input(f"Прізвище пасажира {i+1}: ")
#             num_items = int(input("Кількість речей у багажі: "))
#             total_weight = float(input("Загальна вага багажу: "))
#             passengers[surname] = (num_items, total_weight)

#         eligible_passengers = check_passengers_luggage(passengers)

#         if eligible_passengers:
#             print("Прізвища пасажирів з багажем менше 25 кг:", ', '.join(eligible_passengers))
#         else:
#             print("Немає пасажирів з багажем менше 25 кг.")
#     except Exception as e:
#         print("Сталася помилка:", e)

# if __name__ == "__main__":
#     main()
