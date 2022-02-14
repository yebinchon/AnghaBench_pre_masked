
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int int64_t ;
struct TYPE_3__ {int hour; int minute; int second; int frame_u; } ;
typedef TYPE_1__ dvd_time_t ;


 double FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static vlc_tick_t FUNC_3( dvd_time_t *VAR_0 )
{



    double VAR_1, VAR_2;

    int64_t VAR_3 = (int64_t)((((VAR_0->hour & 0xf0) >> 4) * 10 + (VAR_0->hour & 0x0f))) * 60 * 60;
    VAR_3 += (int64_t)((((VAR_0->minute & 0xf0) >> 4) * 10 + (VAR_0->minute & 0x0f))) * 60;
    VAR_3 += (int64_t)((((VAR_0->second & 0xf0) >> 4) * 10 + (VAR_0->second & 0x0f)));

    switch((VAR_0->frame_u & 0xc0) >> 6)
    {
    case 1:
        VAR_1 = 25.0;
        break;
    case 3:
        VAR_1 = 29.97;
        break;
    default:
        VAR_1 = 2500.0;
        break;
    }
    VAR_2 = (((VAR_0->frame_u&0x3f & 0xf0) >> 4) * 10 + (VAR_0->frame_u&0x3f & 0x0f)) * 1000.0 / VAR_1;
    return FUNC_2(VAR_3) + FUNC_1(VAR_2);
}
