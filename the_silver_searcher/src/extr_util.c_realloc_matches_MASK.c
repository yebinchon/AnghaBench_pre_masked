
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int match_t ;


 int * FUNC_0 (int *,size_t) ;

void FUNC_1(match_t **VAR_0, size_t *VAR_1, size_t VAR_2) {
    if (VAR_2 < *VAR_1) {
        return;
    }

    *VAR_1 = *VAR_0 ? *VAR_1 * 2 : 100;
    *VAR_0 = FUNC_0(*VAR_0, *VAR_1 * sizeof(match_t));
}
