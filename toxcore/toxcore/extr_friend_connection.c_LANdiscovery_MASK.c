
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ last_LANdiscovery; int dht; } ;
typedef TYPE_1__ Friend_Connections ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(Friend_Connections *VAR_2)
{
    if (VAR_2->last_LANdiscovery + VAR_0 < FUNC_2()) {
        FUNC_1(FUNC_0(VAR_1), VAR_2->dht);
        VAR_2->last_LANdiscovery = FUNC_2();
    }
}
