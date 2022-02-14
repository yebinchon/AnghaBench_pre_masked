
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int recv; } ;
struct TYPE_6__ {TYPE_1__ cycle; } ;
typedef TYPE_2__ BWController ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(BWController *VAR_0, uint32_t VAR_1)
{
    if (!VAR_0 || !VAR_1)
        return;

    VAR_0->cycle.recv += VAR_1;
    FUNC_0(VAR_0);
}
