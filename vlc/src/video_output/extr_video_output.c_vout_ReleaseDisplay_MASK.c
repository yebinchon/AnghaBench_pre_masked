
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_8__ {int configuration; int src_fmt; int chain_static; int chain_interactive; } ;
struct TYPE_10__ {int original; int * clock; int (* mouse_event ) (int *,int ) ;scalar_t__ spu; int mouse_opaque; int * display_pool; int * decoder_fifo; TYPE_1__ filter; int display_lock; int * display; int * spu_blend; } ;
typedef TYPE_3__ vout_thread_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_13(vout_thread_t *VAR_1)
{
    vout_thread_sys_t *VAR_2 = VAR_1->p;

    FUNC_1(VAR_2->display != ((void*)0));

    if (VAR_2->spu_blend != ((void*)0))
        FUNC_2(VAR_2->spu_blend);


    if (VAR_2->display_pool != ((void*)0))
        FUNC_12(VAR_1, 1, VAR_0);

    FUNC_9(&VAR_2->display_lock);
    FUNC_11(VAR_1, VAR_2->display);
    VAR_2->display = ((void*)0);
    FUNC_10(&VAR_2->display_lock);


    FUNC_0(VAR_1);
    FUNC_3(VAR_2->filter.chain_interactive);
    FUNC_3(VAR_2->filter.chain_static);
    FUNC_8(&VAR_2->filter.src_fmt);
    FUNC_4(VAR_2->filter.configuration);

    if (VAR_2->decoder_fifo != ((void*)0))
    {
        FUNC_5(VAR_2->decoder_fifo);
        VAR_2->decoder_fifo = ((void*)0);
    }
    FUNC_1(VAR_2->display_pool == ((void*)0));

    if (VAR_2->mouse_event)
        VAR_2->mouse_event(((void*)0), VAR_2->mouse_opaque);

    if (VAR_2->spu)
        FUNC_6(VAR_2->spu);
    VAR_2->mouse_event = ((void*)0);
    VAR_2->clock = ((void*)0);
    FUNC_8(&VAR_2->original);
}
