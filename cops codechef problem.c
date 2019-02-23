for i = N-3; i ≥ 1; i--:
    if can_replace(S[i-3.. i], "CHEF"):
        replace(S[i-3..i], "CHEF")
for i = N-3; i ≥ 1; i--:
    if S[i] == '?':
        S[i] = 'A'
