
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2) {
        int VAR_3;


        VAR_3 = FUNC_3(VAR_2, ((void*)0), VAR_0);
        if (VAR_3 > 0)
                return 0;


        if (VAR_3 == -VAR_1)
                return 0;

        if (VAR_3 < 0)
                return FUNC_2(VAR_3, "Cannot check if \"%s\" is a mount point: %m", VAR_2);


        VAR_3 = FUNC_0(VAR_2);
        if (VAR_3 < 0)
                return FUNC_2(VAR_3, "Cannot check if \"%s\" is empty: %m", VAR_2);
        if (VAR_3 > 0)
                return 0;

        FUNC_1("\"%s\" already populated, ignoring.", VAR_2);
        return 1;
}
