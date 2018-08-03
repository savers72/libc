#include "_towcase.h"
#include <ctype.h>

wint_t towlower(wint_t wc)
{
	return (wint_t)(wc < 128 ? tolower((int)wc) : __towcase((wchar_t)wc, 1));
}
