
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_8__ {TYPE_1__ client_id; } ;
typedef TYPE_2__ DHCPLease ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static DHCPLease *FUNC_2(DHCPLease *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->client_id.data);
        return FUNC_1(VAR_0);
}
