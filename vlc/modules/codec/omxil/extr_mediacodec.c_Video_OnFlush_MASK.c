
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_8__ {scalar_t__ b_direct_rendering; } ;
struct TYPE_7__ {int timestamp_fifo; } ;
struct TYPE_10__ {TYPE_2__ api; TYPE_1__ video; } ;
typedef TYPE_4__ decoder_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(decoder_t *VAR_0)
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_1(VAR_1->video.timestamp_fifo);



    if (VAR_1->api.b_direct_rendering)
        FUNC_0(VAR_0);
}
