mask=0x20

print("대문자 A가 나오는 경우")
for i in range(1,100000):
    if ~mask&i == ord('A'):
        print(f'i={i} chr({i})={chr(i)}')
        
print("\n소문자 a가 나오는 경우")
for j in range(1,100000):
    if mask|j == ord('a'):
        print(f'j={j} chr({j})={chr(j)}')

print(f'\ni={i} j={j}')
