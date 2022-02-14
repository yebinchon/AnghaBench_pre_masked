
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t* FUNC_0 (size_t const) ;
 scalar_t__ FUNC_1 (char const*,size_t const,size_t,int const) ;
 size_t FUNC_2 (char const*,size_t const,size_t,int const) ;

void FUNC_3(const char *VAR_0, const size_t VAR_1, size_t **VAR_2, const int VAR_3) {
    size_t VAR_4;
    size_t VAR_5;
    size_t *VAR_6 = FUNC_0(VAR_1 * sizeof(size_t));
    *VAR_2 = VAR_6;
    size_t VAR_7 = VAR_1;

    for (VAR_4 = VAR_7; VAR_4 > 0; VAR_4--) {
        if (FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3)) {
            VAR_7 = VAR_4;
        }
        VAR_6[VAR_4 - 1] = VAR_7 + (VAR_1 - VAR_4);
    }

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_3);
        if (VAR_0[VAR_4 - VAR_5] != VAR_0[VAR_1 - 1 - VAR_5]) {
            VAR_6[VAR_1 - 1 - VAR_5] = VAR_1 - 1 - VAR_4 + VAR_5;
        }
    }
}
