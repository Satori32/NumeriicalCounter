#include <stdio.h>
#include <stdint.h>

struct NumericalCounter {
	intmax_t N = 0;
};

NumericalCounter ConstructNumericalCounter(intmax_t N) {
	NumericalCounter N;
	N.N = N;

	return N;
}
bool ToZero(NumericalCounter& In) {
	In.N = 0;
	return true;
}
bool ToOne(NumericalCounter& In) {
	In.N = 1;
	return true;
}
bool ToNega(NumericalCounter& In) {
	In.N = -In.N;
	return true;
}
bool Inc(NumericalCounter& In) {
	In.N++;
	return true;
}
bool Dec(NumericalCounter& In) {
	In.N--;
	return true;
}
bool IsNumber(NumericalCounter& In, intmax_t X) {
	return In.N == X;
}
intmax_t Now(NumericalCounter& In) {
	return In.N;
}
bool SetPlus(NumericalCounter& In, intmax_t N) {
	In.N += N;
	return true;
}
bool SetMinus(NumericalCounter& In, intmax_t N) {
	In.N -= N;
	return true;
}
bool SetMulti(NumericalCounter& In, intmax_t N) {
	In.N *= N;
	return true;
}