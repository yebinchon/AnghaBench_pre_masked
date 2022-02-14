
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queue_mutex; int j_buf; int decoder; int encoder; } ;
typedef TYPE_1__ ACSession ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(ACSession *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_4(VAR_0->encoder);
    FUNC_3(VAR_0->decoder);
    FUNC_2(VAR_0->j_buf);

    FUNC_5(VAR_0->queue_mutex);

    FUNC_0("Terminated audio handler: %p", VAR_0);
    FUNC_1(VAR_0);
}
