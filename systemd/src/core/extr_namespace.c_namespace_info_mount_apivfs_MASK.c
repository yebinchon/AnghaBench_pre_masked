
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protect_kernel_tunables; scalar_t__ protect_control_groups; scalar_t__ mount_apivfs; } ;
typedef TYPE_1__ NamespaceInfo ;


 int FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static bool FUNC_1(const NamespaceInfo *VAR_0) {
        FUNC_0(VAR_0);







        return VAR_0->mount_apivfs ||
                VAR_0->protect_control_groups ||
                VAR_0->protect_kernel_tunables;
}
