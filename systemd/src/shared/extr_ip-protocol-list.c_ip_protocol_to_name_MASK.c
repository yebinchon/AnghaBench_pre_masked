
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const**) ;
 char const** VAR_0 ;

const char *FUNC_1(int VAR_1) {

        if (VAR_1 < 0)
                return ((void*)0);

        if ((size_t) VAR_1 >= FUNC_0(VAR_0))
                return ((void*)0);

        return VAR_0[VAR_1];
}
