
'''from Graphics import Rectangle as r
import Graphics.Circle
from Graphics.Dgraphics import Cuboid,Sphere'''

from Graphics import *

print("Rectangle")
l=int(input('Length\n'))
b=int(input('Breadth\n'))
print("Area of Rectangle :",Rectangle.area(l,b))
print("Perimeter of Rectangle :",Rectangle.perimeter(l,b))

print("\nCircle")
r=int(input('Radius\n'))
print("Area of Circle :",c.area(r))
print("Perimeter of Circle :",c.perimeter(r))

print("\nCuboid")
l=int(input('Length\n'))
print("Area of Cuboid :",Cuboid.area(l))
print("Volume of Cuboid :",Cuboid.volume(l))

print("\nSphere")
r=int(input('Radius\n'))
print("Area of Sphere :",Sphere.area(r))
print("Volume of Sphere :",Sphere.volume(r))
