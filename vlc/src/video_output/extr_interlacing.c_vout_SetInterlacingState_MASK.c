
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_7__ {int is_interlaced; scalar_t__ date; } ;
struct TYPE_8__ {TYPE_1__ interlacing; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*,char*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(vout_thread_t *VAR_0, bool VAR_1)
{

    const int VAR_2 = (!!VAR_1)
                                 - (!!VAR_0->p->interlacing.is_interlaced);
    if (VAR_2 == 1 ||
        (VAR_2 == -1 &&
        VAR_0->p->interlacing.date + FUNC_0(30) < FUNC_3()))
    {
        FUNC_1(VAR_0, "Detected %s video",
                 VAR_1 ? "interlaced" : "progressive");
        FUNC_2(VAR_0, "deinterlace-needed", VAR_1);
        VAR_0->p->interlacing.is_interlaced = VAR_1;
    }
    if (VAR_1)
        VAR_0->p->interlacing.date = FUNC_3();
}
