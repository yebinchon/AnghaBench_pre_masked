
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_chroma; scalar_t__ i_rmask; scalar_t__ i_gmask; scalar_t__ i_bmask; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_5__ {scalar_t__ i_chroma; scalar_t__ i_rmask; scalar_t__ i_gmask; scalar_t__ i_bmask; int i_chroma_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

int FUNC_0( int *restrict VAR_3, const video_format_t *VAR_4 )
{
    for( int VAR_5 = 0; VAR_2[VAR_5].i_chroma != 0; VAR_5++ )
    {
        if( VAR_2[VAR_5].i_chroma == VAR_4->i_chroma )
        {
            if( ( VAR_2[VAR_5].i_rmask == 0 &&
                  VAR_2[VAR_5].i_gmask == 0 &&
                  VAR_2[VAR_5].i_bmask == 0 ) ||
                ( VAR_2[VAR_5].i_rmask == VAR_4->i_rmask &&
                  VAR_2[VAR_5].i_gmask == VAR_4->i_gmask &&
                  VAR_2[VAR_5].i_bmask == VAR_4->i_bmask ) )
            {
                *VAR_3 = VAR_2[VAR_5].i_chroma_id;
                return VAR_1;
            }
        }
    }
    return VAR_0;
}
