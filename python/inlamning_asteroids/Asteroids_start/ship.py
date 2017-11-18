from point import Point
from polygon import Polygon

class Ship( Polygon ):
	def __init__(self):

		super().__init__(x=0, y=0, rotation=0)

		self.points = [ Point(0,0), Point(-10,10), Point(15,0), Point(-10,-10) ]
