#>>>>>>>>>>>>>>>>>>>> Dictionary & Its Functions <<<<<<<<<<<<

d={'a':1,'b':4,'c':5,"sourav":452}
print(d)
#>>>>>>>>>> keys and itmes <<<<<<
print(d.keys())
print(d.items())

d1={"hlo":12,"chalo":908,"by":{"good":125,"night":589}}
print(d1)
print(d1.items())

# >>>>>>>>> for update Dictionary <<<<<<<<
d.update({"varun":1996})
print(d)

# >>>>>>>for delete
del d['c']
print(d)

#>>>>>>>>>>>> copy functio <<<<<<<<
d3=d1.copy()