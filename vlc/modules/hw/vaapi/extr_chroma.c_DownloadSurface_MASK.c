
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {int i_height; int i_width; } ;
struct TYPE_25__ {TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_26__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_27__ {int derive_failed; int image_fallback_failed; int cache; } ;
typedef TYPE_4__ filter_sys_t ;
typedef int VASurfaceID ;
typedef scalar_t__ VAImageID ;
struct TYPE_28__ {scalar_t__ image_id; int buf; } ;
typedef TYPE_5__ VAImage ;
typedef int VADisplay ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*,int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*,void*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,TYPE_5__*) ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ,int ,void**) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static picture_t *
FUNC_15(filter_t *VAR_1, picture_t *VAR_2)
{
    filter_sys_t *const VAR_3 = VAR_1->p_sys;
    VADisplay VAR_4 = FUNC_12(VAR_2);
    VAImage VAR_5;
    void * VAR_6;

    picture_t *VAR_7 = FUNC_3(VAR_1);
    if (!VAR_7)
    {
        FUNC_4(VAR_1, "filter_NewPicture failed");
        goto ret;
    }

    VAImageID VAR_8 = VAR_0;
    VASurfaceID VAR_9 = FUNC_13(VAR_2);
    if (FUNC_8(VAR_4, VAR_9))
        goto error;

    if (VAR_3->derive_failed ||
        FUNC_9(FUNC_2(VAR_1), VAR_4, VAR_9, &VAR_5))
    {
        if (VAR_3->image_fallback_failed)
            goto error;

        VAR_3->derive_failed = 1;

        VAImage VAR_10;
        if (FUNC_0(VAR_1, VAR_2, VAR_4, &VAR_10))
        {
            VAR_3->image_fallback_failed = 1;
            goto error;
        }
        VAR_8 = VAR_10.image_id;

        if (FUNC_7(VAR_4, VAR_9, 0, 0, VAR_2->format.i_width,
                       VAR_2->format.i_height, VAR_8))
        {
            VAR_3->image_fallback_failed = 1;
            goto error;
        }
        VAR_5 = VAR_10;
    }

    if (FUNC_11(FUNC_2(VAR_1), VAR_4, VAR_5.buf, &VAR_6))
        goto error;

    FUNC_1(VAR_7, &VAR_5, VAR_6, &VAR_3->cache);

    FUNC_14(FUNC_2(VAR_1), VAR_4, VAR_5.buf);
    FUNC_10(FUNC_2(VAR_1), VAR_4, VAR_5.image_id);

    FUNC_5(VAR_7, VAR_2);
ret:
    FUNC_6(VAR_2);
    return VAR_7;

error:
    if (VAR_8 != VAR_0)
        FUNC_10(FUNC_2(VAR_1), VAR_4, VAR_8);

    FUNC_6(VAR_7);
    VAR_7 = ((void*)0);
    goto ret;
}
