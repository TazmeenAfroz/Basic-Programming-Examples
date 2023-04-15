import geometry.geometry

radius = 10

circle_area = geometry.geometry.AreaOfCircle(radius)
print("Area of circle with radius", radius, "is", circle_area)

base = 7
height = 3

triangle_area = geometry.geometry.AreaOfTriangle(base,height)
print("Area of triangle with base", base, "and height", height, "is", triangle_area)

length = 9
width = 2

rectangle_area = geometry.geometry.AreaOfRectangle(length,width)
print("Area of rectangle with length", length, "and width", width, "is", rectangle_area)

side = 5

square_area = geometry.geometry.AreaOfSquare(side)
print("Area of square with side", side, "is", square_area)

