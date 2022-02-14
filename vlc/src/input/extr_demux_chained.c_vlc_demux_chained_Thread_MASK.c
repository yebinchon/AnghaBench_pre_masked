
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {double position; scalar_t__ time; scalar_t__ length; } ;
struct TYPE_4__ {int lock; TYPE_1__ stats; int reader; int out; int name; } ;
typedef TYPE_2__ vlc_demux_chained_t ;
typedef int demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void *FUNC_11(void *VAR_5)
{
    vlc_demux_chained_t *VAR_6 = VAR_5;
    demux_t *VAR_7 = FUNC_5(FUNC_0(VAR_6->reader), VAR_6->name, VAR_6->reader,
                               VAR_6->out);
    if (VAR_7 == ((void*)0))
    {
        FUNC_9(VAR_6->reader);
        return ((void*)0);
    }



    FUNC_2(VAR_7, VAR_3);


    vlc_tick_t VAR_8 = 0;

    do
        if (FUNC_6(VAR_7, VAR_4) || FUNC_10() >= VAR_8)
        {
            double VAR_9;
            vlc_tick_t VAR_10;
            vlc_tick_t VAR_11;

            if (FUNC_2(VAR_7, VAR_1, &VAR_9))
                VAR_9 = 0.;
            if (FUNC_2(VAR_7, VAR_0, &VAR_10))
                VAR_10 = 0;
            if (FUNC_2(VAR_7, VAR_2, &VAR_11))
                VAR_11 = 0;

            FUNC_7(&VAR_6->lock);
            VAR_6->stats.position = VAR_9;
            VAR_6->stats.length = VAR_10;
            VAR_6->stats.time = VAR_11;
            FUNC_8(&VAR_6->lock);

            VAR_8 = FUNC_10() + FUNC_1(250);
        }
    while (FUNC_4(VAR_7) > 0);

    FUNC_3(VAR_7);
    return ((void*)0);
}
