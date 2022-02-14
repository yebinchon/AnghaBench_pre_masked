
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int i_time_offset; int * psz_name; } ;
typedef TYPE_2__ seekpoint_t ;
typedef int msftime_t ;
struct TYPE_14__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_15__ {TYPE_7__* p_title; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_16__ {int seekpoint; int i_seekpoint; } ;
struct TYPE_12__ {int i_start; int psz_name; } ;
struct TYPE_11__ {int i_chapter; TYPE_1__* chapter; } ;
typedef int MP4_Box_t ;


 TYPE_10__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 TYPE_7__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 () ;

__attribute__((used)) static void FUNC_8( demux_t *VAR_0, MP4_Box_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    if( FUNC_0(VAR_1)->i_chapter == 0 )
        return;

    VAR_2->p_title = FUNC_5();
    for( int VAR_3 = 0; VAR_3 < FUNC_0(VAR_1)->i_chapter && VAR_2->p_title; VAR_3++ )
    {
        seekpoint_t *VAR_4 = FUNC_7();
        if( VAR_4 == ((void*)0)) continue;

        VAR_4->psz_name = FUNC_4( FUNC_0(VAR_1)->chapter[VAR_3].psz_name );
        if( VAR_4->psz_name == ((void*)0))
        {
            FUNC_6( VAR_4 );;
            continue;
        }

        FUNC_1( VAR_4->psz_name );
        msftime_t VAR_5 = FUNC_0(VAR_1)->chapter[VAR_3].i_start;
        VAR_4->i_time_offset = FUNC_3(VAR_5);
        FUNC_2( VAR_2->p_title->i_seekpoint, VAR_2->p_title->seekpoint, VAR_4 );
    }
}
