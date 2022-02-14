
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int int64_t ;
struct TYPE_3__ {int i_samplesize; int i_scale; int i_rate; } ;
typedef TYPE_1__ avi_track_t ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static vlc_tick_t FUNC_1( avi_track_t *VAR_1, int64_t VAR_2 )
{
    vlc_tick_t VAR_3 = 0;

    if( !VAR_1->i_rate )
        return 0;

    if( !VAR_1->i_scale )
        return 0;

    VAR_3 = FUNC_0( VAR_0 * VAR_2, VAR_1->i_rate, VAR_1->i_scale );

    if( VAR_1->i_samplesize )
    {
        return VAR_3 / VAR_1->i_samplesize;
    }
    return VAR_3;
}
