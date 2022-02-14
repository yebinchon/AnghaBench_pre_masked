
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char const*,char*,int *,int ,int *) ;

int FUNC_4(const char *VAR_2) {
        FUNC_0(VAR_2);

        if (FUNC_1(VAR_2) < 0)
                return -VAR_1;

        if (FUNC_3(VAR_2, "/", ((void*)0), VAR_0, ((void*)0)) < 0)
                return -VAR_1;

        if (FUNC_2(".") < 0)
                return -VAR_1;

        if (FUNC_1("/") < 0)
                return -VAR_1;

        return 0;
}
