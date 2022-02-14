
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(int VAR_1, char *VAR_2[]) {
        int VAR_3;

        FUNC_3(VAR_0);

        VAR_3 = FUNC_2(FUNC_0("group", "passwd", "hosts"));
        if (VAR_3 < 0)
                return FUNC_1(VAR_3, "Failed to flush NSCD cache");

        return 0;
}
