
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int int64_t ;
struct TYPE_3__ {int i_samplesize; int i_rate; int i_scale; } ;
typedef TYPE_1__ avi_track_t ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int64_t FUNC_1( avi_track_t *VAR_1, vlc_tick_t VAR_2 )
{
    if( !VAR_1->i_scale || !VAR_1->i_samplesize )
        return 0;

    VAR_2 = FUNC_0( VAR_2, VAR_1->i_scale, VAR_1->i_rate );
    return VAR_2 / VAR_0 * VAR_1->i_samplesize;
}
