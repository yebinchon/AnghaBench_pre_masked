
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct AVCodecContext {int pix_fmt; TYPE_1__* opaque; } ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int lock; int * p_va; int b_direct_rendering; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int * opaque; int ** buf; scalar_t__* linesize; int ** data; } ;
typedef TYPE_3__ AVFrame ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct AVCodecContext*,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct AVCodecContext*,int ,int ,int *) ;
 int FUNC_3 (struct AVCodecContext*,TYPE_3__*) ;
 int FUNC_4 (struct AVCodecContext*,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct AVCodecContext *VAR_1, AVFrame *VAR_2, int VAR_3)
{
    decoder_t *VAR_4 = VAR_1->opaque;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;

    for (unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
        VAR_2->data[VAR_6] = ((void*)0);
        VAR_2->linesize[VAR_6] = 0;
        VAR_2->buf[VAR_6] = ((void*)0);
    }
    VAR_2->opaque = ((void*)0);

    FUNC_5(&VAR_5->lock);
    if (VAR_5->p_va == ((void*)0))
    {
        if (!VAR_5->b_direct_rendering)
        {
            FUNC_6(&VAR_5->lock);
            return FUNC_0(VAR_1, VAR_2, VAR_3);
        }




        if (FUNC_2(VAR_4, VAR_1, VAR_1->pix_fmt, VAR_1->pix_fmt, ((void*)0)) ||
            FUNC_1(VAR_4, ((void*)0)))
        {
            FUNC_6(&VAR_5->lock);
            return -1;
        }
    }

    if (VAR_5->p_va != ((void*)0))
    {
        int VAR_7 = FUNC_4(VAR_1, VAR_2);
        FUNC_6(&VAR_5->lock);
        return VAR_7;
    }



    int VAR_8 = FUNC_3(VAR_1, VAR_2);
    FUNC_6(&VAR_5->lock);
    if (VAR_8)
        VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3);
    return VAR_8;
}
