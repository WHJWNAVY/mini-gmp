# [mini-gmp](src/lib/README)

> mini-gmp is a small implementation of a subset of GMP's mpn and mpz interfaces.

## help

```bash
$ xmake clean
$ xmake build
$ xmake install -o install
$ cd install/bin/
$ ./mini-gmp
Usage: ./mini-gmp <num1> <num2>
$ ./mini-gmp 1234567890 1234567890
1234567890 x 1234567890 = 1524157875019052100
$ ./mini-gmp 1524157875019052100 1524157875019052100
1524157875019052100 x 1524157875019052100 = 2323057227982592441500937982514410000
```