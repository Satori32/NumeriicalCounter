#pragma once
#include <stdio.h>
#include <stdint.h>

struct NumericalCounter {
	intmax_t N = 0;
};

NumericalCounter ConstructNumericalCounter(intmax_t N);
bool ToZero(NumericalCounter& In);
bool ToOne(NumericalCounter& In);
bool ToNega(NumericalCounter& In);
bool Inc(NumericalCounter& In);
bool Dec(NumericalCounter& In);
bool IsNumber(NumericalCounter& In, const intmax_t& X);
intmax_t Now(NumericalCounter& In);
bool SetPlus(NumericalCounter& In, intmax_t N);
bool SetMinus(NumericalCounter& In, intmax_t N);
bool SetMulti(NumericalCounter& In, intmax_t N);
bool Set(NumericalCounter& In, intmax_t N);
intmax_t Get(NumericalCounter& In, intmax_t N);