def checkAna(s,a):
    for i in range(len(s)):
        if s[i] == a[i]:
            return False
    return True


def solve(J):
    s = input()
    char = {}
    for i in s:
        if i in char.keys():
            char[i] += 1
        else:
            char[i] = 1
    l = []
    for i in range(len(s)):
        l.append(s[i:]+s[0:i])

    for i in l:
        b = checkAna(s,i)
        if(b == False):
            l.remove(i)
    



    if(len(char.keys())<=2 ):
        print("Case #"+str(J+1)+":","IMPOSSIBLE")
    else:
        print("Case #"+str(J+1)+":",l[0])

def main():
    t = int(input())
    for i in range(t):
        solve(i)

main()