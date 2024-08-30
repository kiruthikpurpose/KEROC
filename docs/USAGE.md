## Syntax Overview

KEROC syntax is designed to be simple and intuitive, similar to Python. Here are some examples of basic constructs:

### Variables

Variables are declared and assigned using the `=` operator:

```python
x = 10
y = 20
```

### Functions

Functions are defined using the `def` keyword:

```python
def add(a, b):
    return a + b
```

### Control Flow

Control flow statements include `if`, `else`, and loops:

```python
if x > y:
    print("x is greater")
else:
    print("y is greater")

for i in range(5):
    print(i)
```

## Advanced Features

- **Classes and Objects**: Support for object-oriented programming with classes and inheritance.

  ```python
  class Person:
      def __init__(self, name, age):
          self.name = name
          self.age = age

      def greet(self):
          print(f"Hello, my name is {self.name} and I am {self.age} years old.")

  p = Person("Alice", 30)
  p.greet()
  ```

- **Error Handling**: Use `try` and `except` blocks to handle exceptions:

  ```python
  try:
      result = 10 / 0
  except ZeroDivisionError:
      print("Cannot divide by zero")
  ```

- **Libraries**: KEROC includes standard libraries for common tasks. You can import libraries using:

  ```python
  import math
  print(math.sqrt(16))
  ```

## Examples

Here are some example programs written in KEROC:

### Example 1: Hello World

```python
print("Hello, World!")
```

### Example 2: Fibonacci Sequence

```python
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

print(fibonacci(10))
```

## Resources

- **Official Documentation**: Refer to the design and usage documents for detailed information.
- **Community**: Join discussions and get support from the KEROC community.
```

This `USAGE.md` file provides a comprehensive guide on how to use KEROC, including syntax, advanced features, and examples.