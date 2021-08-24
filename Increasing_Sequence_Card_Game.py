import random
def solve(J):
    n = int(input())
    x = [i+1 for i in range(n)]
    scores = []
    for i in range(n):
        ra = random.choice(x)
        if i==0:
            scores.append(ra)
        else:
            if(ra>scores[-1]):
                scores.append(ra)
        
        x.remove(ra)

    score = sum(scores)
    score /= len(scores)

    print("Case #"+str(J+1)+":",score)

def main():
    t = int(input())
    for i in range(t):
        solve(i)

main()
