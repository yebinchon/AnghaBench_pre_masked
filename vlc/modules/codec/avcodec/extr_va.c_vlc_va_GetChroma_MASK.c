
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef enum PixelFormat { ____Placeholder_PixelFormat } PixelFormat ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

vlc_fourcc_t FUNC_0(enum PixelFormat VAR_9, enum PixelFormat VAR_10)
{



    switch (VAR_9)
    {
        case 136:
            switch (VAR_10)
            {
                case 130:
                case 134:
                    return VAR_4;
                case 133:
                    return VAR_5;
                default:
                    return 0;
            }
        case 137:
            switch (VAR_10)
            {
                case 133:
                    return VAR_3;
                case 130:
                case 134:
                    return VAR_2;
                default:
                    return 0;
            }
            break;

        case 138:
            switch (VAR_10)
            {
                case 133:
                    return VAR_1;
                case 130:
                case 134:
                    return VAR_0;
                default:
                    return 0;
            }
        break;

        case 135:
            switch (VAR_10)
            {
                case 128:
                case 131:
                    return VAR_8;
                case 129:
                case 132:
                    return VAR_7;
                case 130:
                case 134:
                    return VAR_6;
                default:
                    return 0;
            }
            break;
        default:
            return 0;
    }
}
