
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* samples; } ;
typedef TYPE_2__ input_rate_t ;
struct TYPE_4__ {scalar_t__ date; float value; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static float FUNC_0(const input_rate_t *VAR_1)
{
    if (VAR_1->samples[1].date == VAR_0)
        return 0.;

    return (VAR_1->samples[0].value - VAR_1->samples[1].value)
        / (float)(VAR_1->samples[0].date - VAR_1->samples[1].date);
}
