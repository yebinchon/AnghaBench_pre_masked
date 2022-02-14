
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_14__ {TYPE_11__* p_window; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int pool_cfg ;
typedef int picture_t ;
typedef int picture_pool_t ;
struct TYPE_15__ {unsigned int picture_count; int unlock; int lock; int ** picture; } ;
typedef TYPE_3__ picture_pool_configuration_t ;
struct TYPE_12__ {unsigned int i_pic_count; int fmt; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_11__*,unsigned int) ;
 int * FUNC_1 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int ** FUNC_3 (unsigned int,int) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,char*,unsigned int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static picture_pool_t *FUNC_9(vout_display_t *VAR_2, unsigned VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_2->sys;
    picture_pool_t *VAR_5 = ((void*)0);
    picture_t **VAR_6 = ((void*)0);
    unsigned int VAR_7 = 0;

    FUNC_6(VAR_2, "PoolAlloc: request %d frames", VAR_3);
    if (FUNC_0(VAR_4, VAR_4->p_window, VAR_3) != 0)
        goto error;

    VAR_3 = VAR_4->p_window->i_pic_count;
    FUNC_6(VAR_2, "PoolAlloc: got %d frames", VAR_3);

    FUNC_2(VAR_4, &VAR_4->p_window->fmt);

    VAR_6 = FUNC_3(VAR_3, sizeof(picture_t));

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
        picture_t *VAR_8 = FUNC_1(VAR_4, &VAR_4->p_window->fmt, 1);
        if (!VAR_8)
            goto error;

        VAR_6[VAR_7] = VAR_8;
    }

    picture_pool_configuration_t VAR_9;
    FUNC_5(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.picture_count = VAR_3;
    VAR_9.picture = VAR_6;
    VAR_9.lock = VAR_0;
    VAR_9.unlock = VAR_1;
    VAR_5 = FUNC_8(&VAR_9);

error:
    if (!VAR_5 && VAR_6) {
        for (unsigned VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
            FUNC_7(VAR_6[VAR_10]);
    }
    FUNC_4(VAR_6);
    return VAR_5;
}
