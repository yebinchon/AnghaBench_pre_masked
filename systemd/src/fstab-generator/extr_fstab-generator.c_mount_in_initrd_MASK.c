
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntent {int mnt_dir; int mnt_opts; } ;


 int FUNC_0 (struct mntent*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static bool FUNC_3(struct mntent *VAR_0) {
        FUNC_0(VAR_0);

        return FUNC_1(VAR_0->mnt_opts, "x-initrd.mount\0") ||
               FUNC_2(VAR_0->mnt_dir, "/usr");
}
