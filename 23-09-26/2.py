import datetime

d = int(input("Enter day: "))
m = int(input("Enter month: "))
print((datetime.date(2026, m, d) - datetime.date(2026, 1, 1)).days + 1)

