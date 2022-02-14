
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MountEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char*,int ,int *,int,int *) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(const MountEntry *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);




        (void) FUNC_2(FUNC_4(VAR_3), 0755);

        VAR_4 = FUNC_5(FUNC_4(VAR_3), ((void*)0), 0);
        if (VAR_4 < 0)
                return FUNC_1(VAR_4, "Unable to determine whether /dev is already mounted: %m");
        if (VAR_4 > 0)
                return 0;

        if (FUNC_3("/dev", FUNC_4(VAR_3), ((void*)0), VAR_0|VAR_1, ((void*)0)) < 0)
                return FUNC_1(VAR_2, "Failed to bind mount %s: %m", FUNC_4(VAR_3));

        return 1;
}
