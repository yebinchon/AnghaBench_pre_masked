
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct deint_mode {int b_double_rate; int type; } ;
struct deint_data {int b_double_rate; } ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_10__ {int buf; int dpy; } ;
struct TYPE_12__ {TYPE_1__ va; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_13__ {int algorithm; int type; } ;
typedef TYPE_4__ VAProcFilterParameterBufferDeinterlacing ;
typedef int VAProcFilterCapDeinterlacing ;


 int FUNC_0 (TYPE_2__*,char* const,struct deint_mode*,int *,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int,int) ;
 int FUNC_3 (char* const) ;
 char* FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int **,unsigned int*) ;

__attribute__((used)) static int
FUNC_6(filter_t * VAR_5, void * VAR_6,
                                 void ** VAR_7,
                                 uint32_t * VAR_8,
                                 uint32_t * VAR_9)
{
    struct deint_data *const VAR_10 = VAR_6;
    filter_sys_t *const VAR_11 = VAR_5->p_sys;
    VAProcFilterCapDeinterlacing
                                VAR_12[VAR_0];
    unsigned int VAR_13 = VAR_0;

    if (FUNC_5(FUNC_1(VAR_5),
                                           VAR_11->va.dpy,
                                           VAR_11->va.buf,
                                           VAR_1,
                                           &VAR_12, &VAR_13))
        return VAR_2;

    struct deint_mode VAR_14;
    char *const VAR_15 =
        FUNC_4(VAR_5, "deinterlace-mode");

    int VAR_16 = FUNC_0(VAR_5, VAR_15,
                                      &VAR_14, VAR_12, VAR_13);
    FUNC_3(VAR_15);
    if (VAR_16)
        return VAR_2;

    VAProcFilterParameterBufferDeinterlacing * VAR_17;

    *VAR_8 = sizeof(*VAR_17);
    *VAR_9 = 1;

    VAR_17 = FUNC_2(1, sizeof(*VAR_17));
    if (!VAR_17)
        return VAR_3;

    VAR_17->type = VAR_1;
    VAR_17->algorithm = VAR_14.type;
    *VAR_7 = VAR_17;

    VAR_10->b_double_rate = VAR_14.b_double_rate;

    return VAR_4;
}
