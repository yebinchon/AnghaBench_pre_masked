
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int b_auto; int value; } ;
struct TYPE_5__ {int b_auto; int value; } ;
struct TYPE_7__ {int b_snap_to_lines; void* align; int psz_region; TYPE_2__ size; void* positionalign; int position; void* linealign; TYPE_1__ line; void* vertical; } ;
typedef TYPE_3__ webvtt_cue_settings_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int *) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int *) ;

__attribute__((used)) static void FUNC_6( webvtt_cue_settings_t *VAR_6,
                                            const char *VAR_7, const char *VAR_8 )
{
    if( !FUNC_3( VAR_7, "vertical" ) )
    {
        if( !FUNC_3( VAR_8, "rl" ) )
            VAR_6->vertical = VAR_4;
        else if( !FUNC_3( VAR_8, "lr" ) )
            VAR_6->vertical = VAR_3;
        else
            VAR_6->vertical = VAR_0;
    }
    else if( !FUNC_3( VAR_7, "line" ) )
    {
        VAR_6->line.b_auto = 0;
        if( FUNC_2( VAR_8, '%' ) )
        {
            FUNC_1( VAR_8, &VAR_6->line.value );
            VAR_6->b_snap_to_lines = 0;
        }
        else
            VAR_6->line.value = FUNC_5( VAR_8, ((void*)0) );


        const char *VAR_9 = FUNC_2( VAR_8, ',' );
        if( VAR_9++ )
        {
            if( !FUNC_3( VAR_9, "center" ) )
                VAR_6->linealign = VAR_1;
            else if( !FUNC_3( VAR_9, "end" ) )
                VAR_6->linealign = VAR_2;
            else
                VAR_6->linealign = VAR_5;
        }
    }
    else if( !FUNC_3( VAR_7, "position" ) )
    {
        FUNC_1( VAR_8, &VAR_6->position );
        const char *VAR_10 = FUNC_2( VAR_8, ',' );
        if( VAR_10++ )
        {
            if( !FUNC_3( VAR_10, "line-left" ) )
                VAR_6->positionalign = VAR_3;
            else if( !FUNC_3( VAR_10, "line-right" ) )
                VAR_6->positionalign = VAR_4;
            else if( !FUNC_3( VAR_10, "center" ) )
                VAR_6->positionalign = VAR_1;
            else
                VAR_6->positionalign = VAR_0;
        }
    }
    else if( !FUNC_3( VAR_7, "size" ) )
    {
        FUNC_1( VAR_8, &VAR_6->size.value );
        VAR_6->size.b_auto = 0;
    }
    else if( !FUNC_3( VAR_7, "region" ) )
    {
        FUNC_0( VAR_6->psz_region );
        VAR_6->psz_region = FUNC_4( VAR_8 );
    }
    else if( !FUNC_3( VAR_7, "align" ) )
    {
        if( !FUNC_3( VAR_8, "start" ) )
            VAR_6->align = VAR_5;
        else if( !FUNC_3( VAR_8, "end" ) )
            VAR_6->align = VAR_2;
        else if( !FUNC_3( VAR_8, "left" ) )
            VAR_6->align = VAR_3;
        else if( !FUNC_3( VAR_8, "right" ) )
            VAR_6->align = VAR_4;
        else
            VAR_6->align = VAR_1;
    }
}
