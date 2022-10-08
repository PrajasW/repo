# class is written in PascalCase 
# EmployeName --> PascalCase
# isTrueOrFalse --> camelCase


class Number:
    def sum(self):
        return self.a + self.b

num = Number()
num.a = 42
num.b = 51
print(num.sum())