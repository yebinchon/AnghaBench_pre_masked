
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_decoder_device ;
struct TYPE_17__ {int i_visible_height; int i_visible_width; int i_chroma; } ;
typedef TYPE_6__ video_format_t ;
struct TYPE_14__ {int copy; int destroy; } ;
struct TYPE_15__ {void* va_dpy; int surface; TYPE_3__ s; } ;
struct TYPE_16__ {int * picref; TYPE_4__ ctx; } ;
struct pic_sys_vaapi_instance {unsigned int num_render_targets; int * render_targets; void* va_dpy; int dec_device; int pic_refcount; TYPE_5__ ctx; struct pic_sys_vaapi_instance* instance; } ;
typedef int picture_t ;
typedef struct pic_sys_vaapi_instance picture_sys_t ;
struct TYPE_18__ {int pf_destroy; struct pic_sys_vaapi_instance* p_sys; } ;
typedef TYPE_7__ picture_resource_t ;
typedef int picture_pool_t ;
typedef int VASurfaceID ;
struct TYPE_12__ {int i; } ;
struct TYPE_13__ {TYPE_1__ value; int type; } ;
struct TYPE_19__ {TYPE_2__ value; int flags; int type; } ;
typedef TYPE_8__ VASurfaceAttrib ;
typedef void* VADisplay ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,void*,unsigned int,unsigned int,...) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (struct pic_sys_vaapi_instance*) ;
 struct pic_sys_vaapi_instance* FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_5 (TYPE_6__ const*,TYPE_7__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (unsigned int,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,unsigned int*,int*) ;
 int FUNC_9 (int *) ;

picture_pool_t *
FUNC_10(vlc_object_t *VAR_8, vlc_decoder_device *VAR_9,
                  VADisplay VAR_10, unsigned VAR_11, VASurfaceID **VAR_12,
                  const video_format_t *restrict VAR_13, bool VAR_14)
{
    unsigned VAR_15;
    int VAR_16;
    FUNC_8(VAR_13->i_chroma, &VAR_15, &VAR_16);

    struct pic_sys_vaapi_instance *VAR_17 =
        FUNC_4(sizeof(*VAR_17) + VAR_11 * sizeof(VASurfaceID));
    if (!VAR_17)
        return ((void*)0);
    VAR_17->num_render_targets = VAR_11;
    FUNC_1(&VAR_17->pic_refcount, 0);

    VASurfaceAttrib *VAR_18 = ((void*)0);
    unsigned VAR_19 = 0;
    VASurfaceAttrib VAR_20[1] = {
        {
            .type = VAR_1,
            .flags = VAR_2,
            .value.type = VAR_0,
            .value.value.i = VAR_14 ? VAR_16 : 0,
        }
    };
    if (VAR_14)
    {
        VAR_18 = VAR_20;
        VAR_19 = 1;
    }

    picture_t *VAR_21[VAR_11];

    FUNC_0(VAR_8, VAR_6, VAR_10, VAR_15,
            VAR_13->i_visible_width, VAR_13->i_visible_height,
            VAR_17->render_targets, VAR_17->num_render_targets,
            VAR_18, VAR_19);

    for (unsigned VAR_22 = 0; VAR_22 < VAR_11; VAR_22++)
    {
        picture_sys_t *VAR_23 = FUNC_4(sizeof *VAR_23);
        if (VAR_23 == ((void*)0))
        {
            VAR_11 = VAR_22;
            goto error_pic;
        }
        VAR_23->instance = VAR_17;
        VAR_23->ctx.ctx.s.destroy = VAR_4;
        VAR_23->ctx.ctx.s.copy = VAR_3;
        VAR_23->ctx.ctx.surface = VAR_17->render_targets[VAR_22];
        VAR_23->ctx.ctx.va_dpy = VAR_10;
        VAR_23->ctx.picref = ((void*)0);
        picture_resource_t VAR_24 = {
            .p_sys = VAR_23,
            .pf_destroy = VAR_5,
        };
        VAR_21[VAR_22] = FUNC_5(VAR_13, &VAR_24);
        if (VAR_21[VAR_22] == ((void*)0))
        {
            FUNC_3(VAR_23);
            VAR_11 = VAR_22;
            goto error_pic;
        }
    }

    picture_pool_t *VAR_25 = FUNC_7(VAR_11, VAR_21);
    if (!VAR_25)
        goto error_pic;

    FUNC_2(&VAR_17->pic_refcount, VAR_11);
    VAR_17->va_dpy = VAR_10;
    VAR_17->dec_device = FUNC_9(VAR_9);

    *VAR_12 = VAR_17->render_targets;
    return VAR_25;

error_pic:
    while (VAR_11 > 0)
        FUNC_6(VAR_21[--VAR_11]);

    FUNC_0(VAR_8, VAR_7, VAR_17->va_dpy, VAR_17->render_targets,
            VAR_17->num_render_targets);

error:
    FUNC_3(VAR_17);
    return ((void*)0);
}
