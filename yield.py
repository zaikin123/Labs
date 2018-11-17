def fibonacci_generator():
	a = b = 1
	while True:
		yield a
		a, b = b, a + b

fib = fibonacci_generator()

k = 0
for i in fib:
	k += 1
	if i > 100:
		break 
	else:
		print('Generated: ', i, ' - ', k)
