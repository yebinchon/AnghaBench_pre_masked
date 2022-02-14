
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {scalar_t__ next_time; int date; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (demux_t *VAR_1)
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    if (VAR_2->next_time == VAR_0)
        return FUNC_0 (VAR_1, 1);


    while (VAR_2->next_time > FUNC_1 (&VAR_2->date))
    {
        int VAR_3 = FUNC_0 (VAR_1, 0);
        if (VAR_3 <= 0)
            return VAR_3;
    }
    return 1;
}
