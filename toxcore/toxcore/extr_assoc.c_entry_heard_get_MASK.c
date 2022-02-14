
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ family; } ;
struct TYPE_8__ {TYPE_1__ ip; } ;
struct TYPE_9__ {TYPE_2__ assoc_heard6; TYPE_2__ assoc_heard4; } ;
typedef TYPE_2__ IP_Port ;
typedef TYPE_3__ Client_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static IP_Port *FUNC_0(Client_entry *VAR_2, const IP_Port *VAR_3)
{
    if (VAR_3->ip.family == VAR_0)
        return &VAR_2->assoc_heard4;
    else if (VAR_3->ip.family == VAR_1)
        return &VAR_2->assoc_heard6;
    else
        return ((void*)0);
}
