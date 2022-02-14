
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int granulepos; int b_o_s; unsigned int bytes; void* packet; scalar_t__ packetno; scalar_t__ e_o_s; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_13__ {int i_extra; void* p_extra; } ;
struct TYPE_12__ {int p_extra; int i_extra; } ;
struct TYPE_15__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_16__ {scalar_t__ b_packetizer; } ;
typedef TYPE_5__ decoder_sys_t ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 void* FUNC_4 (void*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned int*,void const**,unsigned int*,int ,int ) ;

__attribute__((used)) static int FUNC_7( decoder_t *VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_4->p_sys;
    ogg_packet VAR_6;

    unsigned VAR_7[VAR_3];
    const void *VAR_8[VAR_3];
    unsigned VAR_9;
    if( FUNC_6( VAR_7, VAR_8, &VAR_9,
                           VAR_4->fmt_in.i_extra, VAR_4->fmt_in.p_extra) )
        return VAR_0;
    if( VAR_9 < 2 )
        return VAR_0;;

    VAR_6.granulepos = -1;
    VAR_6.e_o_s = 0;
    VAR_6.packetno = 0;


    VAR_6.b_o_s = 1;
    VAR_6.bytes = VAR_7[0];
    VAR_6.packet = (void *)VAR_8[0];
    if( FUNC_1( VAR_4, &VAR_6 ) != VAR_2 )
    {
        FUNC_3( VAR_4, "initial Speex header is corrupted" );
        return VAR_0;;
    }


    VAR_6.b_o_s = 0;
    VAR_6.bytes = VAR_7[1];
    VAR_6.packet = (void *)VAR_8[1];
    FUNC_0( VAR_4, &VAR_6 );

    if( VAR_5->b_packetizer )
    {
        void* VAR_10 = FUNC_4( VAR_4->fmt_out.p_extra,
                                 VAR_4->fmt_in.i_extra );
        if( FUNC_5( VAR_10 == ((void*)0) ) )
        {
            return VAR_1;
        }
        VAR_4->fmt_out.p_extra = VAR_10;
        VAR_4->fmt_out.i_extra = VAR_4->fmt_in.i_extra;
        FUNC_2( VAR_4->fmt_out.p_extra,
                VAR_4->fmt_in.p_extra, VAR_4->fmt_out.i_extra );
    }

    return VAR_2;
}
