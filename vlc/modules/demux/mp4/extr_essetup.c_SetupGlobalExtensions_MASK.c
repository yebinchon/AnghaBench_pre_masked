
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_bitrate; } ;
struct TYPE_6__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ mp4_track_t ;
struct TYPE_7__ {int i_avg_bitrate; } ;
typedef int MP4_Box_t ;


 TYPE_4__* FUNC_0 (int const*) ;
 int * FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2( mp4_track_t *VAR_0, MP4_Box_t *VAR_1 )
{
    if( !VAR_0->fmt.i_bitrate )
    {
        const MP4_Box_t *VAR_2 = FUNC_1( VAR_1, "btrt" );
        if( VAR_2 && FUNC_0(VAR_2) )
        {
            VAR_0->fmt.i_bitrate = FUNC_0(VAR_2)->i_avg_bitrate;
        }
    }
}
