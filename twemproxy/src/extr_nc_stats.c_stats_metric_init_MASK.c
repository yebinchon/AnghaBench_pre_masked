
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long counter; long long timestamp; } ;
struct stats_metric {int type; TYPE_1__ value; } ;


 int FUNC_0 () ;




__attribute__((used)) static void
FUNC_1(struct stats_metric *VAR_0)
{
    switch (VAR_0->type) {
    case 130:
        VAR_0->value.counter = 0LL;
        break;

    case 129:
        VAR_0->value.counter = 0LL;
        break;

    case 128:
        VAR_0->value.timestamp = 0LL;
        break;

    default:
        FUNC_0();
    }
}
