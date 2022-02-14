
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p; } ;
typedef TYPE_2__ spu_t ;
struct TYPE_8__ {int fmtsrc; int fmtdst; int vector; int output_cond; int cond; int lock; } ;
struct TYPE_11__ {size_t size; int * data; } ;
struct TYPE_10__ {TYPE_1__ prerender; int lock; TYPE_4__ channels; int filter_chain_update; int source_chain_update; int filter_chain_lock; int filter_chain_current; int filter_chain; TYPE_2__* vout; int source_chain_current; int source_chain; scalar_t__ scale; scalar_t__ scale_yuvp; int textlock; scalar_t__ text; } ;
typedef TYPE_3__ spu_private_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_10(spu_t *VAR_3)
{
    spu_private_t *VAR_4 = VAR_3->p;

    if (VAR_4->text)
        FUNC_0(VAR_4->text);
    FUNC_7(&VAR_4->textlock);

    if (VAR_4->scale_yuvp)
        FUNC_0(VAR_4->scale_yuvp);

    if (VAR_4->scale)
        FUNC_0(VAR_4->scale);

    FUNC_2(VAR_4->source_chain, VAR_1, VAR_3);
    if (VAR_4->vout)
        FUNC_2(VAR_4->source_chain,
                             VAR_2, VAR_4->vout);
    FUNC_1(VAR_4->source_chain);
    FUNC_3(VAR_4->source_chain_current);
    if (VAR_4->vout)
        FUNC_2(VAR_4->filter_chain,
                             VAR_0, VAR_4->vout);
    FUNC_1(VAR_4->filter_chain);
    FUNC_3(VAR_4->filter_chain_current);
    FUNC_7(&VAR_4->filter_chain_lock);
    FUNC_3(VAR_4->source_chain_update);
    FUNC_3(VAR_4->filter_chain_update);


    for (size_t VAR_5 = 0; VAR_5 < VAR_4->channels.size; ++VAR_5)
        FUNC_4(VAR_4, &VAR_4->channels.data[VAR_5]);

    FUNC_9(&VAR_4->channels);

    FUNC_7(&VAR_4->lock);

    FUNC_7(&VAR_4->prerender.lock);
    FUNC_6(&VAR_4->prerender.cond);
    FUNC_6(&VAR_4->prerender.output_cond);
    FUNC_8(&VAR_4->prerender.vector);
    FUNC_5(&VAR_4->prerender.fmtdst);
    FUNC_5(&VAR_4->prerender.fmtsrc);
}
