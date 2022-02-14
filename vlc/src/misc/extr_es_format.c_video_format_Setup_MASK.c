
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_3__ {int i_chroma; int i_width; int i_visible_width; int i_height; int i_visible_height; int i_bits_per_pixel; int i_sar_den; int i_sar_num; scalar_t__ i_y_offset; scalar_t__ i_x_offset; } ;
typedef TYPE_1__ video_format_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int,int,int ) ;

void FUNC_2( video_format_t *VAR_1, vlc_fourcc_t VAR_2,
                         int VAR_3, int VAR_4,
                         int VAR_5, int VAR_6,
                         int VAR_7, int VAR_8 )
{
    VAR_1->i_chroma = FUNC_0( VAR_0, VAR_2 );
    VAR_1->i_width = VAR_3;
    VAR_1->i_visible_width = VAR_5;
    VAR_1->i_height = VAR_4;
    VAR_1->i_visible_height = VAR_6;
    VAR_1->i_x_offset =
    VAR_1->i_y_offset = 0;
    FUNC_1( &VAR_1->i_sar_num, &VAR_1->i_sar_den,
                 VAR_7, VAR_8, 0 );

    switch( VAR_1->i_chroma )
    {
    case 133:
        VAR_1->i_bits_per_pixel = 32;
        break;
    case 135:
        VAR_1->i_bits_per_pixel = 20;
        break;
    case 134:
        VAR_1->i_bits_per_pixel = 24;
        break;
    case 154:
    case 150:
        VAR_1->i_bits_per_pixel = 24;
        break;
    case 156:
    case 131:
    case 128:
    case 139:
    case 138:
    case 152:
        VAR_1->i_bits_per_pixel = 16;
        break;
    case 155:
    case 151:
        VAR_1->i_bits_per_pixel = 16;
        break;
    case 148:
        VAR_1->i_bits_per_pixel = 15;
        break;
    case 147:
        VAR_1->i_bits_per_pixel = 20;
        break;
    case 158:
    case 130:
    case 157:
    case 153:
    case 149:
        VAR_1->i_bits_per_pixel = 12;
        break;
    case 129:
    case 159:
        VAR_1->i_bits_per_pixel = 9;
        break;
    case 136:
        VAR_1->i_bits_per_pixel = 8;
        break;
    case 132:
        VAR_1->i_bits_per_pixel = 8;
        break;

    case 143:
    case 141:
    case 166:
    case 165:
        VAR_1->i_bits_per_pixel = 32;
        break;
    case 144:
        VAR_1->i_bits_per_pixel = 24;
        break;
    case 146:
    case 145:
        VAR_1->i_bits_per_pixel = 16;
        break;
    case 142:
        VAR_1->i_bits_per_pixel = 8;
        break;

    case 164:
    case 140:
        VAR_1->i_bits_per_pixel = 8;
        break;

    case 163:
    case 162:
        VAR_1->i_bits_per_pixel = 10;
        break;

    case 161:
    case 160:
        VAR_1->i_bits_per_pixel = 12;
        break;

    case 137:
        VAR_1->i_bits_per_pixel = 48;
        break;

    default:
        VAR_1->i_bits_per_pixel = 0;
        break;
    }
}
