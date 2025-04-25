import random
import string

def generate_code(length=6):
    characters = string.ascii_uppercase + string.digits
    return ''.join(random.choice(characters) for _ in range(length))


code = generate_code()
print(f"[시스템] 인증 코드를 생성했습니다: {code}")
user_input = input("[사용자 입력] ")
if user_input == code:
    print("[시스템] 인증 성공!")
else:
    print("[시스템] 인증 실패! 다시 시도하세요.")

