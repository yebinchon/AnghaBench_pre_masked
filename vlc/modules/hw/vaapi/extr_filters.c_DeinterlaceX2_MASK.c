
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef unsigned int vlc_tick_t ;
struct TYPE_20__ {int i_frame_rate; scalar_t__ i_frame_rate_base; } ;
typedef TYPE_4__ video_format_t ;
struct TYPE_18__ {scalar_t__ num_pics; scalar_t__ sz; } ;
struct deint_data {unsigned int cur_frame; TYPE_3__* meta; TYPE_2__ history; } ;
struct TYPE_21__ {unsigned int date; int i_nb_fields; int b_progressive; struct TYPE_21__* p_next; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_17__ {TYPE_4__ video; } ;
struct TYPE_22__ {TYPE_1__ fmt_out; TYPE_7__* p_sys; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_23__ {struct deint_data* p_data; } ;
typedef TYPE_7__ filter_sys_t ;
struct TYPE_19__ {unsigned int date; int i_nb_fields; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct deint_data* const,TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_1 (TYPE_6__*,TYPE_5__*,int ,int ,int ) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_5__*) ;
 unsigned int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static picture_t *
FUNC_4(filter_t * VAR_5, picture_t * VAR_6)
{
    filter_sys_t *const VAR_7 = VAR_5->p_sys;
    struct deint_data *const VAR_8 = VAR_7->p_data;
    const video_format_t * VAR_9 = &VAR_5->fmt_out.video;




    for (unsigned int VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10)
        VAR_8->meta[VAR_10-1] = VAR_8->meta[VAR_10];
    VAR_8->meta[VAR_3-1].date = VAR_6->date;
    VAR_8->meta[VAR_3-1].i_nb_fields = VAR_6->i_nb_fields;

    picture_t * VAR_11 = FUNC_0(VAR_8, VAR_6);
    if (VAR_8->history.num_pics < VAR_8->history.sz)
        return ((void*)0);

    vlc_tick_t VAR_12 = 0;
    unsigned int VAR_13 = 0;
    for ( ; VAR_13 < VAR_3-1; VAR_13 ++)
        if (VAR_8->meta[VAR_13].date != VAR_4)
            break;
    if (VAR_13 < VAR_3-1) {
        unsigned int VAR_14 = 0;
        for (unsigned int VAR_15 = VAR_13; VAR_15 < VAR_3-1; ++VAR_15)
            VAR_14 += VAR_8->meta[VAR_15].i_nb_fields;
        VAR_12 = (VAR_6->date - VAR_8->meta[VAR_13].date) / VAR_14;
    }
    else if (VAR_9->i_frame_rate_base)
        VAR_12 = FUNC_3(VAR_9->i_frame_rate_base, VAR_9->i_frame_rate);

    picture_t *VAR_16[2] = {((void*)0), ((void*)0)};
    for (VAR_13 = 0; VAR_13 < 2; ++VAR_13)
    {
        VAR_8->cur_frame = VAR_13;
        VAR_16[VAR_13] = FUNC_1(VAR_5, VAR_11,
                         VAR_0,
                         VAR_2,
                         VAR_1);
        if (!VAR_16[VAR_13])
           goto error;

        VAR_16[VAR_13]->b_progressive = 1;
        VAR_16[VAR_13]->i_nb_fields = 1;
    }

    VAR_16[0]->p_next = VAR_16[1];
    VAR_16[0]->date = VAR_11->date;
    if (VAR_16[0]->date != VAR_4)
        VAR_16[1]->date = VAR_16[0]->date + VAR_12;
    else
        VAR_16[1]->date = VAR_4;

    return VAR_16[0];

error:
    for (VAR_13 = 0; VAR_13 < 2; ++VAR_13)
        if (VAR_16[VAR_13])
            FUNC_2(VAR_16[VAR_13]);

    return ((void*)0);
}
