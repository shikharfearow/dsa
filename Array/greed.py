N = int(input())
K = int(input())
price = input().split()
volume = input().split()

# Initialize Result
ans = 0
  
# Traverse through all denomination
i = N - 1
while(i >= 0):
    # Find denominations
    while (K >= int(price[i])):
        K -= int(price[i])
        ans += int(volume[i])

    i -= 1
  
# Print result
print(ans)