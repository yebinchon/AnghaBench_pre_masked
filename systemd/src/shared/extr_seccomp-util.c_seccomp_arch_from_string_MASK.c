
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_18, uint32_t *VAR_19) {
        if (!VAR_18)
                return -VAR_0;

        FUNC_0(VAR_19);

        if (FUNC_1(VAR_18, "native"))
                *VAR_19 = VAR_9;
        else if (FUNC_1(VAR_18, "x86"))
                *VAR_19 = VAR_16;
        else if (FUNC_1(VAR_18, "x86-64"))
                *VAR_19 = VAR_17;
        else if (FUNC_1(VAR_18, "x32"))
                *VAR_19 = VAR_15;
        else if (FUNC_1(VAR_18, "arm"))
                *VAR_19 = VAR_2;
        else if (FUNC_1(VAR_18, "arm64"))
                *VAR_19 = VAR_1;
        else if (FUNC_1(VAR_18, "mips"))
                *VAR_19 = VAR_3;
        else if (FUNC_1(VAR_18, "mips64"))
                *VAR_19 = VAR_4;
        else if (FUNC_1(VAR_18, "mips64-n32"))
                *VAR_19 = VAR_5;
        else if (FUNC_1(VAR_18, "mips-le"))
                *VAR_19 = VAR_6;
        else if (FUNC_1(VAR_18, "mips64-le"))
                *VAR_19 = VAR_7;
        else if (FUNC_1(VAR_18, "mips64-le-n32"))
                *VAR_19 = VAR_8;
        else if (FUNC_1(VAR_18, "ppc"))
                *VAR_19 = VAR_10;
        else if (FUNC_1(VAR_18, "ppc64"))
                *VAR_19 = VAR_11;
        else if (FUNC_1(VAR_18, "ppc64-le"))
                *VAR_19 = VAR_12;
        else if (FUNC_1(VAR_18, "s390"))
                *VAR_19 = VAR_13;
        else if (FUNC_1(VAR_18, "s390x"))
                *VAR_19 = VAR_14;
        else
                return -VAR_0;

        return 0;
}
