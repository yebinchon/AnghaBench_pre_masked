
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,char*,char*,char const*) ;
 int * FUNC_1 (int,char const*,int) ;

__attribute__((used)) static DIR* FUNC_2(int VAR_5, const char *VAR_6) {
        DIR *VAR_7;

        VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_3|VAR_2);
        if (VAR_7)
                return VAR_7;

        FUNC_0(VAR_4, "Cannot open %sdirectory \"%s\": %m", VAR_5 == VAR_0 ? "" : "sub", VAR_6);
        if (VAR_4 != VAR_1)
                return ((void*)0);

        VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_3);
        if (!VAR_7)
                FUNC_0(VAR_4, "Cannot open %sdirectory \"%s\": %m", VAR_5 == VAR_0 ? "" : "sub", VAR_6);

        return VAR_7;
}
