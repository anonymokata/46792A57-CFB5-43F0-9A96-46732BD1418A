#include <stdlib.h>
#include "convert-rpn.h"

int isValidOperator(char subject)
{
    switch (subject) {
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
        return 1;
    default:
        return 0;
    }
}

int isValidOperand(char subject)
{
    if (93 < subject && subject < 123)
        return 1;
    return 0;
}

RpnErrorType infixToReversePolish(char *in, char *out, int length)
{
    if (in == NULL || out == NULL || length < 1) {
        return RPN_INVALID_ARGS;
    }
    return RPN_SUCCESS;
}
