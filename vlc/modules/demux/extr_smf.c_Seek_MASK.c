
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {scalar_t__ pulse; int pts; scalar_t__ tick; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (demux_t *VAR_5, vlc_tick_t VAR_6)
{
    demux_sys_t *VAR_7 = VAR_5->p_sys;


    if (VAR_6 < FUNC_2 (&VAR_7->pts) && FUNC_1 (VAR_5))
        return VAR_2;


    uint64_t VAR_8 = VAR_7->pulse;

    while (VAR_6 > FUNC_2 (&VAR_7->pts))
    {
        if (VAR_8 == VAR_1)
            return VAR_3;
        if (FUNC_0 (VAR_5, &VAR_8, ((void*)0)))
            return VAR_2;
    }

    VAR_7->pulse = VAR_8;
    VAR_7->tick = ((FUNC_2 (&VAR_7->pts) - VAR_4) / VAR_0) * VAR_0 + VAR_4;
    return VAR_3;
}
