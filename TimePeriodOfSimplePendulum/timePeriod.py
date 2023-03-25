import pendulum

l = float(input("Enter the length of the pendulum in meters: "))


t = pendulum.TimePeriod(l)

print("The time period of the pendulum is",t,"seconds")
