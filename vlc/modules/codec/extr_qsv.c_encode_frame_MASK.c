
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_18__ ;
typedef struct TYPE_22__ TYPE_13__ ;


struct TYPE_26__ {scalar_t__ date; } ;
typedef TYPE_2__ picture_t ;
typedef scalar_t__ mfxStatus ;
typedef int mfxFrameSurface1 ;
struct TYPE_27__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ encoder_t ;
struct TYPE_24__ {int BufferSizeInKB; } ;
struct TYPE_25__ {TYPE_1__ mfx; } ;
struct TYPE_28__ {TYPE_20__ params; int session; int busy_warn_counter; scalar_t__ offset_pts; } ;
typedef TYPE_4__ encoder_sys_t ;
struct TYPE_22__ {int Data; int MaxLength; } ;
struct TYPE_29__ {TYPE_18__* block; void* syncp; TYPE_13__ bs; } ;
typedef TYPE_5__ async_task_t ;
struct TYPE_30__ {int surface; } ;
struct TYPE_23__ {int p_buffer; int i_buffer; } ;
typedef TYPE_6__ QSVFrame ;


 scalar_t__ FUNC_0 (int ,int ,int *,TYPE_13__*,void*) ;
 int FUNC_1 (int ,TYPE_20__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_18__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_18__*) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_13__*,int ,int) ;
 int FUNC_7 (TYPE_3__*,char*,...) ;
 int FUNC_8 (TYPE_3__*,char*,...) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_2__*,TYPE_6__**) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static async_task_t *FUNC_13(encoder_t *VAR_7, picture_t *VAR_8)
{
    encoder_sys_t *VAR_9 = VAR_7->p_sys;
    mfxStatus VAR_10 = VAR_0;
    QSVFrame *VAR_11 = ((void*)0);
    mfxFrameSurface1 *VAR_12 = ((void*)0);
    async_task_t *VAR_13 = FUNC_4(1, sizeof(*VAR_13));
    if (FUNC_11(VAR_13 == ((void*)0)))
        goto done;

    if (VAR_8) {



        if (!VAR_9->offset_pts)
            VAR_9->offset_pts = VAR_8->date;

        if (FUNC_10(VAR_7, VAR_8, &VAR_11) != VAR_6)
        {
            FUNC_9(VAR_7, "Unable to find an unlocked surface in the pool");
            goto done;
        }
    }

    if (!(VAR_13->syncp = FUNC_4(1, sizeof(*VAR_13->syncp)))) {
        FUNC_8(VAR_7, "Unable to allocate syncpoint for encoder output");
        goto done;
    }


    if (!(VAR_13->block = FUNC_2(VAR_9->params.mfx.BufferSizeInKB * 1000))) {
        FUNC_8(VAR_7, "Unable to allocate block for encoder output");
        goto done;
    }
    FUNC_6(&VAR_13->bs, 0, sizeof(VAR_13->bs));
    VAR_13->bs.MaxLength = VAR_13->block->i_buffer;
    VAR_13->bs.Data = VAR_13->block->p_buffer;

    if (VAR_11) {
        VAR_12 = &VAR_11->surface;
    }

    for (;;) {
        VAR_10 = FUNC_0(VAR_9->session, 0, VAR_12, &VAR_13->bs, VAR_13->syncp);
        if (VAR_10 != VAR_3 && VAR_10 != VAR_4)
            break;
        if (VAR_9->busy_warn_counter++ % 16 == 0)
            FUNC_7(VAR_7, "Device is busy, let's wait and retry %d", VAR_10);
        if (VAR_10 == VAR_3)
            FUNC_12(VAR_5);
    }



    if (VAR_10 == VAR_1)
        if (VAR_8)
            FUNC_7(VAR_7, "Encoder feeding phase, more data is needed.");
        else
            FUNC_7(VAR_7, "Encoder is empty");
    else if (VAR_10 < VAR_2) {
        FUNC_8(VAR_7, "Encoder not ready or error (%d), trying a reset...", VAR_10);
        FUNC_1(VAR_9->session, &VAR_9->params);
    }

done:
    if (VAR_10 < VAR_2 || (VAR_13 != ((void*)0) && !VAR_13->syncp)) {
        if (VAR_13->block != ((void*)0))
            FUNC_3(VAR_13->block);
        FUNC_5(VAR_13);
        VAR_13 = ((void*)0);
    }
    return VAR_13;
}
