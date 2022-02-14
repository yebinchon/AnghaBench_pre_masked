
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_chroma; int i_bmask; int i_gmask; int i_rmask; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_6__ {scalar_t__ i_chroma; int i_chroma_id; int i_bmask; int i_gmask; int i_rmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1( video_format_t *VAR_3, int VAR_4 )
{
    for( int VAR_5 = 0; VAR_2[VAR_5].i_chroma != 0; VAR_5++ )
    {
        if( VAR_2[VAR_5].i_chroma_id == VAR_4 )
        {
            VAR_3->i_rmask = VAR_2[VAR_5].i_rmask;
            VAR_3->i_gmask = VAR_2[VAR_5].i_gmask;
            VAR_3->i_bmask = VAR_2[VAR_5].i_bmask;
            VAR_3->i_chroma = VAR_2[VAR_5].i_chroma;
            FUNC_0( VAR_3 );
            return VAR_1;
        }
    }
    return VAR_0;
}
