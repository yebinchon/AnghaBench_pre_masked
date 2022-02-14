
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef int vlc_object_t ;
struct spu_channel {int dummy; } ;
struct TYPE_14__ {TYPE_3__* p; } ;
typedef TYPE_2__ spu_t ;
struct TYPE_13__ {int thread; scalar_t__* chroma_list; int * p_processed; int fmtsrc; int fmtdst; int vector; int output_cond; int cond; int lock; } ;
struct TYPE_15__ {int last_sort_date; TYPE_1__ prerender; int * vout; void* scale_yuvp; void* scale; int text; void* filter_chain; void* source_chain; int textlock; int filter_chain_lock; int * filter_chain_update; int * source_chain_update; void* secondary_alignment; void* secondary_margin; void* margin; int lock; int channels; } ;
typedef TYPE_3__ spu_private_t ;


 size_t VAR_0 ;
 void* FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_5 (struct spu_channel*,size_t,int ,int *) ;
 void* FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *,int,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,struct spu_channel) ;
 int FUNC_15 (int *,size_t) ;

spu_t *FUNC_16(vlc_object_t *VAR_8, vout_thread_t *VAR_9)
{
    spu_t *VAR_10 = FUNC_10(VAR_8,
                                   sizeof(spu_t) + sizeof(spu_private_t),
                                   "subpicture");
    if (!VAR_10)
        return ((void*)0);


    spu_private_t *VAR_11 = VAR_10->p = (spu_private_t*)&VAR_10[1];

    FUNC_13(&VAR_11->channels);
    if (!FUNC_15(&VAR_11->channels, VAR_6))
    {
        FUNC_12(VAR_10);
        return ((void*)0);
    }
    for (size_t VAR_12 = 0; VAR_12 < VAR_6; ++VAR_12)
    {
        struct spu_channel VAR_13;
        FUNC_5(&VAR_13, VAR_12, VAR_5, ((void*)0));
        FUNC_14(&VAR_11->channels, VAR_13);
    }


    FUNC_11(&VAR_11->lock);

    VAR_11->margin = FUNC_6(VAR_10, "sub-margin");
    VAR_11->secondary_margin = FUNC_6(VAR_10, "secondary-sub-margin");

    VAR_11->secondary_alignment = FUNC_6(VAR_10,
                                                  "secondary-sub-alignment");

    VAR_11->source_chain_update = ((void*)0);
    VAR_11->filter_chain_update = ((void*)0);
    FUNC_11(&VAR_11->filter_chain_lock);
    VAR_11->source_chain = FUNC_3(VAR_10, "sub source");
    VAR_11->filter_chain = FUNC_3(VAR_10, "sub filter");


    VAR_11->text = FUNC_1(VAR_10);
    FUNC_11(&VAR_11->textlock);



    VAR_11->scale = FUNC_0(FUNC_2(VAR_10),
                                             VAR_2, VAR_1, 1);



    VAR_11->scale_yuvp = FUNC_0(FUNC_2(VAR_10),
                                                  VAR_3, VAR_2, 0);


    if (!VAR_11->source_chain || !VAR_11->filter_chain || !VAR_11->text || !VAR_11->scale
     || !VAR_11->scale_yuvp)
    {
        VAR_11->vout = ((void*)0);
        FUNC_4(VAR_10);
        FUNC_12(VAR_10);
        return ((void*)0);
    }

    VAR_11->last_sort_date = -1;
    VAR_11->vout = VAR_9;

    FUNC_11(&VAR_11->prerender.lock);
    FUNC_9(&VAR_11->prerender.cond);
    FUNC_9(&VAR_11->prerender.output_cond);
    FUNC_13(&VAR_11->prerender.vector);
    FUNC_7(&VAR_11->prerender.fmtdst, 0);
    FUNC_7(&VAR_11->prerender.fmtsrc, 0);
    VAR_11->prerender.p_processed = ((void*)0);
    VAR_11->prerender.chroma_list[0] = 0;
    VAR_11->prerender.chroma_list[VAR_0] = 0;
    if(FUNC_8(&VAR_11->prerender.thread, VAR_7, VAR_10, VAR_4))
    {
        FUNC_4(VAR_10);
        FUNC_12(VAR_10);
        VAR_10 = ((void*)0);
    }

    return VAR_10;
}
