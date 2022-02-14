
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

size_t FUNC_1(const char *VAR_0, const size_t VAR_1, const size_t VAR_2, const int VAR_3) {
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (VAR_3) {
            if (VAR_0[VAR_2 - VAR_4] != VAR_0[VAR_1 - VAR_4 - 1]) {
                break;
            }
        } else {
            if (FUNC_0(VAR_0[VAR_2 - VAR_4]) != FUNC_0(VAR_0[VAR_1 - VAR_4 - 1])) {
                break;
            }
        }
    }

    return VAR_4;
}
