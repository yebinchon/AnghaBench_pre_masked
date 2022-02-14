
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ perpetual; } ;
struct TYPE_6__ {int proc_flags; } ;
typedef TYPE_1__ Mount ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(Mount *VAR_1) {
        FUNC_2(VAR_1);

        return FUNC_1(VAR_1)->perpetual || FUNC_0(VAR_1->proc_flags, VAR_0);
}
