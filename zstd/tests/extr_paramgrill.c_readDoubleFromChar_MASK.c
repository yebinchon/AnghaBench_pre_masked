
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(const char** VAR_0)
{
    double VAR_1 = 0, VAR_2 = 10;
    while ((**VAR_0 >='0') && (**VAR_0 <='9')) {
        VAR_1 *= 10, VAR_1 += **VAR_0 - '0', (*VAR_0)++ ;
    }
    if(**VAR_0!='.') {
        return VAR_1;
    }
    (*VAR_0)++;
    while ((**VAR_0 >='0') && (**VAR_0 <='9')) {
        VAR_1 += (double)(**VAR_0 - '0') / VAR_2, VAR_2 *= 10, (*VAR_0)++ ;
    }
    return VAR_1;
}
