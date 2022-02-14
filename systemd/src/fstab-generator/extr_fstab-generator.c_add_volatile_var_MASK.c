
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*,int *,char*,char*,int ,int ,int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(void) {

        if (VAR_3 != VAR_1)
                return 0;



        return FUNC_0(VAR_2,
                         "tmpfs",
                         "/var",
                         ((void*)0),
                         "tmpfs",
                         "mode=0755",
                         0,
                         0,
                         VAR_0,
                         "/proc/cmdline");
}
