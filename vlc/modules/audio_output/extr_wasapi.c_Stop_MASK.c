
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ aout_stream_t ;
struct TYPE_7__ {int client; int started_state; } ;
typedef TYPE_2__ aout_stream_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(aout_stream_t *VAR_1)
{
    aout_stream_sys_t *VAR_2 = VAR_1->sys;

    FUNC_2(VAR_1);

    if (FUNC_3(&VAR_2->started_state) == VAR_0)
        FUNC_1(VAR_2->client);

    FUNC_0(VAR_2->client);

    FUNC_4(VAR_2);
}
