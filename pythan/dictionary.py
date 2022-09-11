#>>>>>>>>>>>>>>>>  Dictionary & Its Functions <<<<<<<<<<<<<<<<
d1={} # nonal Dictionary
d2={1:"hloo","a":23,"c":{1:"rrr",2:"chal"}} #<<<<<<<< Dictionary
print(d2,d1)
c=input()
print(d2[c])#<<<<<<<<<<<

# >>>>>>>>> for update Dictionary <<<<<<<<
d1.update({"nki":"awre"})
d1["good"]=" not good"
print(d1)

# for delete
del d2[1]
print(d2)

#>>>>>>>>four copy Dictionary
d3=d2.copy()
print(d3)
d3.update({1:"hloo"})
print(d3)

#>>>>>>>>>> keys and itmes <<<<<<
print(d1.keys(),"\n",d2.keys())
print(d1.items(),"\n",d2.items())