
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_7__ {TYPE_1__ freq; } ;
struct TYPE_9__ {TYPE_2__ perf; } ;
struct TYPE_8__ {int QuadPart; } ;
typedef TYPE_3__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static vlc_tick_t FUNC_3 (void)
{

    LARGE_INTEGER VAR_1;
    if (!FUNC_0 (&VAR_1))
        FUNC_1 ();



    return FUNC_2(VAR_1.QuadPart, VAR_0.perf.freq.QuadPart);
}
