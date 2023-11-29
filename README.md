
# Ft_printf

This is the second project of the **`42Cursus`**. <br />
The goal of this project is pretty straightforward. recoding `printf()` (not the whole function).


 <tbody>
  <tr>
            <th>Format Specifier</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">%</td>
            <td>% followed by another % character writes % to the screen.</td>
        </tr>
        <tr>
            <td align="center">c</td>
            <td>writes a single character.</td>
        </tr>
        <tr>
            <td align="center">s</td>
            <td>writes a character string.</td>
        </tr>
        <tr>
            <td align="center">p</td>
            <td>writes an implementation-defined character sequence defining a pointer address.</td>
        </tr>
        <tr>
            <td align="center">d or i</td>
            <td>writes a signed integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">u</td>
            <td>writes an unsigned integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">x or X</td>
            <td>writes an unsigned integer to hexadecimal representation.</td>
        </tr>
    </tbody>

# What are variadic functions

In order to have this project done you must learn a new `C Concept` which is **`Variadic Functions`**.

in `C Programming Language` function takes a known number of params to deal with, but what if we want to pass an unknown number of params and let the function handle all of them? it's cool right :)?

_with `Variadic Functions` this problem would be fixed._

Here is how to declare a `Variadic Function` that takes a variable number of params:

```c
void variadic_function(char *s, ...)
```

let's break this example down so we can see what this weird function does.

first of all, this function returns nothing, the first parameter is a string but the second one `...` is something to declare to the function that we are about to accept a variable number of params.

learn more about `Variadic Functions` via [`Variadic Functions in c`](https://www.geeksforgeeks.org/variadic-functions-in-c/#:~:text=Variadic%20functions%20are%20functions%20that,of%20arguments%20can%20be%20passed.)

---

# Things you will learn in this project

> Variadic Functions

> Number System Conversion

> Implementation of your own `printf()` function

> Makefile

> How to use `printf()` properly

> Pointers
