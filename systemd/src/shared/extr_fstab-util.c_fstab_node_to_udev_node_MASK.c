
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char*) ;

char *FUNC_4(const char *VAR_0) {
        FUNC_0(VAR_0);

        if (FUNC_1(VAR_0, "LABEL="))
                return FUNC_3(VAR_0+6, "label");

        if (FUNC_1(VAR_0, "UUID="))
                return FUNC_3(VAR_0+5, "uuid");

        if (FUNC_1(VAR_0, "PARTUUID="))
                return FUNC_3(VAR_0+9, "partuuid");

        if (FUNC_1(VAR_0, "PARTLABEL="))
                return FUNC_3(VAR_0+10, "partlabel");

        return FUNC_2(VAR_0);
}
