d = {110:"abc", 101:"xyz", 105:"pqr", 106:"bcd"}
d[101] = "wxy"
print(len(d))  			# Output: 4
print(d) 				# Output: {110: 'abc', 101: 'wxy', 105: 'pqr', 106: 'bcd'}
print(d.pop(105))  		# Output: pqr
print(d)  				# Output: {110: 'abc', 101: 'wxy', 106: 'bcd'}
del d[106]
print(d)  				# Output: {110: 'abc', 101: 'wxy'}
d[108] = "cde"
print(d.popitem())  	# Output: (108, 'cde')