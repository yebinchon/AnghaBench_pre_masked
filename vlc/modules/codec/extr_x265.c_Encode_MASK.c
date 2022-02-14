
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ pts; int poc; int sliceType; int * stride; int * planes; } ;
typedef TYPE_4__ x265_picture ;
struct TYPE_24__ {int payload; scalar_t__ sizeBytes; } ;
typedef TYPE_5__ x265_nal ;
typedef size_t uint32_t ;
struct TYPE_25__ {scalar_t__ date; int i_planes; TYPE_1__* p; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_21__ {int i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_22__ {TYPE_2__ video; } ;
struct TYPE_26__ {TYPE_3__ fmt_in; TYPE_8__* p_sys; } ;
typedef TYPE_7__ encoder_t ;
struct TYPE_27__ {scalar_t__ initial_date; float start; scalar_t__ frame_count; int h; int param; } ;
typedef TYPE_8__ encoder_sys_t ;
struct TYPE_28__ {int i_length; scalar_t__ i_pts; scalar_t__ i_dts; int i_buffer; int i_flags; int p_buffer; } ;
typedef TYPE_9__ block_t ;
struct TYPE_20__ {int i_pitch; int p_pixels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float VAR_3 ;
 scalar_t__ VAR_4 ;





 TYPE_9__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_7__*,char*,int ,scalar_t__,float) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 float FUNC_6 () ;
 int FUNC_7 (int ,TYPE_5__**,size_t*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_8 (int *,TYPE_4__*) ;

__attribute__((used)) static block_t *FUNC_9(encoder_t *VAR_5, picture_t *VAR_6)
{
    encoder_sys_t *VAR_7 = VAR_5->p_sys;
    x265_picture VAR_8;

    FUNC_8(&VAR_7->param, &VAR_8);

    if (FUNC_1(VAR_6)) {
        VAR_8.pts = VAR_6->date;
        if (FUNC_4(VAR_7->initial_date == VAR_4)) {
            VAR_7->initial_date = VAR_6->date;

            VAR_7->start = FUNC_6();

        }

        for (int VAR_9 = 0; VAR_9 < VAR_6->i_planes; VAR_9++) {
            VAR_8.planes[VAR_9] = VAR_6->p[VAR_9].p_pixels;
            VAR_8.stride[VAR_9] = VAR_6->p[VAR_9].i_pitch;
        }
    }

    x265_nal *VAR_10;
    uint32_t VAR_11 = 0;
    FUNC_7(VAR_7->h, &VAR_10, &VAR_11,
            FUNC_1(VAR_6) ? &VAR_8 : ((void*)0), &VAR_8);

    if (!VAR_11)
        return ((void*)0);

    int VAR_12 = 0;
    for (uint32_t VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
        VAR_12 += VAR_10[VAR_13].sizeBytes;

    block_t *VAR_14 = FUNC_0(VAR_12);
    if (!VAR_14)
        return ((void*)0);


    FUNC_2(VAR_14->p_buffer, VAR_10[0].payload, VAR_12);


    VAR_14->i_length = FUNC_5(
                VAR_5->fmt_in.video.i_frame_rate_base,
                VAR_5->fmt_in.video.i_frame_rate );

    VAR_14->i_pts = VAR_7->initial_date + VAR_8.poc * VAR_14->i_length;
    VAR_14->i_dts = VAR_7->initial_date + VAR_7->frame_count++ * VAR_14->i_length;

    switch (VAR_8.sliceType)
    {
    case 130:
    case 129:
        VAR_14->i_flags |= VAR_1;
        break;
    case 128:
        VAR_14->i_flags |= VAR_2;
        break;
    case 132:
    case 131:
        VAR_14->i_flags |= VAR_0;
        break;
    }


    FUNC_3(VAR_5, "%zu bytes (frame %u, %.2ffps)", VAR_14->i_buffer,
        VAR_7->frame_count, (float)VAR_7->frame_count * VAR_3 / (FUNC_6() - VAR_7->start));


    return VAR_14;
}
