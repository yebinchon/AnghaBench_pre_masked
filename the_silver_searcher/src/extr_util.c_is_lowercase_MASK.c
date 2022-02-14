
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

int FUNC_2(const char *VAR_2) {
    int VAR_3;
    for (VAR_3 = 0; VAR_2[VAR_3] != '\0'; VAR_3++) {
        if (!FUNC_0(VAR_2[VAR_3]) || FUNC_1(VAR_2[VAR_3])) {
            return VAR_0;
        }
    }
    return VAR_1;
}
