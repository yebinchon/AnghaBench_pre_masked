
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int reset_accounting; } ;
struct TYPE_6__ {int exec_command; int result; } ;
typedef TYPE_1__ Swap ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(Swap *VAR_2) {
        FUNC_1(VAR_2);

        VAR_2->result = VAR_0;
        FUNC_2(VAR_2->exec_command, VAR_1);
        FUNC_0(VAR_2)->reset_accounting = 1;
}
