
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MountEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char*,int ,char*,int,int *) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(const MountEntry *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_4);

        (void) FUNC_2(FUNC_4(VAR_4), 0755);

        VAR_5 = FUNC_5(FUNC_4(VAR_4), ((void*)0), 0);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Unable to determine whether /proc is already mounted: %m");
        if (VAR_5 > 0)
                return 0;


        if (FUNC_3("proc", FUNC_4(VAR_4), "proc", VAR_2|VAR_1|VAR_0, ((void*)0)) < 0)
                return FUNC_1(VAR_3, "Failed to mount %s: %m", FUNC_4(VAR_4));

        return 1;
}
