#    NAME: SHIVAM KUMAR                         REGISTRATION NUMBER: 12205470
#    ROLL NUMBER: 08                            PROJECT : CURRENCY CONVERTOR(08)
                     
#                  SUBMITTED TO: DR.HARWANT SINGH ARRI



print(" Heii guys!! using this project you can change indian rupees into another currency:\n")

times=int(input(" How many times do you want to play :\n"))

for i in range(1,times+1):

    user=int(input('''    enter [1] for (POUNDS)
    enter[2] for (EUROS) and vice versa,
    enter [3] for (US DOLLAR) and vice versa,
    enter [4] for (CANADIAN) and vice versa, 
    enter [5] for (DOLLAR) and vice versa, 
    enter [6] for (CHINESE YUAN) and vice versa, 
    enter[7] for (RUSSIAN'S RUBEL) and vice versa,\n'''))

    if(user==L):
        a=int(input(" enter your amount which you want to convert in POUNDS or RUPEES:\n"))
        print(" Now your rupees in pound currency is",a*0.010,"POUNDS\n")
        print(" Now your POUNDS in indian currency is",a*76,"rupees\n")


    elif(user==2):
        a=int(input("  enter your amount  which you want to convert in EUROS or RUPEES:\n"))
        print(" Now your rupees in euros currency is",a*0.012,"EUROS\n")
        print(" Now your EUROS in indian currency is",a*76,"rupees\n")


    elif(user==3):
        a=int(input(" enter your amount  which you want to convert in US DOLLARS or RUPEES:\n"))
        print(" Now your rupees in us dollar currency is",a*82.29,"US DOLLARS\n")
        print(" Now your US DOLLARS in indian currency is",a*76,"rupees\n")

    elif(user==4):
        a=int(input(" enter your amount  which you want to convert in CANADIAN DOLLARS or or RUPEES:\n"))
        print(" Now your rupees in canadian currency is",a*60.29,"CANADIAN DOLLAR\n")
        print(" Now your CANADIAN DOLLAR in indian currency is",a*76,"rupees\n")

    elif(user==5):
        a=int(input(" enter your amount  which you want to convert in DOLLARS or or RUPEES\n"))
        print(" Now your rupees in dollars currency is",a*82.29," DOLLARS\n")
        print(" Now your DOLLARS in indian currency is",a*76,"rupees\n")

    elif(user==6):
        a=int(input(" enter your amount which you want to convert in YUAN or or RUPEES:\n"))
        print(" Now your rupees in chinese currency is",a*11.35,"YUAN\n")
        print(" Now your YUAN in indian currency is",a*76,"rupees\n")
        

    elif(user==7):
        a=int(input(" enter your amount  which you want to convert in RUBEL or RUPEES:\n"))
        print(" Now your rupees in rusian is",a*1.34,"RUBEL\n")
        print(" Now your RUBEL in indian currency is",a*76,"rupees\n")


    else:
        print(" please enter valid input...Thanks:\n")
        break

    a=int(input("do you want to convert rupees into another currency again...enter [1] for yes and [2] for no\n"))
    
    if(a!=1):
        print(" thanks for using my currency convertor... ")
        break
    
