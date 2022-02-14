
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_7__ {scalar_t__ i_frame_rate; int i_frame_rate_base; } ;
typedef TYPE_2__ video_format_t ;
struct deinterlace_ctx {TYPE_1__* meta; } ;
struct TYPE_8__ {int date; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_6__ {scalar_t__ pi_date; scalar_t__ pi_nb_fields; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

vlc_tick_t FUNC_1(const struct deinterlace_ctx *VAR_2,
                         const video_format_t *VAR_3, const picture_t *VAR_4 )
{
    vlc_tick_t VAR_5 = 0;


    int VAR_6 = 0;
    int VAR_7 = VAR_0-1;


    for( ; VAR_6 < VAR_7; VAR_6++ )
        if( VAR_2->meta[VAR_6].pi_date != VAR_1 )
            break;
    if( VAR_6 < VAR_7 )
    {


        int VAR_8 = 0;
        for( int VAR_9 = VAR_6 ; VAR_9 < VAR_7; VAR_9++ )
            VAR_8 += VAR_2->meta[VAR_9].pi_nb_fields;

        VAR_5 = (VAR_4->date - VAR_2->meta[VAR_6].pi_date) / VAR_8;
    }
    else if (VAR_3->i_frame_rate)
        VAR_5 = FUNC_0( VAR_3->i_frame_rate_base, VAR_3->i_frame_rate);






    return VAR_5;
}
