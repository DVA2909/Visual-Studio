# def check_passengers_luggage(passengers):
#     eligible_passengers = []

#     for surname, luggage_info in passengers.items():
#         if luggage_info[0] == 1 and luggage_info[1] < 25:
#             eligible_passengers.append(surname)

#     return eligible_passengers

# def main():
#     try:
#         passengers = {}

#         num_passengers = int(input("������ ������� ��������: "))
#         for i in range(num_passengers):
#             surname = input(f"������� �������� {i+1}: ")
#             num_items = int(input("ʳ������ ����� � �����: "))
#             total_weight = float(input("�������� ���� ������: "))
#             passengers[surname] = (num_items, total_weight)

#         eligible_passengers = check_passengers_luggage(passengers)

#         if eligible_passengers:
#             print("������� �������� � ������� ����� 25 ��:", ', '.join(eligible_passengers))
#         else:
#             print("���� �������� � ������� ����� 25 ��.")
#     except Exception as e:
#         print("������� �������:", e)

# if __name__ == "__main__":
#     main()
