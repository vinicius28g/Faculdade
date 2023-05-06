x = 1
def sub1():
   global x
   x =3
   print(x)
   x +=1
   if x <10:
      print(x)
      x += 1
      sub2()
def sub2():
   print(x)
sub1()
print(x)
  


