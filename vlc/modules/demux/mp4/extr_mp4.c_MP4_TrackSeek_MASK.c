
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint32_t ;
struct TYPE_6__ {int b_selected; int i_track_ID; int b_ok; } ;
typedef TYPE_1__ mp4_track_t ;
typedef int demux_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_2, mp4_track_t *VAR_3,
                          vlc_tick_t VAR_4 )
{
    uint32_t VAR_5;
    uint32_t VAR_6;

    if( !VAR_3->b_ok || FUNC_0( VAR_3 ) )
        return VAR_0;

    VAR_3->b_selected = 0;

    if( FUNC_2( VAR_2, VAR_3, VAR_4,
                                &VAR_5, &VAR_6 ) )
    {
        FUNC_3( VAR_2, "cannot select track[Id 0x%x]",
                  VAR_3->i_track_ID );
        return VAR_0;
    }

    VAR_3->b_selected = 1;
    if( !FUNC_1( VAR_2, VAR_3, VAR_5, VAR_6 ) )
        VAR_3->b_selected = 1;

    return VAR_3->b_selected ? VAR_1 : VAR_0;
}
