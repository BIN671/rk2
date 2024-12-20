a = "101101"
b = "110011"

r1 = bin(int(a, 2) & int(b, 2))[2:]

r2 = bin(int(a, 2) + int(b, 2))[2:]

print(f"результат AND {r1}")
print(f"результат сложения {r2}")
