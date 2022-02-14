
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fstype; int node; } ;
typedef TYPE_1__ DissectedPartition ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ,int,char*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(DissectedPartition *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_1);

        if (FUNC_3()) {
                FUNC_4("In initrd, ignoring the XBOOTLDR partition.");
                return 0;
        }

        VAR_2 = FUNC_2("/boot");
        if (VAR_2 < 0)
                return FUNC_5(VAR_2, "Failed to parse fstab: %m");
        if (VAR_2 > 0) {
                FUNC_4("/boot specified in fstab, ignoring XBOOTLDR partition.");
                return 0;
        }

        VAR_2 = FUNC_6("/boot");
        if (VAR_2 < 0)
                return VAR_2;
        if (VAR_2 > 0)
                return 0;

        return FUNC_0("boot",
                             VAR_1->node,
                             "/boot",
                             VAR_1->fstype,
                             1,
                             "umask=0077",
                             "Boot Loader Partition",
                             120 * VAR_0);
}
