
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const char *VAR_3, const char *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_0 = VAR_3);

        VAR_5 = FUNC_1();
        if (VAR_5 <= 0)
                return VAR_5;


        VAR_5 = FUNC_3(VAR_1, ((void*)0), 0);
        if (VAR_5 < 0)
                FUNC_2(VAR_5, "Failed to parse kernel command line, ignoring: %m");

        return 0;
}
