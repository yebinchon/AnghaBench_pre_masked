
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int p_pattern ;
struct TYPE_6__ {int i_extra; int* p_extra; scalar_t__ i_codec; } ;
struct TYPE_7__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_8__ {int* extradata; int extradata_size; } ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_2, AVCodecContext *VAR_3 )
{
    if( VAR_2->fmt_in.i_extra > 0 )
    {
        const uint8_t * const VAR_4 = VAR_2->fmt_in.p_extra;

        int VAR_5 = 0;
        int VAR_6 = VAR_2->fmt_in.i_extra;

        if( VAR_2->fmt_in.i_codec == VAR_1 )
        {
            static const uint8_t VAR_7[] = { 0, 0, 0, 36, 'a', 'l', 'a', 'c' };

            for( VAR_5 = 0; VAR_5 < VAR_6 - (int)sizeof(VAR_7); VAR_5++ )
            {
                if( !FUNC_2( &VAR_4[VAR_5], VAR_7, sizeof(VAR_7) ) )
                    break;
            }
            VAR_6 = FUNC_0( VAR_2->fmt_in.i_extra - VAR_5, 36 );
            if( VAR_6 < 36 )
                VAR_6 = 0;
        }

        if( VAR_6 > 0 )
        {
            VAR_3->extradata =
                FUNC_1( VAR_6 + VAR_0 );
            if( VAR_3->extradata )
            {
                uint8_t *VAR_8 = VAR_3->extradata;

                VAR_3->extradata_size = VAR_6;

                FUNC_3( &VAR_8[0], &VAR_4[VAR_5], VAR_6 );
                FUNC_4( &VAR_8[VAR_6], 0, VAR_0 );
            }
        }
    }
    else
    {
        VAR_3->extradata_size = 0;
        VAR_3->extradata = ((void*)0);
    }
}
