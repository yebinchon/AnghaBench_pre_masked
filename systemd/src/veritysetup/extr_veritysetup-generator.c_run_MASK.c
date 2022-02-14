
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, const char *VAR_5, const char *VAR_6) {
        int VAR_7;

        FUNC_0(VAR_1 = VAR_4);

        VAR_7 = FUNC_4(VAR_3, ((void*)0), VAR_0);
        if (VAR_7 < 0)
                return FUNC_3(VAR_7, "Failed to parse kernel command line: %m");




        if (!VAR_2)
                return 0;

        VAR_7 = FUNC_2();
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_1();
}
