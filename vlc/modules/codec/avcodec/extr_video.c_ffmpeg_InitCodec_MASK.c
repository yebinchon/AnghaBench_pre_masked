
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_fast32_t ;
typedef int uint8_t ;
struct TYPE_8__ {size_t i_extra; char* p_extra; } ;
struct TYPE_10__ {TYPE_2__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_11__ {TYPE_3__* p_context; TYPE_1__* p_codec; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_9__ {size_t extradata_size; int * extradata; } ;
struct TYPE_7__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,size_t) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void FUNC_6( decoder_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;
    size_t VAR_4 = VAR_2->fmt_in.i_extra;

    if( !VAR_4 ) return;

    if( VAR_3->p_codec->id == VAR_0 )
    {
        uint8_t *VAR_5;

        VAR_3->p_context->extradata_size = VAR_4 + 12;
        VAR_5 = VAR_3->p_context->extradata =
            FUNC_1( VAR_3->p_context->extradata_size +
                       VAR_1 );
        if( !VAR_5 )
            return;

        FUNC_2( &VAR_5[0], "SVQ3", 4 );
        FUNC_4( &VAR_5[4], 0, 8 );
        FUNC_2( &VAR_5[12], VAR_2->fmt_in.p_extra, VAR_4 );


        if( VAR_3->p_context->extradata_size > 0x5a &&
            FUNC_5( (char*)&VAR_5[0x56], "SMI ", 4 ) )
        {
            uint8_t *VAR_6 = &VAR_5[0x52];

            while( VAR_6 < &VAR_5[VAR_3->p_context->extradata_size - 8] )
            {
                uint_fast32_t VAR_7 = FUNC_0( VAR_6 );
                if( VAR_7 <= 1 )
                {

                    break;
                }
                if( !FUNC_5( (char*)&VAR_6[4], "SMI ", 4 ) )
                {
                    FUNC_3( &VAR_5[0x52], VAR_6,
                             &VAR_5[VAR_3->p_context->extradata_size] - VAR_6 );
                    break;
                }

                VAR_6 += VAR_7;
            }
        }
    }
    else
    {
        VAR_3->p_context->extradata_size = VAR_4;
        VAR_3->p_context->extradata =
            FUNC_1( VAR_4 + VAR_1 );
        if( VAR_3->p_context->extradata )
        {
            FUNC_2( VAR_3->p_context->extradata,
                    VAR_2->fmt_in.p_extra, VAR_4 );
            FUNC_4( VAR_3->p_context->extradata + VAR_4,
                    0, VAR_1 );
        }
    }
}
