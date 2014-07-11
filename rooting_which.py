# rooting_which.py
# Program that determines who I will be rooting for during the World Cup Final
# Autor: Guillermo K. Rojas

def rooting_for():
  raining_sunday = False 
  germany_in_white = True
  
  rooting_germany = None #boolean that determines if I'm rooting for Germany
  rooting_argentina = None #boolean that determines if I'm rooting for Argentina
  
  if raining_sunday == True:
    rooting_germany = False
    rooting_argentina = True
  
  if germany_in_white = True:
    rooting_germany = True
    rooting_argentina = False 
    
  print "Am I rooting for Germany?" + str(rooting_germany)
  print "Am I rooting for Argentina?" + str(rooting_argentina)
  
rooting_for()
    
