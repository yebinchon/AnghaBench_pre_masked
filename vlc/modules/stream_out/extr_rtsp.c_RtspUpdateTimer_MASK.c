
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_5__ {scalar_t__ timeout; int sessionc; int timer; TYPE_1__** sessionv; } ;
typedef TYPE_2__ rtsp_stream_t ;
struct TYPE_4__ {scalar_t__ last_seen; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2( rtsp_stream_t *VAR_1 )
{
    if (VAR_1->timeout == 0)
        return;

    vlc_tick_t VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_1->sessionc; VAR_3++)
    {
        if (VAR_2 == 0 || VAR_1->sessionv[VAR_3]->last_seen < VAR_2)
            VAR_2 = VAR_1->sessionv[VAR_3]->last_seen;
    }
    if (VAR_2 != 0)
    {
        VAR_2 += VAR_1->timeout;
        FUNC_1(VAR_1->timer, 1, VAR_2, VAR_0);
    }
    else
    {
        FUNC_0(VAR_1->timer);
    }
}
