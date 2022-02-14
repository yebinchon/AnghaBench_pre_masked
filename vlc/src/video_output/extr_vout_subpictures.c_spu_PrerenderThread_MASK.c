
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct spu_prerender_ctx_s {scalar_t__* chroma_list; int fmtdst; int fmtsrc; TYPE_6__** pp_processed; int * cleanuplock; } ;
struct TYPE_8__ {TYPE_3__* p; } ;
typedef TYPE_2__ spu_t ;
struct TYPE_10__ {size_t size; TYPE_6__** data; } ;
struct TYPE_7__ {int output_cond; TYPE_6__* p_processed; int lock; int fmtsrc; int fmtdst; int * chroma_list; TYPE_4__ vector; int cond; } ;
struct TYPE_9__ {TYPE_1__ prerender; } ;
typedef TYPE_3__ spu_private_t ;
struct TYPE_11__ {scalar_t__ i_start; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__**,int *,size_t) ;
 int FUNC_1 (TYPE_2__*,TYPE_6__*,int *,int *,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct spu_prerender_ctx_s*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_4__*,size_t) ;

__attribute__((used)) static void * FUNC_14(void *VAR_2)
{
    spu_t *VAR_3 = VAR_2;
    spu_private_t *VAR_4 = VAR_3->p;

    struct spu_prerender_ctx_s VAR_5;
    VAR_5.cleanuplock = &VAR_4->prerender.lock;
    VAR_5.chroma_list[VAR_0] = 0;
    FUNC_4(&VAR_5.fmtsrc, 0);
    FUNC_4(&VAR_5.fmtdst, 0);
    VAR_5.pp_processed = &VAR_4->prerender.p_processed;

    FUNC_9(&VAR_4->prerender.lock);
    for( ;; )
    {
        FUNC_6(VAR_1, &VAR_5);
        while(!VAR_4->prerender.vector.size || !VAR_4->prerender.chroma_list[0])
            FUNC_8(&VAR_4->prerender.cond, &VAR_4->prerender.lock);

        size_t VAR_6 = 0;
        VAR_4->prerender.p_processed = VAR_4->prerender.vector.data[0];
        for(size_t VAR_7=1; VAR_7<VAR_4->prerender.vector.size; VAR_7++)
        {
             if(VAR_4->prerender.p_processed->i_start > VAR_4->prerender.vector.data[VAR_7]->i_start)
             {
                 VAR_4->prerender.p_processed = VAR_4->prerender.vector.data[VAR_7];
                 VAR_6 = VAR_7;
             }
        }
        FUNC_13(&VAR_4->prerender.vector, VAR_6);
        FUNC_0(&VAR_5.chroma_list, VAR_4->prerender.chroma_list, VAR_0);
        FUNC_2(&VAR_5.fmtdst);
        FUNC_2(&VAR_5.fmtsrc);
        FUNC_3(&VAR_5.fmtdst, &VAR_4->prerender.fmtdst);
        FUNC_3(&VAR_5.fmtsrc, &VAR_4->prerender.fmtsrc);

        FUNC_10(&VAR_4->prerender.lock);
        FUNC_5();

        int VAR_8 = FUNC_12();
        FUNC_1(VAR_3, VAR_4->prerender.p_processed,
                          &VAR_5.fmtsrc, &VAR_5.fmtdst, VAR_5.chroma_list);
        FUNC_11(VAR_8);

        FUNC_9(&VAR_4->prerender.lock);
        VAR_4->prerender.p_processed = ((void*)0);
        FUNC_7(&VAR_4->prerender.output_cond);
    }

    return ((void*)0);
}
