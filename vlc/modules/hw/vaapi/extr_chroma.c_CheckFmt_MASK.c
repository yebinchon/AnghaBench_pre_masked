
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_chroma; } ;
typedef TYPE_1__ video_format_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(const video_format_t *VAR_5, const video_format_t *VAR_6,
                    bool *VAR_7, uint8_t *VAR_8)
{
    *VAR_8 = 1;
    *VAR_7 = 0;
    switch (VAR_5->i_chroma)
    {
        case 129:
            if (VAR_6->i_chroma == VAR_0)
                return VAR_4;
            break;
        case 128:
            if (VAR_6->i_chroma == VAR_2
             || VAR_6->i_chroma == VAR_1)
            {
                *VAR_8 = 2;
                return VAR_4;
            }
            break;
    }

    *VAR_7 = 1;
    switch (VAR_6->i_chroma)
    {
        case 129:
            if (VAR_5->i_chroma == VAR_0)
                return VAR_4;
            break;
        case 128:
            if (VAR_5->i_chroma == VAR_2
             || VAR_5->i_chroma == VAR_1)
            {
                *VAR_8 = 2;
                return VAR_4;
            }
            break;
    }
    return VAR_3;
}
