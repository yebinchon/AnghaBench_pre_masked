
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_6__ {int is_interlaced; } ;
struct TYPE_7__ {TYPE_1__ interlacing; } ;


 int FUNC_0 (TYPE_3__*,char*,int) ;

void FUNC_1(vout_thread_t *VAR_0)
{
    VAR_0->p->interlacing.is_interlaced = 0;
    FUNC_0(VAR_0, "deinterlace-needed", 0);
}
