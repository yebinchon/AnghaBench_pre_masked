
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int* uint8; } ;
struct TYPE_13__ {TYPE_1__ ip6; } ;
struct TYPE_12__ {scalar_t__ onion_c; scalar_t__ onion_a; scalar_t__ onion; } ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_2__ TCP_Proxy_Info ;
typedef TYPE_3__ Onions ;
typedef TYPE_4__ IP ;
typedef int DHT ;


 int FUNC_0 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_1 (int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

Onions *FUNC_8(uint16_t VAR_0)
{
    IP VAR_1;
    FUNC_0(&VAR_1, 1);
    VAR_1.ip6.uint8[15] = 1;
    Onions *VAR_2 = FUNC_1(sizeof(Onions));
    DHT *VAR_3 = FUNC_2(FUNC_4(VAR_1, VAR_0));
    VAR_2->onion = FUNC_5(VAR_3);
    VAR_2->onion_a = FUNC_6(VAR_3);
    TCP_Proxy_Info VAR_4 = {0};
    VAR_2->onion_c = FUNC_7(FUNC_3(VAR_3, &VAR_4));

    if (VAR_2->onion && VAR_2->onion_a && VAR_2->onion_c)
        return VAR_2;

    return ((void*)0);
}
