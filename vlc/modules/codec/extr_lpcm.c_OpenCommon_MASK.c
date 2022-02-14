
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int i_bitspersample; } ;
struct TYPE_10__ {int i_codec; TYPE_2__ audio; } ;
struct TYPE_8__ {int i_codec; } ;
struct TYPE_11__ {int pf_flush; int pf_packetize; int pf_decode; TYPE_3__ fmt_out; TYPE_5__* p_sys; TYPE_1__ fmt_in; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_12__ {int b_packetizer; int i_type; int i_header_size; scalar_t__ i_chans_to_reorder; int end_date; } ;
typedef TYPE_5__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3( decoder_t *VAR_13, bool VAR_14 )
{
    decoder_sys_t *VAR_15;
    int VAR_16;
    int VAR_17;

    switch( VAR_13->fmt_in.i_codec )
    {

    case 129:
        VAR_16 = 133;
        VAR_17 = VAR_4;
        break;

    case 130:
        VAR_16 = 135;
        VAR_17 = VAR_2;
        break;

    case 131:
        VAR_16 = 134;
        VAR_17 = VAR_3;
        break;

    case 128:
        VAR_16 = 132;
        VAR_17 = VAR_5;
        break;
    default:
        return VAR_9;
    }


    if( ( VAR_13->p_sys = VAR_15 = FUNC_1(sizeof(decoder_sys_t)) ) == ((void*)0) )
        return VAR_10;


    VAR_15->b_packetizer = VAR_14;
    FUNC_0( &VAR_15->end_date, VAR_12 );
    VAR_15->i_type = VAR_16;
    VAR_15->i_header_size = VAR_17;
    VAR_15->i_chans_to_reorder = 0;


    if( VAR_14 )
    {
        switch( VAR_16 )
        {
        case 133:
            VAR_13->fmt_out.i_codec = 129;
            break;
        case 135:
            VAR_13->fmt_out.i_codec = 130;
            break;
        case 132:
            VAR_13->fmt_out.i_codec = 128;
            break;
        default:
            FUNC_2();
        case 134:
            VAR_13->fmt_out.i_codec = 131;
            break;
        }
    }
    else
    {
        switch( VAR_13->fmt_out.audio.i_bitspersample )
        {
        case 24:
        case 20:
            VAR_13->fmt_out.i_codec = VAR_8;
            VAR_13->fmt_out.audio.i_bitspersample = 32;
            break;
        default:
            VAR_13->fmt_out.i_codec = VAR_7;
            VAR_13->fmt_out.audio.i_bitspersample = 16;
            break;
        }
    }


    if( !VAR_14 )
        VAR_13->pf_decode = VAR_0;
    else
        VAR_13->pf_packetize = VAR_6;
    VAR_13->pf_flush = VAR_1;

    return VAR_11;
}
