int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
* add - adds two integers
* @a: first integer to add
* @b: second integer to add
* Return: sum
*/
int add(int a, int b) {
    return a + b;
}

/**
* sub - substract two integers
* @a: first integer to sub
* @b: second integer to sub
* Return: sub
*/
int sub(int a, int b) {
    return a - b;
}

/**
* add - find mul of two integers
* @a: first integer
* @b: second integer
* Return: mul
*/
int mul(int a, int b) {
    return a * b;
}

/**
* div - divid two integers
* @a: first integer
* @b: second integer
* Return: division
*/
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;
    }
}

/**
* mod - mod of two integers
* @a: first integer
* @b: second integer
* Return: mod
*/
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        return 0;
    }
}
