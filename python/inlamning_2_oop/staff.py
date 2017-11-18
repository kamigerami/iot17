from person import Person

class Staff(Person):
    """
    Arv från Person
    """
    def __init__(self, name, address, school, pay):
        super().__init__(name, address)
        self.school = school
        self.pay = pay
    def getSchool(self):
        return self.school
    def setSchool(self, school):
        self.school = school
    def getPay(self):
        return self.pay
    def setPay(self, pay):
        self.pay = pay
    def __str__(self):
        return str(Staff.__name__  + "[" + Person.__str__(self) \
                   + ",school=" + self.getSchool() + ",pay=" + "{:.2f}".format(self.getPay()) + "]" \
                   )