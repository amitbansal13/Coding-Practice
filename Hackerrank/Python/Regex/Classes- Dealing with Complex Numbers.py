

class Complex(object):
    def __init__(self, real=0, imaginary=0):
        self.r = real
        self.i = imaginary
        
    def __add__(self, no):
        return Complex(self.r+no.r, self.i+no.i)
        
    def __sub__(self, no):
        return Complex(self.r-no.r, self.i-no.i)

    def __mul__(self, no):
        return Complex(self.r*no.r - self.i*no.i, self.r*no.i + self.i*no.r)

    def __truediv__(self, no):
        a = no.r**2 + no.i**2
        c = self.__mul__(Complex(no.r, -no.i))
        return Complex(c.r/a, c.i/a)

    def mod(self):
        return Complex(math.sqrt(self.r**2 + self.i**2))

    def __str__(self):
        if self.i == 0:
            result = "%.2f+0.00i" % (self.r)
        elif self.r == 0:
            if self.i >= 0:
                result = "0.00+%.2fi" % (self.i)
            else:
                result = "0.00-%.2fi" % (abs(self.i))
        elif self.i > 0:
            result = "%.2f+%.2fi" % (self.r, self.i)
        else:
            result = "%.2f-%.2fi" % (self.r, abs(self.i))
        return result

