s="hloo sourav saini and how are you"
print(s)
print(len(s))#>>>>>>>>>
print(s[0:9])#..>>>> output >>> "hloo sour"
print(s[:])#..>>>> output >>> " hloo sourav saini and how are you "
print(s[0:len(s):2])#>>>>> output >>>" ho orvsiiadhwaeyu "
print(s[::2])#>>>>> output >>>" ho orvsiiadhwaeyu "
print(s[::-1])# .>>> output >>>> "uoy era woh dna inias varuos oolh"

#>>>>>>>>>>>>>> string funvtion ex <<<<<<<<<<<<<<
print(s.count("s"))
print(s.find("saini"))
print(s.lower())# >>>> string print in lower case ex " hloo sourav saini and how are you "
print(s.upper())# >>>> string print in upper case ex  " HLOO SOURAV SAINI AND HOW ARE YOU "
print(s.replace("saini","sourav")) # >>>>> saini is replace by sourav
print(s.capitalize())#>>>> first letter of string capilalize 
print(s.endswith("you"))#>>>>>>>> find string end with you or not , than print true ,else false
print(s.endswith("are"))#>>>>>>>> find string end with you or not , than print true ,else false
