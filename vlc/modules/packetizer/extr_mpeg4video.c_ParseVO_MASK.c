
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int color_range; int space; int transfer; int primaries; } ;
struct TYPE_12__ {TYPE_3__ video; } ;
struct TYPE_9__ {scalar_t__ primaries; } ;
struct TYPE_10__ {TYPE_1__ video; } ;
struct TYPE_13__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ decoder_t ;
typedef int bs_t ;
struct TYPE_14__ {scalar_t__ i_buffer; int * p_buffer; } ;
typedef TYPE_6__ block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7( decoder_t *VAR_4, block_t *VAR_5 )
{
    bs_t VAR_6;
    FUNC_0( &VAR_6, &VAR_5->p_buffer[4], VAR_5->i_buffer - 4 );
    if( FUNC_2( &VAR_6 ) )
        FUNC_3( &VAR_6, 7 );

    const uint8_t VAR_7 = FUNC_1( &VAR_6, 4 );
    if( VAR_7 == 1 ||
        VAR_7 == 2 )
    {
        uint8_t VAR_8 = 1;
        uint8_t VAR_9 = 1;
        uint8_t VAR_10 = 1;
        uint8_t VAR_11 = 0;
        if( FUNC_2( &VAR_6 ) )
        {
            FUNC_1( &VAR_6, 3 );
            VAR_11 = FUNC_1( &VAR_6, 1 );
            if( FUNC_1( &VAR_6, 1 ) )
            {
                VAR_8 = FUNC_1( &VAR_6, 8 );
                VAR_9 = FUNC_1( &VAR_6, 8 );
                VAR_10 = FUNC_1( &VAR_6, 8 );
            }
        }

        if( VAR_4->fmt_in.video.primaries == VAR_0 )
        {
            VAR_4->fmt_out.video.primaries = FUNC_4( VAR_8 );
            VAR_4->fmt_out.video.transfer = FUNC_6( VAR_9 );
            VAR_4->fmt_out.video.space = FUNC_5( VAR_10 );
            VAR_4->fmt_out.video.color_range = VAR_11 ? VAR_1 : VAR_2;
        }
    }

    return VAR_3;
}
