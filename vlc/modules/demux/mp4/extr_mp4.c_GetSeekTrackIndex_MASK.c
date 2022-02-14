
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int i_tracks; TYPE_2__* track; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_5__ {scalar_t__ i_cat; } ;
struct TYPE_6__ {int b_selected; TYPE_1__ fmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned FUNC_0( demux_sys_t *VAR_2 )
{
    unsigned VAR_3 = 0;
    for( unsigned VAR_4=0; VAR_4<VAR_2->i_tracks; VAR_4++ )
    {
        if( VAR_2->track[VAR_4].fmt.i_cat == VAR_1 ||
            VAR_2->track[VAR_4].fmt.i_cat == VAR_0 )
        {
            if( VAR_3 != VAR_4 && !VAR_2->track[VAR_3].b_selected )
                VAR_3 = VAR_4;
        }
    }
    return VAR_3;
}
