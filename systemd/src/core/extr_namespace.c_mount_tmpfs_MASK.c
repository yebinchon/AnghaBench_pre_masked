
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ MountEntry ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char*,int ,char*,int ,int ) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(const MountEntry *VAR_1) {
        FUNC_0(VAR_1);



        (void) FUNC_2(FUNC_5(VAR_1), 0755);
        (void) FUNC_6(FUNC_5(VAR_1), 0);

        if (FUNC_3("tmpfs", FUNC_5(VAR_1), "tmpfs", VAR_1->flags, FUNC_4(VAR_1)) < 0)
                return FUNC_1(VAR_0, "Failed to mount %s: %m", FUNC_5(VAR_1));

        return 1;
}
