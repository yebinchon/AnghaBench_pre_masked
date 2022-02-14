
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_cat; int audio; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_7__ {int out; } ;
typedef TYPE_2__ demux_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,TYPE_1__*) ;

void *FUNC_2 (demux_t *VAR_1, es_format_t *VAR_2)
{
    if (VAR_2->i_cat == VAR_0)
        FUNC_0 (&VAR_2->audio);
    return FUNC_1 (VAR_1->out, VAR_2);
}
