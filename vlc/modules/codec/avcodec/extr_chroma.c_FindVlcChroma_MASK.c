
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_2__ {scalar_t__ i_chroma; int i_chroma_id; } ;


 TYPE_1__* VAR_0 ;

vlc_fourcc_t FUNC_0( int VAR_1 )
{
    for( int VAR_2 = 0; VAR_0[VAR_2].i_chroma != 0; VAR_2++ )
        if( VAR_0[VAR_2].i_chroma_id == VAR_1 )
            return VAR_0[VAR_2].i_chroma;
    return 0;
}
