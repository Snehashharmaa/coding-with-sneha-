#row :each line 
'''
with open("students.csv") as file:
    for line in file:
       row= line.rstrip().split(",")
       print(f"{row[0]} is in {row[1]}")

'''

#need not to throw the values in a list, instead 
# you can call them simultaneously into 2 variables
'''
with open("students.csv") as file:
    for line in file:
        name,house= line.rstrip().split(",")
        print(f"{name} is in {house}")
'''


#sorting ascen or desc 
'''
students=[]
with open("students.csv") as file:
    for line in file:
        name, house = line.rstrip().split(",")
        students.append(f"{name} is in {house}")
    for student in sorted(students):
        print(student)
'''
#sort it on owr own than relying on engilish
#python supports dict
students=[]
with open("students.csv") as file:
    for line in file:
        name,house=line.rstrip().split(",")
#creating at empty dictionary 
        '''
        student={}
        student["name"]=name
        student["house"]=house
        students.append(student)
        ''' #instead of 3 lines, there is one!
        student = {"name":name, "house":house}
        students.append(student)
        
for student in students:
    print(f"{student['name']} is in {student['house']}")

#each of the students is a dictionary,how to sort dict. inside a list
#each dict. has 2 keys name and house
#if we tell python to sort the files with specific keys 
#can reverse or not 
#KEYS IN STUDENTS2.PY
#BYEEE


