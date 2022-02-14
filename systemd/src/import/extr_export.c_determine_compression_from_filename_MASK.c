
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_6) {

        if (VAR_5 != VAR_3)
                return;

        if (!VAR_6) {
                VAR_5 = VAR_2;
                return;
        }

        if (FUNC_0(VAR_6, ".xz"))
                VAR_5 = VAR_4;
        else if (FUNC_0(VAR_6, ".gz"))
                VAR_5 = VAR_1;
        else if (FUNC_0(VAR_6, ".bz2"))
                VAR_5 = VAR_0;
        else
                VAR_5 = VAR_2;
}
