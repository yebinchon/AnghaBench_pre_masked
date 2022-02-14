
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int color_range; int space; int transfer; int primaries; int chroma_location; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_6__ {int chroma_sample_location; int color_primaries; void* color_trc; int colorspace; int color_range; } ;
typedef TYPE_2__ AVCodecContext ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
__attribute__((used)) static inline void FUNC_0( const video_format_t *VAR_27, AVCodecContext *VAR_28 )
{
    switch( VAR_27->color_range )
    {
    case 140:
        VAR_28->color_range = VAR_13;
        break;
    case 139:
        VAR_28->color_range = VAR_14;
    case 138:
        break;
    default:
        VAR_28->color_range = VAR_15;
        break;
    }

    switch( VAR_27->space )
    {
        case 135:
            VAR_28->colorspace = VAR_18;
            break;
        case 136:
            VAR_28->colorspace = VAR_17;
            break;
        case 137:
            VAR_28->colorspace = VAR_16;
            break;
        default:
            VAR_28->colorspace = VAR_19;
            break;
    }

    switch( VAR_27->transfer )
    {
        case 131:
            VAR_28->color_trc = VAR_23;
            break;
        case 128:
            VAR_28->color_trc = VAR_21;
            break;
        case 134:
            VAR_28->color_trc = VAR_22;
            break;
        case 133:
            VAR_28->color_trc = VAR_21;
            break;
        case 132:
            VAR_28->color_trc = VAR_20;
            break;
        case 129:
            VAR_28->color_trc = VAR_25;
            break;
        case 130:
            VAR_28->color_trc = VAR_24;
            break;
        default:
            VAR_28->color_trc = VAR_26;
            break;
    }
    switch( VAR_27->primaries )
    {
        case 144:
            VAR_28->color_primaries = VAR_11;
            break;
        case 143:
            VAR_28->color_primaries = VAR_8;
            break;
        case 142:
            VAR_28->color_primaries = VAR_10;
            break;
        case 145:
            VAR_28->color_primaries = VAR_7;
            break;
        case 141:
            VAR_28->color_primaries = VAR_9;
            break;
        default:
            VAR_28->color_primaries = VAR_12;
            break;
    }
    switch( VAR_27->chroma_location )
    {
        case 148:
            VAR_28->chroma_sample_location = VAR_3;
            break;
        case 149:
            VAR_28->chroma_sample_location = VAR_2;
            break;
        case 146:
            VAR_28->chroma_sample_location = VAR_5;
            break;
        case 147:
            VAR_28->chroma_sample_location = VAR_4;
            break;
        case 150:
            VAR_28->chroma_sample_location = VAR_1;
            break;
        case 151:
            VAR_28->chroma_sample_location = VAR_0;
            break;
        default:
            VAR_28->chroma_sample_location = VAR_6;
            break;
    }
}
