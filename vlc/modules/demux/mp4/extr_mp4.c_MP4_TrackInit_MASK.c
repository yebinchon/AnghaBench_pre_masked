
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_timescale; int i_track_ID; int const* p_track; int fmt; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_6__ {int i_track_ID; } ;
typedef int MP4_Box_t ;


 TYPE_4__* FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_5( mp4_track_t *VAR_1, const MP4_Box_t *VAR_2 )
{
    FUNC_4( VAR_1, 0, sizeof(mp4_track_t) );
    FUNC_2( &VAR_1->fmt, VAR_0, 0 );
    VAR_1->i_timescale = 1;
    VAR_1->p_track = VAR_2;
    const MP4_Box_t *VAR_3 = FUNC_1( VAR_2, "tkhd" );
    if(FUNC_3(VAR_3) && FUNC_0(VAR_3))
        VAR_1->i_track_ID = FUNC_0(VAR_3)->i_track_ID;
}
