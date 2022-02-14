
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void) {
        int VAR_4;

        if ((VAR_1 & VAR_0) == 0)
                return 0;

        VAR_4 = FUNC_1(VAR_2 ?: VAR_3);
        if (VAR_4 < 0)
                return FUNC_0(VAR_4, "Failed to set hostname: %m");

        return 0;
}
