
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_19__ {scalar_t__ date; struct TYPE_19__* p_next; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_22__ {int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_18__ {TYPE_8__ video; } ;
struct TYPE_20__ {TYPE_2__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_21__ {scalar_t__ i_output_frame_interval; TYPE_3__* p_previous_pic; int next_output_pts; } ;
typedef TYPE_5__ filter_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static picture_t *FUNC_9( filter_t *VAR_1, picture_t *VAR_2)
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;



    if( FUNC_8( VAR_2->date == VAR_0) )
    {
        FUNC_3( VAR_1, "skipping non-dated picture");
        FUNC_7( VAR_2 );
        return ((void*)0);
    }

    VAR_2->format.i_frame_rate = VAR_1->fmt_out.video.i_frame_rate;
    VAR_2->format.i_frame_rate_base = VAR_1->fmt_out.video.i_frame_rate_base;



    if( FUNC_8( ( FUNC_0( &VAR_3->next_output_pts ) == VAR_0 ) ||
                   ( VAR_2->date > ( FUNC_0( &VAR_3->next_output_pts ) + VAR_3->i_output_frame_interval ) )
                ) )
    {
        FUNC_3( VAR_1, "Resetting timestamps" );
        FUNC_2( &VAR_3->next_output_pts, VAR_2->date );
        if( VAR_3->p_previous_pic )
            FUNC_7( VAR_3->p_previous_pic );
        VAR_3->p_previous_pic = FUNC_5( VAR_2 );
        FUNC_1( &VAR_3->next_output_pts, 1 );
        return VAR_2;
    }


    if( VAR_2->date <
        ( FUNC_0( &VAR_3->next_output_pts ) - VAR_3->i_output_frame_interval ) )
    {
        if( VAR_3->p_previous_pic )
            FUNC_7( VAR_3->p_previous_pic );
        VAR_3->p_previous_pic = VAR_2;
        return ((void*)0);
    }

    VAR_3->p_previous_pic->date = FUNC_0( &VAR_3->next_output_pts );
    FUNC_1( &VAR_3->next_output_pts, 1 );

    picture_t *VAR_4 = VAR_3->p_previous_pic;


    while( FUNC_8( (FUNC_0( &VAR_3->next_output_pts ) + VAR_3->i_output_frame_interval ) < VAR_2->date ) )
    {
        picture_t *VAR_5 = ((void*)0);
        VAR_5 = FUNC_6( &VAR_1->fmt_out.video );

        FUNC_4( VAR_5, VAR_3->p_previous_pic);
        VAR_5->date = FUNC_0( &VAR_3->next_output_pts );
        VAR_5->p_next = ((void*)0);

        VAR_4->p_next = VAR_5;
        VAR_4 = VAR_5;
        FUNC_1( &VAR_3->next_output_pts, 1 );
    }

    VAR_4 = VAR_3->p_previous_pic;
    VAR_3->p_previous_pic = VAR_2;
    return VAR_4;
}
