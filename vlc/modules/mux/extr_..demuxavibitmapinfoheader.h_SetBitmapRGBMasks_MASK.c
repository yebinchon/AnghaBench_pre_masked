
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_7__ {scalar_t__ i_chroma; int i_bmask; int i_gmask; int i_rmask; } ;
struct TYPE_6__ {TYPE_2__ video; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_8__ {scalar_t__ codec; int i_bmask; int i_gmask; int i_rmask; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_2( vlc_fourcc_t VAR_1, es_format_t *VAR_2 )
{
    for( size_t VAR_3=0; VAR_3<FUNC_0(VAR_0); VAR_3++ )
    {
        if( VAR_0[VAR_3].codec == VAR_1 )
        {
            VAR_2->video.i_rmask = VAR_0[VAR_3].i_rmask;
            VAR_2->video.i_gmask = VAR_0[VAR_3].i_gmask;
            VAR_2->video.i_bmask = VAR_0[VAR_3].i_bmask;
            VAR_2->video.i_chroma = VAR_1;
            FUNC_1( &VAR_2->video );
            break;
        }
    }
}
