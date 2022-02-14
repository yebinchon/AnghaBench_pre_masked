
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int assoc6; int assoc4; } ;
struct TYPE_10__ {TYPE_2__ client; } ;
struct TYPE_7__ {scalar_t__ family; } ;
struct TYPE_9__ {TYPE_1__ ip; } ;
typedef TYPE_3__ IP_Port ;
typedef int IPPTsPng ;
typedef TYPE_4__ Client_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static IPPTsPng *FUNC_0(Client_entry *VAR_2, const IP_Port *VAR_3)
{
    if (!VAR_2)
        return ((void*)0);

    if (VAR_3->ip.family == VAR_0)
        return &VAR_2->client.assoc4;

    if (VAR_3->ip.family == VAR_1)
        return &VAR_2->client.assoc6;

    return ((void*)0);
}
