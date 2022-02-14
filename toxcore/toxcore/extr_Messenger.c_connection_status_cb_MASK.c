
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int last_connection_status; int core_connection_change_userdata; int (* core_connection_change ) (TYPE_1__*,unsigned int,int ) ;int onion_c; } ;
typedef TYPE_1__ Messenger ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(Messenger *VAR_0)
{
    unsigned int VAR_1 = FUNC_0(VAR_0->onion_c);

    if (VAR_1 != VAR_0->last_connection_status) {
        if (VAR_0->core_connection_change)
            (*VAR_0->core_connection_change)(VAR_0, VAR_1, VAR_0->core_connection_change_userdata);

        VAR_0->last_connection_status = VAR_1;
    }
}
