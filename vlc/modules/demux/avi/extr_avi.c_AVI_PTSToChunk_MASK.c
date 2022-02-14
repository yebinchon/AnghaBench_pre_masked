
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int int64_t ;
struct TYPE_3__ {int i_rate; int i_scale; } ;
typedef TYPE_1__ avi_track_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int64_t FUNC_2( avi_track_t *VAR_0, vlc_tick_t VAR_1 )
{
    if( !VAR_0->i_scale )
        return 0;

    VAR_1 = FUNC_0( VAR_1, VAR_0->i_scale, VAR_0->i_rate );
    return FUNC_1(VAR_1);
}
