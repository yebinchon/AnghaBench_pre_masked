
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_15__ {int i_sar_den; int i_sar_num; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_16__ {int b_ephemer; int b_absolute; TYPE_7__* p_region; scalar_t__ i_stop; scalar_t__ i_start; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_17__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_18__ {scalar_t__ last_time; scalar_t__ i_refresh; char* format; char* message; scalar_t__ i_timeout; int i_pos; int lock; int p_style; int i_yoff; int i_xoff; int * filepath; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_20__ {int i_align; TYPE_6__* p_text; int i_y; int i_x; } ;
struct TYPE_19__ {int style; } ;


 char* FUNC_0 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_7__* FUNC_5 (TYPE_1__*) ;
 TYPE_6__* FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static subpicture_t *FUNC_13( filter_t *VAR_3, vlc_tick_t VAR_4 )
{
    filter_sys_t *VAR_5 = VAR_3->p_sys;
    subpicture_t *VAR_6 = ((void*)0);

    FUNC_10( &VAR_5->lock );
    if( VAR_5->last_time + VAR_5->i_refresh > VAR_4 )
        goto out;

    if( VAR_5->filepath != ((void*)0) )
    {
        char *VAR_7 = FUNC_0( VAR_3, VAR_5->filepath );
        if( VAR_7 != ((void*)0) )
        {
            FUNC_2( VAR_5->format );
            VAR_5->format = VAR_7;
        }
    }

    char *VAR_8 = FUNC_12( VAR_5->format ? VAR_5->format : "" );
    if( FUNC_8( VAR_8 == ((void*)0) ) )
        goto out;
    if( VAR_5->message != ((void*)0) && !FUNC_3( VAR_8, VAR_5->message ) )
    {
        FUNC_2( VAR_8 );
        goto out;
    }
    FUNC_2( VAR_5->message );
    VAR_5->message = VAR_8;

    VAR_6 = FUNC_1( VAR_3 );
    if( !VAR_6 )
        goto out;

    video_format_t VAR_9;
    FUNC_9( &VAR_9, VAR_2 );
    VAR_9.i_sar_den = VAR_9.i_sar_num = 1;
    VAR_6->p_region = FUNC_5( &VAR_9 );
    if( !VAR_6->p_region )
    {
        FUNC_4( VAR_6 );
        VAR_6 = ((void*)0);
        goto out;
    }

    VAR_5->last_time = VAR_4;

    VAR_6->p_region->p_text = FUNC_6( VAR_8 );
    VAR_6->i_start = VAR_4;
    VAR_6->i_stop = VAR_5->i_timeout == 0 ? 0 : VAR_4 + VAR_5->i_timeout;
    VAR_6->b_ephemer = 1;


    if( VAR_5->i_pos < 0 )
    {
        VAR_6->p_region->i_align = VAR_0 | VAR_1;
        VAR_6->b_absolute = 1;
    }
    else
    {
        VAR_6->p_region->i_align = VAR_5->i_pos;
        VAR_6->b_absolute = 0;
    }

    VAR_6->p_region->i_x = VAR_5->i_xoff;
    VAR_6->p_region->i_y = VAR_5->i_yoff;

    VAR_6->p_region->p_text->style = FUNC_7( VAR_5->p_style );

out:
    FUNC_11( &VAR_5->lock );
    return VAR_6;
}
