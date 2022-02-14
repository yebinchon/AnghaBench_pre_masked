
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int public_key; int ip_port; } ;
struct TYPE_6__ {int dht; } ;
typedef TYPE_1__ Onion_Client ;
typedef TYPE_2__ Node_format ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 unsigned int FUNC_1 (int ,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(Onion_Client *VAR_1)
{
    Node_format VAR_2[VAR_0];

    unsigned int VAR_3 = FUNC_1(VAR_1->dht, VAR_2, VAR_0);

    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        FUNC_0(VAR_1, VAR_2[VAR_4].ip_port, VAR_2[VAR_4].public_key);
    }
}
