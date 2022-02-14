
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

const char *FUNC_1(const char *VAR_0) {
    if (FUNC_0(VAR_0) < 3) {
        return VAR_0;
    }
    if (VAR_0[0] == '.' && VAR_0[1] == '/') {
        return VAR_0 + 2;
    }
    if (VAR_0[0] == '/' && VAR_0[1] == '/') {
        return VAR_0 + 1;
    }
    return VAR_0;
}
