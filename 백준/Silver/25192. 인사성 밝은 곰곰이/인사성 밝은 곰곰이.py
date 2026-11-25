import sys
input = sys.stdin.readline

user_set = set()
result = 0
chat_num = int(input())
for i in range(chat_num) :
    user_chat = input().rstrip()
    if(user_chat == "ENTER"):
        user_set.clear()
        continue
    elif(user_chat not in user_set): 
        user_set.add(user_chat)
        result += 1

print(result)