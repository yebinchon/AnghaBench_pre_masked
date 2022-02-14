
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dvb_frontend_info {int caps; int symbol_rate_max; int symbol_rate_min; int frequency_max; int frequency_min; } ;
struct TYPE_9__ {int obj; int frontend; } ;
typedef TYPE_3__ dvb_device_t ;
struct TYPE_8__ {int max; int min; } ;
struct TYPE_7__ {int max; int min; } ;
struct TYPE_10__ {int b_can_cam_auto; TYPE_2__ symbolrate; TYPE_1__ frequency; } ;
typedef TYPE_4__ dvb_device_caps_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct dvb_frontend_info*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(dvb_device_t *VAR_3, dvb_device_caps_t *VAR_4)
{
    struct dvb_frontend_info VAR_5;
    if (FUNC_0 (VAR_3->frontend, VAR_1, &VAR_5) < 0)
    {
        FUNC_1 (VAR_3->obj, "cannot get frontend info: %s",
                 FUNC_2(VAR_2));
        return -1;
    }

    VAR_4->frequency.min = VAR_5.frequency_min;
    VAR_4->frequency.max = VAR_5.frequency_max;
    VAR_4->symbolrate.min = VAR_5.symbol_rate_min;
    VAR_4->symbolrate.max = VAR_5.symbol_rate_max;
    VAR_4->b_can_cam_auto = ( VAR_5.caps & VAR_0 );

    return 0;
}
