
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* samples; scalar_t__ value; scalar_t__ updates; int lock; } ;
typedef TYPE_2__ input_rate_t ;
struct TYPE_4__ {void* date; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(input_rate_t *VAR_1)
{
    FUNC_0(&VAR_1->lock);
    VAR_1->updates = 0;
    VAR_1->value = 0;
    VAR_1->samples[0].date = VAR_0;
    VAR_1->samples[1].date = VAR_0;
}
