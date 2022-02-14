
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_rmask; scalar_t__ i_gmask; scalar_t__ i_bmask; } ;
struct TYPE_7__ {scalar_t__ i_codec; TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_8__ {scalar_t__ codec; scalar_t__ i_rmask; scalar_t__ i_gmask; scalar_t__ i_bmask; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static inline bool FUNC_1( const es_format_t *VAR_1 )
{
    for( size_t VAR_2=0; VAR_2<FUNC_0(VAR_0); VAR_2++ )
    {
        if( VAR_0[VAR_2].codec == VAR_1->i_codec )
        {
            return VAR_1->video.i_rmask == VAR_0[VAR_2].i_rmask &&
                   VAR_1->video.i_gmask == VAR_0[VAR_2].i_gmask &&
                   VAR_1->video.i_bmask == VAR_0[VAR_2].i_bmask;
        }
    }
    return 0;
}
