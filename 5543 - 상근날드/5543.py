price = []
for i in range(1, 4):
    burger = int(input())
    price.append(burger)
price.sort()
price_burger = price[0]
del price[:]

for i in range(1, 3):
    drink = int(input())
    price.append(drink)
price.sort()
price_drink = price[0]

print(price_burger + price_drink - 50)
