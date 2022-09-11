
form abc import ABC, abstractmethod
    
class base(ABC):
    @abstractmethod
    def area(self):
        return 0

class dravie(base):
    b=23
    d=34
    def area(self):
         return self.b*self.d   
    