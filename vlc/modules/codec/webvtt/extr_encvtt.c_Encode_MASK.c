
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int i_features; int i_style_flags; } ;
typedef TYPE_2__ text_style_t ;
struct TYPE_22__ {int * psz_text; TYPE_2__* style; TYPE_4__* p_ruby; struct TYPE_22__* p_next; } ;
typedef TYPE_3__ text_segment_t ;
struct TYPE_23__ {int * psz_rt; int * psz_base; struct TYPE_23__* p_next; } ;
typedef TYPE_4__ text_segment_ruby_t ;
struct TYPE_24__ {float i_original_picture_height; scalar_t__ i_start; scalar_t__ i_stop; TYPE_6__* p_region; } ;
typedef TYPE_5__ subpicture_t ;
struct TYPE_20__ {scalar_t__ i_chroma; } ;
struct TYPE_25__ {int i_text_align; int i_align; float i_y; TYPE_3__* p_text; TYPE_1__ fmt; struct TYPE_25__* p_next; } ;
typedef TYPE_6__ subpicture_region_t ;
typedef int encoder_t ;
struct TYPE_26__ {TYPE_8__* b; } ;
typedef TYPE_7__ bo_t ;
struct TYPE_27__ {scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ i_length; } ;
typedef TYPE_8__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_7__*,char*) ;
 int FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*,char) ;
 int FUNC_4 (TYPE_7__*,char*) ;
 int FUNC_5 (TYPE_7__*,int,char*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__*,size_t,size_t) ;
 size_t FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char**,char*,float) ;

__attribute__((used)) static block_t *FUNC_12( encoder_t *VAR_8, subpicture_t *VAR_9 )
{
    FUNC_0( VAR_8 );

    if( VAR_9 == ((void*)0) )
        return ((void*)0);

    bo_t VAR_10;
    if( !FUNC_7( &VAR_10, 8 ) )
        return ((void*)0);

    for( subpicture_region_t *VAR_11 = VAR_9->p_region;
                              VAR_11; VAR_11 = VAR_11->p_next )
    {
        if( VAR_11->fmt.i_chroma != VAR_7 ||
            VAR_11->p_text == ((void*)0) ||
            VAR_11->p_text->psz_text == ((void*)0) )
            continue;

        size_t VAR_12 = FUNC_9( &VAR_10 );

        FUNC_2( &VAR_10, 0 );
        FUNC_4( &VAR_10, "vttc" );



        FUNC_2( &VAR_10, 0 );
        FUNC_4( &VAR_10, "payl" );

        char VAR_13 = '\0';

        for( const text_segment_t *VAR_14 = VAR_11->p_text;
             VAR_14; VAR_14 = VAR_14->p_next )
        {
            if( VAR_14->psz_text == ((void*)0) )
                continue;

            if( VAR_14->p_ruby )
            {
                FUNC_5( &VAR_10, 6, "<ruby>" );
                for( const text_segment_ruby_t *VAR_15 = VAR_14->p_ruby;
                                                VAR_15; VAR_15 = VAR_15->p_next )
                {
                    FUNC_1( VAR_15->psz_base, &VAR_10, &VAR_13 );
                    FUNC_5( &VAR_10, 4, "<rt>" );
                    FUNC_1( VAR_15->psz_rt, &VAR_10, &VAR_13 );
                    FUNC_5( &VAR_10, 5, "</rt>" );
                }
                FUNC_5( &VAR_10, 7, "</ruby>" );
                continue;
            }

            const text_style_t *VAR_16 = VAR_14->style;
            if( VAR_16 && VAR_16->i_features )
            {
                if( VAR_16->i_features & VAR_1 )
                {
                    if( VAR_16->i_style_flags & VAR_0 )
                        FUNC_5( &VAR_10, 3, "<b>" );
                    if( VAR_16->i_style_flags & VAR_3 )
                        FUNC_5( &VAR_10, 3, "<u>" );
                    if( VAR_16->i_style_flags & VAR_2 )
                        FUNC_5( &VAR_10, 3, "<i>" );
                }
            }

            FUNC_1( VAR_14->psz_text, &VAR_10, &VAR_13 );

            if( VAR_16 && VAR_16->i_features )
            {
                if( VAR_16->i_features & VAR_1 )
                {
                    if( VAR_16->i_style_flags & VAR_0 )
                        FUNC_5( &VAR_10, 4, "</b>" );
                    if( VAR_16->i_style_flags & VAR_3 )
                        FUNC_5( &VAR_10, 4, "</u>" );
                    if( VAR_16->i_style_flags & VAR_2 )
                        FUNC_5( &VAR_10, 4, "</i>" );
                }
            }
        }

        FUNC_8( &VAR_10, VAR_12 + 8, FUNC_9( &VAR_10 ) - VAR_12 - 8 );



        if( (VAR_11->i_text_align & (VAR_4|VAR_5)) ||
                (VAR_11->i_align & VAR_6) )
        {
            size_t VAR_17 = FUNC_9( &VAR_10 );

            FUNC_2( &VAR_10, 0 );
            FUNC_4( &VAR_10, "sttg" );

            if( VAR_11->i_text_align & VAR_4 )
                FUNC_5( &VAR_10, 10, "align:left" );
            else if( VAR_11->i_text_align & VAR_5 )
                FUNC_5( &VAR_10, 11, "align:right" );

            if( VAR_11->i_align & VAR_6 )
            {
                float VAR_18 = 100.0;
                if( VAR_9->i_original_picture_height > 0 )
                    VAR_18 = VAR_18 * VAR_11->i_y / VAR_9->i_original_picture_height;
                if( FUNC_9( &VAR_10 ) != VAR_17 + 8 )
                    FUNC_3( &VAR_10, ' ' );
                char *VAR_19;
                int VAR_20 = FUNC_11( &VAR_19, "line:%2.2f%%", VAR_18 );
                if( VAR_20 >= 0 )
                {
                    if( VAR_20 > 0 )
                        FUNC_5( &VAR_10, VAR_20, VAR_19 );
                    FUNC_10( VAR_19 );
                }
            }
            FUNC_8( &VAR_10, VAR_17, FUNC_9( &VAR_10 ) - VAR_17 );
        }


        FUNC_8( &VAR_10, VAR_12, FUNC_9( &VAR_10 ) - VAR_12 );
    }

    if( FUNC_9( &VAR_10 ) == 0 )
    {
        FUNC_2( &VAR_10, 8 );
        FUNC_4( &VAR_10, "vtte" );
    }

    block_t *VAR_21 = VAR_10.b;
    VAR_10.b = ((void*)0);
    FUNC_6( &VAR_10 );

    if( VAR_21 )
    {
        VAR_21->i_pts = VAR_21->i_dts = VAR_9->i_start;
        if( VAR_9->i_stop > VAR_9->i_start )
            VAR_21->i_length = VAR_9->i_stop - VAR_9->i_start;
    }

    return VAR_21;
}
