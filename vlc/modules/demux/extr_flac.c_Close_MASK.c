
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {int i_seekpoint; int i_attachments; int i_title_seekpoints; scalar_t__ p_meta; scalar_t__ p_packetizer; struct TYPE_8__** pp_title_seekpoints; struct TYPE_8__** attachments; struct TYPE_8__** seekpoint; scalar_t__ p_current_block; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int,TYPE_2__**) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7( vlc_object_t * VAR_0 )
{
    demux_t *VAR_1 = (demux_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_current_block )
        FUNC_1( VAR_2->p_current_block );

    for( int VAR_3 = 0; VAR_3 < VAR_2->i_seekpoint; VAR_3++ )
        FUNC_3(VAR_2->seekpoint[VAR_3]);
    FUNC_0( VAR_2->i_seekpoint, VAR_2->seekpoint );

    for( int VAR_4 = 0; VAR_4 < VAR_2->i_attachments; VAR_4++ )
        FUNC_4( VAR_2->attachments[VAR_4] );
    FUNC_0( VAR_2->i_attachments, VAR_2->attachments);

    for( int VAR_5 = 0; VAR_5 < VAR_2->i_title_seekpoints; VAR_5++ )
        FUNC_6( VAR_2->pp_title_seekpoints[VAR_5] );
    FUNC_0( VAR_2->i_title_seekpoints, VAR_2->pp_title_seekpoints );


    if( VAR_2->p_packetizer )
        FUNC_2( VAR_2->p_packetizer );

    if( VAR_2->p_meta )
        FUNC_5( VAR_2->p_meta );
    FUNC_3( VAR_2 );
}
