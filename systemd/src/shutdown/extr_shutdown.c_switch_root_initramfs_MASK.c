
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int *,int ,int *) ;
 int FUNC_2 (char*,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(void) {
        if (FUNC_1("/run/initramfs", "/run/initramfs", ((void*)0), VAR_0, ((void*)0)) < 0)
                return FUNC_0(VAR_2, "Failed to mount bind /run/initramfs on /run/initramfs: %m");

        if (FUNC_1(((void*)0), "/run/initramfs", ((void*)0), VAR_1, ((void*)0)) < 0)
                return FUNC_0(VAR_2, "Failed to make /run/initramfs private mount: %m");





        return FUNC_2("/run/initramfs", "/oldroot", 0, VAR_0);
}
