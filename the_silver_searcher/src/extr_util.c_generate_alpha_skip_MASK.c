
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

void FUNC_2(const char *VAR_0, size_t VAR_1, size_t VAR_2[], const int VAR_3) {
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
        VAR_2[VAR_4] = VAR_1;
    }

    VAR_1--;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_3) {
            VAR_2[(unsigned char)VAR_0[VAR_4]] = VAR_1 - VAR_4;
        } else {
            VAR_2[(unsigned char)FUNC_0(VAR_0[VAR_4])] = VAR_1 - VAR_4;
            VAR_2[(unsigned char)FUNC_1(VAR_0[VAR_4])] = VAR_1 - VAR_4;
        }
    }
}
