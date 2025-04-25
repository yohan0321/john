def calculateElectricRate(month, kwh):
    if (month == 7 or month == 8):
        x = 300 * 112.0
        y = 150 * 206.6
        z = 550 * 728.2
        if (kwh <= 300):
            return kwh * 112.0
        elif (kwh <= 450):
            return (kwh - 300) * 206.6 + x
        elif (kwh <= 1000):
            return (kwh - 450) * 299.3 + x + y
        else:
            return kwh * 728.2 + x + y + z
    else:
        x = 200 * 112.0
        y = 200 * 206.6
        z = 600 * 299.3
        if (kwh <= 200):
            return kwh * 112.0
        elif (kwh <= 400):
            return (kwh - 200) * 206.6 + x
        elif (kwh <= 1000):
            return (kwh - 400) * 299.3 + x + y
        if (month == 12 or month == 1 or month == 2):
            if (kwh > 1000):
                return kwh * 728.2 + x + y + z
        else:
            return (kwh - 400) * 299.3 + x + y




month = int(input("지금은 몇월인가요? : "))
kwh = int(input("사용량은 몇 KWh인가요? "))
total = calculateElectricRate(month, kwh)
print("전력량요금은", int(total), "원입니다.")

