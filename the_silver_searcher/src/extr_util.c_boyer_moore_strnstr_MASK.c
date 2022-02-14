
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (size_t const,size_t const) ;
 char const FUNC_1 (char const) ;

const char *FUNC_2(const char *VAR_0, const char *VAR_1, const size_t VAR_2, const size_t VAR_3,
                                const size_t VAR_4[], const size_t *VAR_5, const int VAR_6) {
    ssize_t VAR_7;
    size_t VAR_8 = VAR_3 - 1;

    while (VAR_8 < VAR_2) {
        for (VAR_7 = VAR_3 - 1; VAR_7 >= 0 && (VAR_6 ? FUNC_1(VAR_0[VAR_8]) : VAR_0[VAR_8]) == VAR_1[VAR_7]; VAR_8--, VAR_7--) {
        }
        if (VAR_7 < 0) {
            return VAR_0 + VAR_8 + 1;
        }
        VAR_8 += FUNC_0(VAR_4[(unsigned char)VAR_0[VAR_8]], VAR_5[VAR_7]);
    }

    return ((void*)0);
}
