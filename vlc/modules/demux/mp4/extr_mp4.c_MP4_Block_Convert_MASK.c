
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ i_cat; int i_codec; scalar_t__ i_original_fourcc; } ;
struct TYPE_14__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ mp4_track_t ;
typedef int demux_t ;
struct TYPE_15__ {int i_buffer; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static block_t * FUNC_3( demux_t *VAR_3, const mp4_track_t *VAR_4, block_t *VAR_5 )
{

    if( VAR_4->fmt.i_cat == VAR_1 )
    {
        switch( VAR_4->fmt.i_codec )
        {
            case 128:
            case 130:
            case 133:
            case 129:
            case 132:
            case 131:

            break;
            case 135:
            case 134:
                VAR_5 = FUNC_1( VAR_5 );
            break;
        default:
            VAR_5->i_buffer = 0;
            break;
        }
    }
    else if( VAR_4->fmt.i_codec == VAR_2 )
    {
        VAR_5 = FUNC_0( VAR_5 );
    }
    else if( VAR_4->fmt.i_original_fourcc == VAR_0 )
    {
        VAR_5 = FUNC_2( VAR_3, VAR_5, VAR_4->fmt.i_codec );
    }

    return VAR_5;
}
