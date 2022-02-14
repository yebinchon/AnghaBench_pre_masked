
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;
typedef int JsonFormatFlags ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int *,int *,int,char const*) ;
 int FUNC_4 (int *,int *,int,int) ;
 int * VAR_6 ;

void FUNC_5(JsonVariant *VAR_7, JsonFormatFlags VAR_8, FILE *VAR_9, const char *VAR_10) {
        if (!VAR_7)
                return;

        if (!VAR_9)
                VAR_9 = VAR_6;

        FUNC_4(VAR_9, VAR_7, VAR_8, 0);

        if (((VAR_8 & (VAR_1|VAR_0)) == VAR_1) && FUNC_0())
                VAR_8 |= VAR_0;

        if (VAR_8 & VAR_5)
                FUNC_2("data: ", VAR_9);
        if (VAR_8 & VAR_4)
                FUNC_1('\x1e', VAR_9);

        FUNC_3(VAR_9, VAR_7, VAR_8, VAR_10);

        if (VAR_8 & (VAR_3|VAR_4|VAR_5|VAR_2))
                FUNC_1('\n', VAR_9);
        if (VAR_8 & VAR_5)
                FUNC_1('\n', VAR_9);
}
