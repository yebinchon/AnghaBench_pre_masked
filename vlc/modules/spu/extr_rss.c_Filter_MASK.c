
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_31__ {int i_sar_num; int i_sar_den; scalar_t__ i_visible_width; int i_visible_height; int i_height; scalar_t__ i_width; } ;
typedef TYPE_5__ video_format_t ;
struct TYPE_32__ {int b_ephemer; int b_absolute; TYPE_4__* p_region; scalar_t__ i_stop; scalar_t__ i_start; } ;
typedef TYPE_6__ subpicture_t ;
struct TYPE_33__ {int p_picture; int i_y; int i_x; } ;
typedef TYPE_7__ subpicture_region_t ;
struct TYPE_34__ {scalar_t__* psz_title; size_t i_items; TYPE_9__* p_pic; TYPE_1__* p_items; } ;
typedef TYPE_8__ rss_feed_t ;
struct TYPE_35__ {TYPE_3__* p; } ;
typedef TYPE_9__ picture_t ;
struct TYPE_23__ {TYPE_11__* p_sys; } ;
typedef TYPE_10__ filter_t ;
struct TYPE_24__ {int i_feeds; scalar_t__ last_date; size_t i_cur_char; int i_cur_item; scalar_t__ i_title; int i_speed; size_t i_cur_feed; char* psz_marquee; int i_pos; int lock; TYPE_13__* p_style; int i_yoff; int i_xoff; TYPE_8__* p_feeds; scalar_t__ i_length; int b_fetched; } ;
typedef TYPE_11__ filter_sys_t ;
struct TYPE_28__ {scalar_t__ i_visible_height; } ;
struct TYPE_30__ {int i_align; int i_x; TYPE_7__* p_next; int i_y; TYPE_14__* p_text; TYPE_2__ fmt; } ;
struct TYPE_29__ {int i_visible_lines; scalar_t__ i_visible_pitch; } ;
struct TYPE_27__ {scalar_t__* psz_title; } ;
struct TYPE_26__ {int style; } ;
struct TYPE_25__ {scalar_t__ i_font_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_6__* FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_10__*,char*) ;
 int FUNC_4 (int ,TYPE_9__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char*,scalar_t__,char*,...) ;
 char* FUNC_6 (char*,int ) ;
 char* FUNC_7 (char*) ;
 unsigned int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_6__*) ;
 void* FUNC_10 (TYPE_5__*) ;
 TYPE_14__* FUNC_11 (char*) ;
 int FUNC_12 (TYPE_13__*) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static subpicture_t *FUNC_16( filter_t *VAR_9, vlc_tick_t VAR_10 )
{
    filter_sys_t *VAR_11 = VAR_9->p_sys;
    subpicture_t *VAR_12;
    video_format_t VAR_13;
    subpicture_region_t *VAR_14;

    int VAR_15, VAR_16;
    rss_feed_t *VAR_17;

    FUNC_14( &VAR_11->lock );



    if( !VAR_11->b_fetched && VAR_11->i_feeds > 0 )
    {
        FUNC_15( &VAR_11->lock );
        return ((void*)0);
    }

    if( VAR_11->last_date
       + ( VAR_11->i_cur_char == 0 &&
           VAR_11->i_cur_item == ( VAR_11->i_title == VAR_8 ? -1 : 0 ) ? 5 : 1 )

       * VAR_11->i_speed > VAR_10 )
    {
        FUNC_15( &VAR_11->lock );
        return ((void*)0);
    }

    VAR_11->last_date = VAR_10;
    VAR_11->i_cur_char++;

    if( VAR_11->i_cur_item == -1 ?
            VAR_11->p_feeds[VAR_11->i_cur_feed].psz_title[VAR_11->i_cur_char] == 0 :
            VAR_11->p_feeds[VAR_11->i_cur_feed].p_items[VAR_11->i_cur_item].psz_title[VAR_11->i_cur_char] == 0 )
    {
        VAR_11->i_cur_char = 0;
        VAR_11->i_cur_item++;
        if( VAR_11->i_cur_item >= VAR_11->p_feeds[VAR_11->i_cur_feed].i_items )
        {
            if( VAR_11->i_title == VAR_8 )
                VAR_11->i_cur_item = -1;
            else
                VAR_11->i_cur_item = 0;
            VAR_11->i_cur_feed = (VAR_11->i_cur_feed + 1)%VAR_11->i_feeds;
        }
    }

    VAR_12 = FUNC_1( VAR_9 );
    if( !VAR_12 )
    {
        FUNC_15( &VAR_11->lock );
        return ((void*)0);
    }

    FUNC_13( &VAR_13, VAR_2 );

    VAR_12->p_region = FUNC_10( &VAR_13 );
    if( !VAR_12->p_region )
    {
        FUNC_9( VAR_12 );
        FUNC_15( &VAR_11->lock );
        return ((void*)0);
    }



    VAR_16 = VAR_11->i_cur_item;
    VAR_15 = VAR_11->i_cur_feed;
    VAR_17 = &VAR_11->p_feeds[VAR_15];

    if( ( VAR_17->p_pic && VAR_11->i_title == VAR_5 )
        || VAR_11->i_title == VAR_6 )
    {

        FUNC_5( VAR_11->psz_marquee, VAR_11->i_length, "%s",
                  VAR_11->p_feeds[VAR_15].p_items[VAR_16].psz_title
                  +VAR_11->i_cur_char );
    }
    else if( ( !VAR_17->p_pic && VAR_11->i_title == VAR_5 )
             || VAR_11->i_title == VAR_7 )
    {
        FUNC_5( VAR_11->psz_marquee, VAR_11->i_length, "%s : %s",
                  VAR_11->p_feeds[VAR_15].psz_title,
                  VAR_11->p_feeds[VAR_15].p_items[VAR_16].psz_title
                  +VAR_11->i_cur_char );
    }
    else
    {
        if( VAR_16 == -1 )
            FUNC_5( VAR_11->psz_marquee, VAR_11->i_length, "%s : %s",
                      VAR_11->p_feeds[VAR_15].psz_title + VAR_11->i_cur_char,
                      VAR_11->p_feeds[VAR_15].p_items[VAR_16+1].psz_title );
        else
            FUNC_5( VAR_11->psz_marquee, VAR_11->i_length, "%s",
                      VAR_11->p_feeds[VAR_15].p_items[VAR_16].psz_title
                      +VAR_11->i_cur_char );
    }

    while( FUNC_8( VAR_11->psz_marquee ) < (unsigned int)VAR_11->i_length )
    {
        VAR_16++;
        if( VAR_16 == VAR_11->p_feeds[VAR_15].i_items ) break;
        FUNC_5( FUNC_6( VAR_11->psz_marquee, 0 ),
                  VAR_11->i_length - FUNC_8( VAR_11->psz_marquee ),
                  " - %s",
                  VAR_11->p_feeds[VAR_15].p_items[VAR_16].psz_title );
    }



    {
        char *VAR_18 = FUNC_7( VAR_11->psz_marquee );
        char *VAR_19 = VAR_18;
        char *VAR_20 = VAR_11->psz_marquee;
        FUNC_0( VAR_11->psz_marquee );

        while( *VAR_20 != '\0' )
        {
            if( *VAR_20 != *VAR_18 ) *VAR_20 = ' ';
            VAR_20++;VAR_18++;
        }
        FUNC_2( VAR_19 );
    }

    VAR_12->p_region->p_text = FUNC_11(VAR_11->psz_marquee);
    if( VAR_11->p_style->i_font_size > 0 )
        VAR_12->p_region->fmt.i_visible_height = VAR_11->p_style->i_font_size;
    VAR_12->i_start = VAR_10;
    VAR_12->i_stop = 0;
    VAR_12->b_ephemer = 1;


    if( VAR_11->i_pos < 0 )
    {
        VAR_12->p_region->i_align = VAR_0 | VAR_1;
        VAR_12->b_absolute = 1;
    }
    else
    {
        VAR_12->p_region->i_align = VAR_11->i_pos;
        VAR_12->b_absolute = 0;
    }
    VAR_12->p_region->i_x = VAR_11->i_xoff;
    VAR_12->p_region->i_y = VAR_11->i_yoff;

    VAR_12->p_region->p_text->style = FUNC_12( VAR_11->p_style );

    if( VAR_17->p_pic )
    {

        picture_t *VAR_21 = VAR_17->p_pic;
        video_format_t VAR_22;

        FUNC_13( &VAR_22, VAR_3 );

        VAR_22.i_sar_num = VAR_22.i_sar_den = 1;
        VAR_22.i_width =
            VAR_22.i_visible_width = VAR_21->p[VAR_4].i_visible_pitch;
        VAR_22.i_height =
            VAR_22.i_visible_height = VAR_21->p[VAR_4].i_visible_lines;

        VAR_14 = FUNC_10( &VAR_22 );
        if( !VAR_14 )
        {
            FUNC_3( VAR_9, "cannot allocate SPU region" );
        }
        else
        {
            VAR_14->i_x = VAR_12->p_region->i_x;
            VAR_14->i_y = VAR_12->p_region->i_y;

            FUNC_4( VAR_14->p_picture, VAR_21 );
            VAR_12->p_region->p_next = VAR_14;


            VAR_12->p_region->i_x += VAR_22.i_visible_width;
        }
    }

    FUNC_15( &VAR_11->lock );
    return VAR_12;
}
