c = ['c','b','s']
def func(x):
	s = ""
	var_a = 0
	var_b = len(x)
	while var_a < var_b:
		s = x[var_a] + s
		var_a = var_a + 1
	return s
func(c)	
