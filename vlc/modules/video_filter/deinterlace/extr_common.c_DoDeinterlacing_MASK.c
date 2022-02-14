
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_32__ {int b_use_frame_history; scalar_t__ b_double_rate; scalar_t__ b_custom_pts; } ;
struct deinterlace_ctx {int i_frame_offset; TYPE_3__ settings; TYPE_2__* meta; TYPE_4__** pp_history; scalar_t__ (* pf_render_ordered ) (TYPE_5__*,TYPE_4__*,TYPE_4__*,int,int) ;scalar_t__ (* pf_render_single_pic ) (TYPE_5__*,TYPE_4__*,TYPE_4__*) ;} ;
struct TYPE_33__ {scalar_t__ date; int i_nb_fields; int b_top_field_first; int b_progressive; struct TYPE_33__* p_next; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_30__ {int video; } ;
struct TYPE_34__ {TYPE_1__ fmt_out; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_31__ {scalar_t__ pi_date; int pi_nb_fields; int pb_top_field_first; } ;


 TYPE_4__* FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct deinterlace_ctx*,int *,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,char*,int,...) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int,int) ;
 scalar_t__ FUNC_9 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int,int) ;

picture_t *FUNC_11( filter_t *VAR_5,
                            struct deinterlace_ctx *VAR_6, picture_t *VAR_7 )
{
    picture_t *VAR_8[VAR_1];
    int VAR_9;



    int VAR_10;
    int VAR_11;

    bool VAR_12;


    VAR_8[0] = FUNC_0( VAR_5 );
    if( VAR_8[0] == ((void*)0) )
    {
        FUNC_6( VAR_7 );
        return ((void*)0);
    }
    FUNC_4( VAR_8[0], VAR_7 );



    for( int VAR_13 = 1; VAR_13 < VAR_1; ++VAR_13 )
        VAR_8[VAR_13] = ((void*)0);



    if( VAR_6->settings.b_use_frame_history )
    {

        picture_t *VAR_14 = FUNC_5( VAR_7 );


        if( VAR_6->pp_history[0] )
            FUNC_6( VAR_6->pp_history[0] );
        for( int VAR_15 = 1; VAR_15 < VAR_2; VAR_15++ )
            VAR_6->pp_history[VAR_15-1] = VAR_6->pp_history[VAR_15];
        VAR_6->pp_history[VAR_2-1] = VAR_14;
    }


    for( int VAR_16 = 1; VAR_16 < VAR_3; VAR_16++ )
        VAR_6->meta[VAR_16-1] = VAR_6->meta[VAR_16];

    VAR_6->meta[VAR_3-1].pi_date = VAR_7->date;
    VAR_6->meta[VAR_3-1].pi_nb_fields = VAR_7->i_nb_fields;
    VAR_6->meta[VAR_3-1].pb_top_field_first = VAR_7->b_top_field_first;




    VAR_10 = VAR_6->i_frame_offset;
    VAR_11 = (VAR_3-1) - VAR_10;

    int VAR_17;


    if( VAR_10 != VAR_0 )
    {

        VAR_12 = VAR_6->meta[VAR_11].pb_top_field_first;
        VAR_17 = VAR_6->meta[VAR_11].pi_nb_fields;
    }
    else
    {



        FUNC_2( !VAR_6->settings.b_double_rate );






        VAR_12 = VAR_7->b_top_field_first;

        VAR_17 = VAR_7->i_nb_fields;
    }



    VAR_9 = 0;




    if( VAR_6->settings.b_double_rate )
    {
        VAR_9 = VAR_17;
        if( VAR_17 > VAR_1 )
        {





            FUNC_3( VAR_5, "Framerate doubler: output buffer too small; " "fields = %d, buffer size = %d. Dropping the " "remaining fields.",


                               VAR_17, VAR_1 );
            VAR_9 = VAR_1;
        }


        for( int VAR_18 = 1; VAR_18 < VAR_9 ; ++VAR_18 )
        {
            VAR_8[VAR_18-1]->p_next =
            VAR_8[VAR_18] = FUNC_0( VAR_5 );
            if( VAR_8[VAR_18] )
            {
                FUNC_4( VAR_8[VAR_18], VAR_7 );
            }
            else
            {
                FUNC_3( VAR_5, "Framerate doubler: could not allocate " "output frame %d", VAR_18+1 );

                VAR_9 = VAR_18;

                break;

            }
        }
    }
    FUNC_2( VAR_6->settings.b_double_rate || VAR_8[1] == ((void*)0) );
    FUNC_2( VAR_17 > 2 || VAR_8[2] == ((void*)0) );


    if ( !VAR_6->settings.b_double_rate )
    {
        if ( VAR_6->pf_render_single_pic( VAR_5, VAR_8[0], VAR_7 ) )
            goto drop;
    }
    else
    {


        if ( VAR_6->pf_render_ordered( VAR_5, VAR_8[0], VAR_7,
                                           0, !VAR_12 ) )
            goto drop;
        if ( VAR_8[1] )
            VAR_6->pf_render_ordered( VAR_5, VAR_8[1], VAR_7,
                                          1, VAR_12 );
        if ( VAR_8[2] )
            VAR_6->pf_render_ordered( VAR_5, VAR_8[2], VAR_7,
                                          2, !VAR_12 );
    }

    if ( VAR_6->settings.b_custom_pts )
    {
        FUNC_2(VAR_6->settings.b_use_frame_history);
        if( VAR_6->pp_history[0] && VAR_6->pp_history[1] )
        {

            VAR_6->i_frame_offset = VAR_0;
        }
        else if( !VAR_6->pp_history[0] && !VAR_6->pp_history[1] )
        {
        }
        else
        {


            VAR_6->i_frame_offset = VAR_0;
        }
    }



    FUNC_2( VAR_10 <= VAR_3 ||
            VAR_10 == VAR_0 );
    if( VAR_10 != VAR_0 )
    {
        vlc_tick_t VAR_19 = VAR_6->meta[VAR_11].pi_date;





        VAR_8[0]->date = VAR_19;

        if( VAR_6->settings.b_double_rate )
        {
            vlc_tick_t VAR_20 = FUNC_1( VAR_6, &VAR_5->fmt_out.video, VAR_7 );

            for( int VAR_21 = 1; VAR_21 < VAR_9; ++VAR_21 )
            {


                if( VAR_19 != VAR_4 )
                    VAR_8[VAR_21]->date = VAR_19 + VAR_21 * VAR_20;
                else
                    VAR_8[VAR_21]->date = VAR_4;
            }
        }
    }

    for( int VAR_22 = 0; VAR_22 < VAR_1; ++VAR_22 )
    {
        if( VAR_8[VAR_22] )
        {
            VAR_8[VAR_22]->b_progressive = 1;
            VAR_8[VAR_22]->i_nb_fields = 2;
        }
    }

    FUNC_6( VAR_7 );
    return VAR_8[0];

drop:
    FUNC_6( VAR_8[0] );
    for( int VAR_23 = 1; VAR_23 < VAR_1; ++VAR_23 )
    {
        if( VAR_8[VAR_23] )
            FUNC_6( VAR_8[VAR_23] );
    }

    FUNC_6( VAR_7 );
    return ((void*)0);



}
