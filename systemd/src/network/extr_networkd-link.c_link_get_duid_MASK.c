
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_2__* manager; TYPE_1__* network; } ;
struct TYPE_8__ {TYPE_4__ duid; } ;
struct TYPE_7__ {TYPE_4__ duid; } ;
typedef TYPE_3__ Link ;
typedef TYPE_4__ DUID ;


 scalar_t__ VAR_0 ;

DUID* FUNC_0(Link *VAR_1) {
        if (VAR_1->network->duid.type != VAR_0)
                return &VAR_1->network->duid;
        else
                return &VAR_1->manager->duid;
}
