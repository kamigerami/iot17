#!/usr/bin/env python

class Mother:
    def __init__(self, first, last , number_of_children):
       self.first = first
       self.last = last
       self.number_of_children = number_of_children
       self.full_name = first + " " + last


class Child(Mother):
    def __init__(self, first, last, number_of_children, middle):
        # old style
        Mother.__init__(self, first, last, number_of_children)
        # new style py3
        # super().__init__(first, last, number_of_children)
        self.middle = middle

mom = Mother("tara", "gerami", 3)


child1 = Child("kami", "gerami", 0, "kamjar")


print(child1.first + " " + child1.middle + " " + child1.last)

