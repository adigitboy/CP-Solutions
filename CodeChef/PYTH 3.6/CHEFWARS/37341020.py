for t in range (int(input())):
	h,p=map(int,input().split())
	if h>p:
		if h-p>=p:
			print(0)
		else:
			print(1)
	else:
		print(1)