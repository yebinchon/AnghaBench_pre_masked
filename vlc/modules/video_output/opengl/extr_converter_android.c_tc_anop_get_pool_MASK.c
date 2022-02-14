
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct priv {int awh; } ;
typedef int picture_t ;
struct TYPE_11__ {int b_vd_ref; int i_index; int lock; int p_jsurface; int p_surface; } ;
struct TYPE_12__ {TYPE_1__ hw; } ;
typedef TYPE_2__ picture_sys_t ;
struct TYPE_13__ {int pf_destroy; TYPE_2__* p_sys; } ;
typedef TYPE_3__ picture_resource_t ;
typedef int picture_pool_t ;
struct TYPE_14__ {unsigned int picture_count; int unlock; int lock; int ** picture; } ;
typedef TYPE_4__ picture_pool_configuration_t ;
struct TYPE_15__ {int fmt; struct priv* priv; } ;
typedef TYPE_5__ opengl_tex_converter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static picture_pool_t *
FUNC_9(const opengl_tex_converter_t *VAR_4, unsigned VAR_5)
{
    struct priv *VAR_6 = VAR_4->priv;

    VAR_5 = 31;
    picture_t *VAR_7[31] = {((void*)0), };
    unsigned VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
    {
        picture_sys_t *VAR_9 = FUNC_2(1, sizeof(*VAR_9));
        if (FUNC_7(VAR_9 == ((void*)0)))
            goto error;
        picture_resource_t VAR_10 = {
            .p_sys = VAR_9,
            .pf_destroy = VAR_0,
        };

        VAR_9->hw.b_vd_ref = 1;
        VAR_9->hw.p_surface = FUNC_0(VAR_6->awh);
        VAR_9->hw.p_jsurface = FUNC_1(VAR_6->awh);
        VAR_9->hw.i_index = -1;
        FUNC_8(&VAR_9->hw.lock);

        VAR_7[VAR_8] = FUNC_4(&VAR_4->fmt, &VAR_10);
        if (!VAR_7[VAR_8])
        {
            FUNC_3(VAR_9);
            goto error;
        }
    }


    picture_pool_configuration_t VAR_11 = {
        .picture_count = VAR_5,
        .picture = VAR_7,
        .lock = VAR_2,
        .unlock = VAR_3,
    };
    picture_pool_t *VAR_12 = FUNC_6(&VAR_11);
    if (!VAR_12)
        goto error;

    return VAR_12;
error:
    for (unsigned VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
        FUNC_5(VAR_7[VAR_13]);
    return ((void*)0);
}
