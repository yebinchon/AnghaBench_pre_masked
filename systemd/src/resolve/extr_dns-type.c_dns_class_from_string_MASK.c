
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int FUNC_1(const char *VAR_3) {

        if (!VAR_3)
                return VAR_2;

        if (FUNC_0(VAR_3, "IN"))
                return VAR_1;
        else if (FUNC_0(VAR_3, "ANY"))
                return VAR_0;

        return VAR_2;
}
