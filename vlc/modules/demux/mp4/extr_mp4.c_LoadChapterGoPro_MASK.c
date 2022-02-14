
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_time_offset; int psz_name; } ;
typedef TYPE_1__ seekpoint_t ;
struct TYPE_10__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {TYPE_5__* p_title; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_13__ {unsigned int i_chapter_count; int * pi_chapter_start; } ;
struct TYPE_12__ {int seekpoint; int i_seekpoint; } ;
typedef int MP4_Box_t ;


 TYPE_8__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 TYPE_5__* FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;

__attribute__((used)) static void FUNC_7( demux_t *VAR_0, MP4_Box_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    VAR_2->p_title = FUNC_5();
    if( VAR_2->p_title )
        for( unsigned VAR_3 = 0; VAR_3 < FUNC_0(VAR_1)->i_chapter_count; VAR_3++ )
        {
            seekpoint_t *VAR_4 = FUNC_6();
            if( VAR_4 )
            {
                if( FUNC_4( &VAR_4->psz_name, "HiLight tag #%u", VAR_3+1 ) != -1 )
                    FUNC_1( VAR_4->psz_name );


                VAR_4->i_time_offset = FUNC_3( FUNC_0(VAR_1)->pi_chapter_start[VAR_3] );
                FUNC_2( VAR_2->p_title->i_seekpoint, VAR_2->p_title->seekpoint, VAR_4 );
            }
        }
}
