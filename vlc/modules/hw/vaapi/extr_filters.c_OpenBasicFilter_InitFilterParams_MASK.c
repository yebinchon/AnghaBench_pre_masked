
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int uint32_t ;
struct TYPE_15__ {int drv_value; int drv_range; TYPE_12__* p_vlc_range; int psz_name; } ;
struct basic_filter_data {int filter_type; TYPE_2__ sigma; } ;
struct TYPE_16__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_14__ {int buf; int dpy; } ;
struct TYPE_17__ {TYPE_1__ va; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_18__ {int type; } ;
typedef TYPE_5__ VAProcFilterParameterBuffer ;
struct TYPE_19__ {int range; } ;
typedef TYPE_6__ VAProcFilterCap ;
struct TYPE_13__ {int max_value; int min_value; } ;


 float FUNC_0 (float const,TYPE_12__,int ) ;
 float FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 TYPE_5__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int *,float const) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,TYPE_6__*,unsigned int*) ;

__attribute__((used)) static int
FUNC_7(filter_t * VAR_3, void * VAR_4,
                                 void ** VAR_5,
                                 uint32_t * VAR_6,
                                 uint32_t * VAR_7)
{
    struct basic_filter_data *const VAR_8 = VAR_4;
    filter_sys_t *const VAR_9 = VAR_3->p_sys;
    VAProcFilterCap VAR_10;
    unsigned int VAR_11 = 1;

    if (FUNC_6(FUNC_2(VAR_3),
                                           VAR_9->va.dpy,
                                           VAR_9->va.buf,
                                           VAR_8->filter_type,
                                           &VAR_10, &VAR_11)
        || !VAR_11)
        return VAR_0;

    float const VAR_12 =
        FUNC_1(FUNC_4(VAR_3, VAR_8->sigma.psz_name),
                 VAR_8->sigma.p_vlc_range->min_value,
                 VAR_8->sigma.p_vlc_range->max_value);

    VAR_8->sigma.drv_range = VAR_10.range;

    float const VAR_13 =
        FUNC_0(VAR_12, *VAR_8->sigma.p_vlc_range,
                      VAR_8->sigma.drv_range);

    FUNC_5(&VAR_8->sigma.drv_value, VAR_13);

    VAProcFilterParameterBuffer * VAR_14;

    *VAR_6 = sizeof(*VAR_14);
    *VAR_7 = 1;

    VAR_14 = FUNC_3(1, sizeof(*VAR_14));
    if (!VAR_14)
        return VAR_1;

    VAR_14->type = VAR_8->filter_type;
    *VAR_5 = VAR_14;

    return VAR_2;
}
