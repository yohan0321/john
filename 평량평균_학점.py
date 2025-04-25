N = int(input())

total_credits = 0     
total_weighted_score = 0.0  

for _ in range(N):
    name, credit, grade = input().split()
    credit = int(credit)
    grade = float(grade)

    total_credits += credit
    total_weighted_score += credit * grade

weighted_gpa = total_weighted_score / total_credits if total_credits else 0.0

print(f"평량평균: {weighted_gpa:.2f}")


i
