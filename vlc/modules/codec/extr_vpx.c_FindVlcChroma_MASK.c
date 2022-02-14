
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef scalar_t__ uint8_t ;
struct vpx_image {int fmt; scalar_t__ cs; scalar_t__ bit_depth; } ;
struct TYPE_3__ {int i_chroma_id; scalar_t__ i_bitdepth; scalar_t__ i_needs_hack; int i_chroma; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static vlc_fourcc_t FUNC_1( struct vpx_image *VAR_3 )
{
    uint8_t VAR_4 = (VAR_3->fmt & VAR_1) && (VAR_3->cs == VAR_0);

    for( unsigned int VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++ )
        if( VAR_2[VAR_5].i_chroma_id == VAR_3->fmt &&
            VAR_2[VAR_5].i_bitdepth == VAR_3->bit_depth &&
            VAR_2[VAR_5].i_needs_hack == VAR_4 )
            return VAR_2[VAR_5].i_chroma;

    return 0;
}
