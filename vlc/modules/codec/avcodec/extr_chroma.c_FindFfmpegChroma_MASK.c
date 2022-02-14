
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_2__ {scalar_t__ i_chroma; int i_chroma_id; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0( vlc_fourcc_t VAR_2 )
{
    for( int VAR_3 = 0; VAR_1[VAR_3].i_chroma != 0; VAR_3++ )
        if( VAR_1[VAR_3].i_chroma == VAR_2 )
            return VAR_1[VAR_3].i_chroma_id;
    return VAR_0;
}
