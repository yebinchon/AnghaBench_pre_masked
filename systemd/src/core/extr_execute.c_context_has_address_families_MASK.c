
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int address_families; scalar_t__ address_families_whitelist; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const ExecContext *VAR_0) {
        FUNC_0(VAR_0);

        return VAR_0->address_families_whitelist ||
                !FUNC_1(VAR_0->address_families);
}
