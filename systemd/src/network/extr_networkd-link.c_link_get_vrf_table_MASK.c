
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int table; } ;
struct TYPE_6__ {TYPE_1__* network; } ;
struct TYPE_5__ {scalar_t__ vrf; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;

uint32_t FUNC_1(Link *VAR_1) {
        return VAR_1->network->vrf ? FUNC_0(VAR_1->network->vrf)->table : VAR_0;
}
