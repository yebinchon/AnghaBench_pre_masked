
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* vlc_tick_t ;
struct TYPE_16__ {scalar_t__ i_channel; void* i_stop; void* i_start; TYPE_2__* p_region; } ;
typedef TYPE_1__ subpicture_t ;
struct TYPE_17__ {int * p_private; struct TYPE_17__* p_next; } ;
typedef TYPE_2__ subpicture_region_t ;
struct spu_channel {int rate; scalar_t__ clock; } ;
struct TYPE_18__ {TYPE_4__* p; } ;
typedef TYPE_3__ spu_t ;
struct TYPE_19__ {char* filter_chain_update; char* source_chain_update; int lock; int filter_chain_lock; int filter_chain; int source_chain_current; scalar_t__ vout; } ;
typedef TYPE_4__ spu_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 struct spu_channel* FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (TYPE_4__*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (struct spu_channel*,TYPE_1__*,void*,void*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (scalar_t__,void*,void**,int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 void* FUNC_17 () ;

void FUNC_18(spu_t *VAR_3, subpicture_t *VAR_4)
{
    spu_private_t *VAR_5 = VAR_3->p;


    FUNC_15(&VAR_5->lock);
    char *VAR_6 = VAR_5->filter_chain_update;
    VAR_5->filter_chain_update = ((void*)0);
    FUNC_16(&VAR_5->lock);

    bool VAR_7 = 0;

    FUNC_15(&VAR_5->filter_chain_lock);
    if (VAR_6) {
        if (*VAR_6) {
            if (VAR_5->vout)
                FUNC_3(VAR_5->filter_chain,
                                     VAR_1,
                                     VAR_5->vout);
            FUNC_2(VAR_5->filter_chain);

            FUNC_1(VAR_3->p->filter_chain, VAR_6);
            if (VAR_5->vout)
                FUNC_3(VAR_5->filter_chain,
                                     VAR_0,
                                     VAR_5->vout);
        }
        else
            FUNC_2(VAR_5->filter_chain);




        VAR_7 = FUNC_4(VAR_3->p->filter_chain);
    }
    FUNC_16(&VAR_5->filter_chain_lock);

    if (VAR_7) {



        if (VAR_6 && *VAR_6) {
            FUNC_15(&VAR_5->lock);
            if (!VAR_5->source_chain_update || !*VAR_5->source_chain_update) {
                FUNC_6(VAR_5->source_chain_update);
                VAR_5->source_chain_update = VAR_6;
                VAR_5->source_chain_current = FUNC_12(VAR_6);
                VAR_6 = ((void*)0);
            }
            FUNC_16(&VAR_5->lock);
        }
    }

    FUNC_6(VAR_6);


    FUNC_15(&VAR_5->filter_chain_lock);
    VAR_4 = FUNC_5(VAR_3->p->filter_chain, VAR_4);
    FUNC_16(&VAR_5->filter_chain_lock);
    if (!VAR_4 || VAR_4->i_channel < 0)
    {
        if (VAR_4)
            FUNC_13(VAR_4);
        return;
    }


    if (VAR_4->i_channel == VAR_2)
        FUNC_8(VAR_3, VAR_2);


    for (subpicture_region_t *VAR_8 = VAR_4->p_region; VAR_8 != ((void*)0); VAR_8 = VAR_8->p_next)
        FUNC_0(VAR_8->p_private == ((void*)0));


    FUNC_15(&VAR_5->lock);
    struct spu_channel *VAR_9 = FUNC_9(VAR_3, VAR_4->i_channel);



    vlc_tick_t VAR_10 = VAR_4->i_start;
    vlc_tick_t VAR_11 = VAR_4->i_stop;
    if (VAR_9->clock)
    {
        vlc_tick_t VAR_12 = FUNC_17();
        vlc_tick_t VAR_13[2] = { VAR_10, VAR_11 };
        FUNC_14(VAR_9->clock, VAR_12,
                                       VAR_13, 2, VAR_9->rate);
        VAR_4->i_start = VAR_13[0];
        VAR_4->i_stop = VAR_13[1];
    }

    if (FUNC_11(VAR_9, VAR_4, VAR_10, VAR_11))
    {
        FUNC_16(&VAR_5->lock);
        FUNC_7(VAR_3, "subpicture heap full");
        FUNC_13(VAR_4);
        return;
    }
    FUNC_10(VAR_5, VAR_4);
    FUNC_16(&VAR_5->lock);
}
