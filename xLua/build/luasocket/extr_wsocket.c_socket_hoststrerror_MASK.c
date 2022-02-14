
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (int) ;
 char const* FUNC_1 (int) ;

const char *FUNC_2(int VAR_0) {
    if (VAR_0 <= 0) return FUNC_0(VAR_0);
    switch (VAR_0) {
        case 128: return "host not found";
        default: return FUNC_1(VAR_0);
    }
}
