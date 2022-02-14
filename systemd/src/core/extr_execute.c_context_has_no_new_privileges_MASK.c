
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ protect_hostname; scalar_t__ lock_personality; int syscall_archs; scalar_t__ private_devices; scalar_t__ protect_kernel_logs; scalar_t__ protect_kernel_modules; scalar_t__ protect_kernel_tunables; scalar_t__ restrict_suid_sgid; scalar_t__ restrict_realtime; scalar_t__ memory_deny_write_execute; scalar_t__ no_new_privileges; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(const ExecContext *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->no_new_privileges)
                return 1;

        if (FUNC_4(VAR_0))
                return 0;


        return FUNC_1(VAR_1) ||
                VAR_1->memory_deny_write_execute ||
                VAR_1->restrict_realtime ||
                VAR_1->restrict_suid_sgid ||
                FUNC_3(VAR_1) ||
                VAR_1->protect_kernel_tunables ||
                VAR_1->protect_kernel_modules ||
                VAR_1->protect_kernel_logs ||
                VAR_1->private_devices ||
                FUNC_2(VAR_1) ||
                !FUNC_5(VAR_1->syscall_archs) ||
                VAR_1->lock_personality ||
                VAR_1->protect_hostname;
}
