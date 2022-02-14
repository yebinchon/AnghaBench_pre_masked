
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
struct TYPE_6__ {TYPE_1__ client_id; } ;
typedef TYPE_2__ DHCPRequest ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(DHCPRequest *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_0(VAR_0->client_id.data);
        FUNC_0(VAR_0);
}
