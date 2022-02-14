
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int i_bits_per_pixel; } ;
struct TYPE_8__ {int i_codec; TYPE_1__ video; } ;
struct TYPE_10__ {TYPE_2__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ encoder_t ;
struct TYPE_11__ {TYPE_3__* p_format; } ;
typedef TYPE_5__ encoder_sys_t ;
struct TYPE_9__ {int chroma_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static bool FUNC_0( encoder_t *VAR_3, uint32_t VAR_4 )
{
    encoder_sys_t *VAR_5 = VAR_3->p_sys;

    switch( VAR_4 ) {
    case 130:
        VAR_3->fmt_in.i_codec = VAR_4;
        VAR_3->fmt_in.video.i_bits_per_pixel = 12;
        VAR_5->p_format->chroma_format = VAR_0;
           break;
    case 129:
        VAR_3->fmt_in.i_codec = VAR_4;
        VAR_3->fmt_in.video.i_bits_per_pixel = 16;
        VAR_5->p_format->chroma_format = VAR_1;
        break;
    case 128:
        VAR_3->fmt_in.i_codec = VAR_4;
        VAR_3->fmt_in.video.i_bits_per_pixel = 24;
        VAR_5->p_format->chroma_format = VAR_2;
        break;
    default:
        return 0;
    }

    return 1;
}
