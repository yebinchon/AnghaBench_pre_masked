
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int orientation; } ;
struct TYPE_5__ {scalar_t__ i_cat; TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
typedef enum video_orientation_t { ____Placeholder_video_orientation_t } video_orientation_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;



 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(es_format_t *VAR_2, uint32_t VAR_3[9])
{
    enum video_orientation_t VAR_4 = VAR_0;
    if (VAR_2->i_cat == VAR_1)
        VAR_4 = VAR_2->video.orientation;







    switch (VAR_4) {
    case 128: do { VAR_3[1] = ((uint32_t)(1)) << 16; VAR_3[0] = ((uint32_t)(0)) << 16; } while(0); break;
    case 130: do { VAR_3[1] = ((uint32_t)(0)) << 16; VAR_3[0] = ((uint32_t)(-1)) << 16; } while(0); break;
    case 129: do { VAR_3[1] = ((uint32_t)(-1)) << 16; VAR_3[0] = ((uint32_t)(0)) << 16; } while(0); break;
    default: do { VAR_3[1] = ((uint32_t)(0)) << 16; VAR_3[0] = ((uint32_t)(1)) << 16; } while(0); break;
    }

    VAR_3[3] = VAR_3[0] ? 0 : 0x10000;
    VAR_3[4] = VAR_3[1] ? 0 : 0x10000;
}
