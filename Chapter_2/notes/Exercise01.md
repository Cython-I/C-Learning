## Signed, Unsigned, and why the heck is (2^bits) - 1 so important!?

So you have proabably encounted the number (2^16) - 1 which is (65535) once or twice in your computing journey. This number has some special meaning. It is the maximum value in which two bytes (16 bits) can be contain! Don't belive me?

Well look at this:
```
0 1 2 3 4 5 6 7 8 9 A B C D E F
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
```
That is 16 bits filling each of the 16 slots, 0xFFFF in hex or 65535 in decimal. This also is the limit for any type that has 16 bits! Such as unsigned short int (16 bits on my machine). Even more common is
(2^32) - 1 (that big 4 numeber that you see before it rolls into negatives in video games). (2^32) - 1 would be the limit for unsigned int (if int is 32 bits)!

Now this is great and all but what about signed???

So with signed, we are in a predicament, as we want to store negative AND positive values. So we split them in half (almost).

Let's use 16 bits for example so the (2^16) - 1 which is (65535) number.

So this is a bit of math, but may have forgotten exponents: (2^16-1) would result in half of (2^16). This is because we are using 2 as our base, - 1 on the exponent would "cut in half" or divide 2 and +1 the exponent would "double" it.

Here is a quick example:

```
2^(3+1) == 2x2x2x2  == 16
2^3     == 2x2x2    == 8
2^(3-1) == 2x2      == 4
```

So we use - (2^16-1) to get the lower half of are range which is -32768 . So the upper is just (2^16-1) which is 32768 right??? well almost! We need to subtract one from the final result (think about 0 which the negatives do not need to consider) this gives us an upper bound of 32767.

Thus the signed bound for an signed short int (assuming 16bits)  is: -32768 to 32767.

Now with this knowledge in hand you should be able to easily calculate the values for all data types!

Oh one more thing:

***sizeof(data type)*** returns the bytes of the type, and recall 1 byte = 8 bits

Ex: sizeof(int) would return 4 on my machine, meaning int has 4 bytes or 32 bits.

Thus the formula:

```
For n bits:
    The Unsigned range: 0 to 2^(n) - 1 
    The Signed range: -2^(n-1) to 2^(n-1) - 1
```
### I still am a bit lost on signed 

Imagine a number line
```
0 1 2 3 4 5 6 7
```
Are limit is 0 to 7, we can store up 8 total values here with no issue, no using this same line, lets say we wanted to store negative numbers. Well if we split the line in half, we give half the line to the positive, and half to the negative, but this cuts down the range.
```
-4 -3 -2 -1 0 1 2 3 
```

This illustrates that -1 on the signed max too! Same amount of space for both, but we need to - 1 for 0
the new range is now -4 to 3 or (-4) to (4-1)


### Additional links:
[Printf Types](https://en.wikipedia.org/wiki/Printf#Type_field) has knowledge on what avaliable type fields you can use with printf. These are briefly touched in Chapter 1 and Chapter 2, but this will provide you with the ones needed for 2-1

[Avaliable Data types in C ](https://en.wikipedia.org/wiki/C_data_types) just all the types if you want to double check that you missed one, there is not a lot, but doesn't hurt to check after you try

[Exponents](https://www.mathsisfun.com/algebra/exponent-laws.html) in case you would like a refresher, I tried to explain it but if I did so poorly, I hope this helps