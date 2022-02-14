
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * current_server_address; TYPE_1__* current_server_name; } ;
struct TYPE_7__ {int string; } ;
typedef TYPE_1__ ServerName ;
typedef TYPE_2__ Manager ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(Manager *VAR_0, ServerName *VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->current_server_name == VAR_1)
                return;

        VAR_0->current_server_name = VAR_1;
        VAR_0->current_server_address = ((void*)0);

        FUNC_2(VAR_0);

        if (VAR_1)
                FUNC_1("Selected server %s.", VAR_1->string);
}
