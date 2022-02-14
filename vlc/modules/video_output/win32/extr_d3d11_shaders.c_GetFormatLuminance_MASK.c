
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int transfer; } ;
typedef TYPE_1__ video_format_t ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;






 int FUNC_0 (int *,char*,int) ;

float FUNC_1(vlc_object_t *VAR_3, const video_format_t *VAR_4)
{
    switch (VAR_4->transfer)
    {
        case 129:

            return VAR_2;
        case 130:
            return VAR_1;
        case 133:
        case 132:
        case 131:
        case 128:
            return VAR_0;
        default:
            FUNC_0(VAR_3, "unhandled source transfer %d", VAR_4->transfer);
            return VAR_0;
    }
}
