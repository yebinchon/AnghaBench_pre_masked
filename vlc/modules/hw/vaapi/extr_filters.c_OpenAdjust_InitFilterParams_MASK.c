
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
struct adjust_params {TYPE_2__* sigma; } ;
struct adjust_data {int num_available_modes; struct adjust_params params; } ;
struct TYPE_17__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_15__ {int ctx; int dpy; } ;
struct TYPE_18__ {TYPE_1__ va; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_19__ {scalar_t__ attrib; int type; } ;
typedef TYPE_5__ VAProcFilterParameterBufferColorBalance ;
struct TYPE_20__ {scalar_t__ type; int range; } ;
typedef TYPE_6__ VAProcFilterCapColorBalance ;
struct TYPE_21__ {int max_value; int min_value; } ;
struct TYPE_16__ {int is_available; int drv_value; int drv_range; } ;


 float FUNC_0 (float,TYPE_8__,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;
 float FUNC_3 (int ,float,TYPE_8__*) ;
 int * VAR_6 ;
 TYPE_5__* FUNC_4 (int,int) ;
 scalar_t__* VAR_7 ;
 int FUNC_5 (TYPE_3__*,int ) ;
 TYPE_8__* VAR_8 ;
 int FUNC_6 (int *,float const) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,TYPE_6__*,unsigned int*) ;

__attribute__((used)) static int
FUNC_8(filter_t * VAR_9, void * VAR_10,
                            void ** VAR_11,
                            uint32_t * VAR_12,
                            uint32_t * VAR_13)
{
    struct adjust_data *const VAR_14 = VAR_10;
    struct adjust_params *const VAR_15 = &VAR_14->params;
    filter_sys_t *const VAR_16 = VAR_9->p_sys;
    VAProcFilterCapColorBalance VAR_17[VAR_1];
    unsigned int VAR_18 = VAR_1;

    if (FUNC_7(FUNC_2(VAR_9),
                                           VAR_16->va.dpy,
                                           VAR_16->va.ctx,
                                           VAR_2,
                                           VAR_17, &VAR_18))
        return VAR_3;

    for (unsigned int VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19)
    {
        unsigned int VAR_20;

        for (VAR_20 = 0; VAR_20 < VAR_18; ++VAR_20)
            if (VAR_17[VAR_20].type == VAR_7[VAR_19])
            {
                float VAR_21 =
                    FUNC_1(FUNC_5(VAR_9, VAR_6[VAR_19]),
                             VAR_8[VAR_19].min_value,
                             VAR_8[VAR_19].max_value);
                VAR_21 =
                    FUNC_3(VAR_6[VAR_19],
                                       VAR_21, VAR_8 + VAR_19);

                VAR_15->sigma[VAR_19].drv_range = VAR_17[VAR_20].range;
                VAR_15->sigma[VAR_19].is_available = 1;
                ++VAR_14->num_available_modes;

                float const VAR_22 =
                    FUNC_0(VAR_21, VAR_8[VAR_19],
                                  VAR_15->sigma[VAR_19].drv_range);

                FUNC_6(&VAR_15->sigma[VAR_19].drv_value,
                                      VAR_22);
                break;
            }
    }

    VAProcFilterParameterBufferColorBalance * VAR_23;

    *VAR_12 = sizeof(typeof(*VAR_23));
    *VAR_13 = VAR_14->num_available_modes;

    VAR_23 = FUNC_4(*VAR_13, *VAR_12);
    if (!VAR_23)
        return VAR_4;

    unsigned int VAR_24 = 0;
    for (unsigned int VAR_25 = 0; VAR_25 < VAR_0; ++VAR_25)
        if (VAR_15->sigma[VAR_25].is_available)
        {
            VAR_23[VAR_24].type = VAR_2;
            VAR_23[VAR_24++].attrib = VAR_7[VAR_25];
        }

    *VAR_11 = VAR_23;

    return VAR_5;
}
