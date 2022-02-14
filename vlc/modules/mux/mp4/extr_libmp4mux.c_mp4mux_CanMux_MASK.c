
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
struct TYPE_3__ {int i_codec; int i_extra; } ;
typedef TYPE_1__ es_format_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;

bool FUNC_2(vlc_object_t *VAR_1, const es_format_t *VAR_2,
                   vlc_fourcc_t VAR_3, bool VAR_4)
{
    switch(VAR_2->i_codec)
    {
    case 156:
    case 152:
    case 151:
    case 142:
    case 141:
    case 140:
    case 143:
    case 139:
    case 144:
    case 145:
    case 147:
    case 146:
    case 136:
    case 135:
    case 150:
    case 155:
    case 154:
    case 128:
    case 129:
    case 132:
    case 130:
    case 153:
        break;
    case 149:
        if(!VAR_2->i_extra && VAR_1)
            FUNC_1(VAR_1, "H264 muxing from AnnexB source will set an incorrect default profile");
        break;
    case 148:
        if(!VAR_2->i_extra)
        {
            if(VAR_1)
                FUNC_0(VAR_1, "HEVC muxing from AnnexB source is unsupported");
            return 0;
        }
        break;
    case 137:
        if(VAR_1)
            FUNC_1(VAR_1, "subtitle track added like in .mov (even when creating .mp4)");
        return !VAR_4;
    case 134:


            return VAR_3 == VAR_0;
    case 138:
    case 133:
    case 131:
        return !VAR_4;
    default:
        return 0;
    }
    return 1;
}
