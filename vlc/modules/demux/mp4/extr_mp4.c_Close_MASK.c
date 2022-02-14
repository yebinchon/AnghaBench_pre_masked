
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {unsigned int i_tracks; struct TYPE_8__* track; int p_fragsindex; scalar_t__ p_meta; scalar_t__ p_title; int p_root; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8 ( vlc_object_t * VAR_0 )
{
    demux_t * VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    unsigned int VAR_3;

    FUNC_5( VAR_1, "freeing all memory" );

    FUNC_0( VAR_2 );

    FUNC_1( VAR_2->p_root );

    if( VAR_2->p_title )
        FUNC_6( VAR_2->p_title );

    if( VAR_2->p_meta )
        FUNC_7( VAR_2->p_meta );

    FUNC_2( VAR_2->p_fragsindex );

    for( VAR_3 = 0; VAR_3 < VAR_2->i_tracks; VAR_3++ )
        FUNC_3( VAR_1->out, &VAR_2->track[VAR_3] );
    FUNC_4( VAR_2->track );

    FUNC_4( VAR_2 );
}
