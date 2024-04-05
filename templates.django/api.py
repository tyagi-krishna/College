from nsetools import Nse
nse = Nse()

q = codes = nse.get_stock_codes()
for key in q.keys(): 
    print(key)

x = q['SYMBOL']
print(x)