
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int position; scalar_t__ time; scalar_t__ length; } ;
struct TYPE_8__ {int lock; int * writer; int reader; int thread; int name; int * out; TYPE_1__ stats; } ;
typedef TYPE_2__ vlc_demux_chained_t ;
typedef int es_out_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *) ;

vlc_demux_chained_t *FUNC_11(vlc_object_t *VAR_2,
                                           const char *VAR_3, es_out_t *VAR_4)
{
    vlc_demux_chained_t *VAR_5 = FUNC_1(sizeof (*VAR_5) + FUNC_3(VAR_3) + 1);
    if (FUNC_4(VAR_5 == ((void*)0)))
        return ((void*)0);

    VAR_5->writer = FUNC_10(VAR_2, &VAR_5->reader);
    if (VAR_5->writer == ((void*)0))
    {
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    VAR_5->stats.position = 0.;
    VAR_5->stats.length = 0;
    VAR_5->stats.time = 0;
    VAR_5->out = VAR_4;
    FUNC_2(VAR_5->name, VAR_3);

    FUNC_7(&VAR_5->lock);

    if (FUNC_5(&VAR_5->thread, VAR_1, VAR_5,
                  VAR_0))
    {
        FUNC_8(VAR_5->reader);
        FUNC_9(VAR_5->writer);
        FUNC_6(&VAR_5->lock);
        FUNC_0(VAR_5);
        VAR_5 = ((void*)0);
    }
    return VAR_5;
}
