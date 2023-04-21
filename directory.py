import os
import shutil
''' To get the current working directory '''
print(os.getcwd())

''' List all the files in the current working directory '''

print(os.listdir())

''' To create a new directory '''

os.mkdir("New_Directory")

''' To rename a directory '''

os.rename("New_Directory","New_Directory1")

os.mkdir("PYTHON")
''' To remove an empty file in the current working directory '''
os.remove("a.txt")

''' To remove an empty directory in the current working directory '''
os.rmdir("New_Directory1")

''' To change the current working directory '''
os.chdir("C:\\Users\\Desktop\\Python\\Python")

''' To remove a non-empty directory in the current working directory '''
shutil.rmtree("PYTHON")


