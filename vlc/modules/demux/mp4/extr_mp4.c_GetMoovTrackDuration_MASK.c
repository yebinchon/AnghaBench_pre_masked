
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ stime_t ;
struct TYPE_4__ {scalar_t__ i_moov_duration; int p_moov; } ;
typedef TYPE_1__ demux_sys_t ;
struct TYPE_5__ {scalar_t__ i_sample_count; scalar_t__ i_duration; } ;
typedef int MP4_Box_t ;


 TYPE_3__* FUNC_0 (int const*) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static stime_t FUNC_3( demux_sys_t *VAR_0, unsigned VAR_1 )
{
    MP4_Box_t *VAR_2 = FUNC_2( VAR_0->p_moov, VAR_1 );
    const MP4_Box_t *VAR_3;
    const MP4_Box_t *VAR_4;
    if ( (VAR_4 = FUNC_1( VAR_2, "tkhd" )) &&
         (VAR_3 = FUNC_1( VAR_2, "mdia/minf/stbl/stsz" )) &&

         FUNC_0(VAR_3)->i_sample_count > 0 )
    {
        if( FUNC_0(VAR_4)->i_duration <= VAR_0->i_moov_duration )
            return FUNC_0(VAR_4)->i_duration;
        else
            return VAR_0->i_moov_duration;
    }
    return 0;
}
