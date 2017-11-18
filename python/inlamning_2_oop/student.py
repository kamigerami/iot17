from person import Person


class Student(Person):
    """
    Arv från Person
    """
    def __init__(self, name, address, program, year, fee):
        super().__init__(name, address)

        self.program = program
        self.year = year
        self.fee = fee

    def getProgram(self):
        return self.program
    def setProgram(self, program):
        self.program = program
    def getYear(self):
        return self.year
    def setYear(self, year):
        self.year = year
    def getFee(self):
        return self.fee
    def setFee(self, fee):
        self.fee = fee
    def __str__(self):
        return str(Student.__name__  + "[" + Person.__str__(self) \
                   + ",program=" + self.getProgram() + ",year=" + str(self.getYear()) \
                   + ",fee=" + "{:.2f}".format(self.getFee()) + "]" \
                   )
