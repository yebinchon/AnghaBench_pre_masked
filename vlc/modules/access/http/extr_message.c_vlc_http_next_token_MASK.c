
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;

const char *FUNC_3(const char *VAR_0)
{
    VAR_0 += FUNC_0(VAR_0, ",\"");
    if (!*VAR_0)
        return ((void*)0);

    VAR_0 += FUNC_2(VAR_0);
    return VAR_0 + FUNC_1(VAR_0, "\t ,");
}
