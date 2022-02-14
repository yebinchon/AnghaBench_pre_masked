
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_scroll_up; int i_lines_max_scroll; int viewport_anchor_y; int viewport_anchor_x; int anchor_y; int anchor_x; int f_width; int psz_id; } ;
typedef TYPE_1__ webvtt_region_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const*,int *,int *) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7( webvtt_region_t *VAR_1,
                                      const char *VAR_2, const char *VAR_3 )
{
    if( !FUNC_5( VAR_2, "id" ) )
    {
        FUNC_2( VAR_1->psz_id );
        VAR_1->psz_id = FUNC_6( VAR_3 );
    }
    else if( !FUNC_5( VAR_2, "width" ) )
    {
        FUNC_3( VAR_3, &VAR_1->f_width );
    }
    else if( !FUNC_5( VAR_2, "regionanchor" ) )
    {
        FUNC_4( VAR_3, &VAR_1->anchor_x,
                                        &VAR_1->anchor_y );
    }
    else if( !FUNC_5( VAR_2, "viewportanchor" ) )
    {
        FUNC_4( VAR_3, &VAR_1->viewport_anchor_x,
                                        &VAR_1->viewport_anchor_y );
    }
    else if( !FUNC_5( VAR_2, "lines" ) )
    {
        int VAR_4 = FUNC_1( VAR_3 );
        if( VAR_4 > 0 )
            VAR_1->i_lines_max_scroll = FUNC_0(VAR_4, VAR_0);
    }
    else if( !FUNC_5( VAR_2, "scroll" ) )
    {
        VAR_1->b_scroll_up = !FUNC_5( VAR_3, "up" );
    }
}
