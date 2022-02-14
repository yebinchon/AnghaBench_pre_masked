
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int rb; } ;
struct TYPE_5__ {TYPE_1__ rcvpkt; } ;
typedef TYPE_2__ BWController ;


 int FUNC_0 (int ,void**) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(BWController *VAR_0, uint32_t VAR_1)
{
    uint32_t *VAR_2;

    FUNC_0(VAR_0->rcvpkt.rb, (void **) &VAR_2);
    FUNC_1(VAR_0->rcvpkt.rb, VAR_2);

    *VAR_2 = VAR_1;
}
