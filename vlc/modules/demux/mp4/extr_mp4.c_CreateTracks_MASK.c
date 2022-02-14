
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp4_track_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {unsigned int i_tracks; int p_root; int * track; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (unsigned int,int) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_4, unsigned VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_4->p_sys;

    if( VAR_0 / VAR_5 < sizeof(mp4_track_t) )
        return VAR_1;

    VAR_6->track = FUNC_2( VAR_5, sizeof(mp4_track_t) );
    if( VAR_6->track == ((void*)0) )
        return VAR_2;
    VAR_6->i_tracks = VAR_5;

    for( unsigned VAR_7=0; VAR_7<VAR_5; VAR_7++ )
    {
        FUNC_1( &VAR_6->track[VAR_7],
                       FUNC_0( VAR_6->p_root, "/moov/trak[%d]", VAR_7 ) );
    }

    return VAR_3;
}
