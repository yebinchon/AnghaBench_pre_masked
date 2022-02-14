
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
typedef int vlc_blender_t ;
typedef int subpicture_t ;
typedef int picture_t ;
typedef int filter_chain_t ;
struct TYPE_17__ {int i_chroma; } ;
struct TYPE_16__ {TYPE_4__ video; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_14__ {TYPE_10__* spu_blend; } ;
struct TYPE_13__ {TYPE_3__ fmt_out; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (int *,TYPE_3__*,TYPE_3__*) ;
 int * FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static picture_t *FUNC_13(vout_thread_t *VAR_1, picture_t *VAR_2,
                                     subpicture_t *VAR_3)
{





    FUNC_1(VAR_1->p->spu_blend);

    filter_chain_t *VAR_4 = FUNC_6(VAR_1, 0, ((void*)0));
    if (!VAR_4)
        return ((void*)0);

    es_format_t VAR_5 = VAR_1->p->spu_blend->fmt_out;
    es_format_t VAR_6 = VAR_5;
    VAR_6.video.i_chroma = VAR_0;
    FUNC_12(&VAR_6.video);

    FUNC_7(VAR_4, &VAR_5, &VAR_6);

    if (FUNC_4(VAR_4, &VAR_6) != 0)
    {
        FUNC_5(VAR_4);
        return ((void*)0);
    }

    FUNC_10(VAR_2);
    VAR_2 = FUNC_8(VAR_4, VAR_2);
    FUNC_5(VAR_4);

    if (VAR_2)
    {
        vlc_blender_t *VAR_7 = FUNC_3(FUNC_0(VAR_1), &VAR_6.video);
        if (VAR_7)
        {
            bool VAR_8 = FUNC_9(VAR_2, VAR_7, VAR_3) > 0;
            FUNC_2(VAR_7);
            if (VAR_8)
                return VAR_2;
        }
        FUNC_11(VAR_2);
    }
    return ((void*)0);
}
