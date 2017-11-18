
class Person():
    """
    Basklass där Student och Staff ärver ifrån
    """
    def __init__(self, name, address):
      self.name = name
      self.address = address

    def getName(self):
        return self.name
    def getAddress(self):
        return self.address
    def setAddress(self, address):
        self.address = address
    def __str__(self):
        return str(Person.__name__ + "[name=" + self.getName() + ",address=" + self.getAddress() + "]" \
                   )
