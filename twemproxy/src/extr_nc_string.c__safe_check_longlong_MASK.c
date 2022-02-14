
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;



__attribute__((used)) static const char *
FUNC_0(const char *VAR_0, int32_t * VAR_1)
{
    *VAR_1 = 0;
    if (*VAR_0 == 'l') {
        VAR_0++;
        if (*VAR_0 != 'l') {
            *VAR_1 = (sizeof(long) == sizeof(int64_t));
        } else {
            VAR_0++;
            *VAR_1 = 1;
        }
    }
    return VAR_0;
}
