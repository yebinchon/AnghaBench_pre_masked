
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_4(void) {
        FUNC_2(FUNC_3("/no/such/file", ((void*)0), 0) == -VAR_1);
        FUNC_2(FUNC_3("/no/such/file", ((void*)0), VAR_0) == 0);

        if (FUNC_1("/etc/fstab", VAR_2) >= 0)
                FUNC_2(FUNC_3("/etc/fstab", FUNC_0("/etc/fstab", "/etc/fstab"), 0) == 0);
}
