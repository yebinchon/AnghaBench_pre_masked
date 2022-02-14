
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int proxy_info; int self_secret_key; int self_public_key; } ;
typedef int TCP_Proxy_Info ;
typedef TYPE_1__ TCP_Connections ;


 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int const*,int ) ;

TCP_Connections *FUNC_3(const uint8_t *VAR_1, TCP_Proxy_Info *VAR_2)
{
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    TCP_Connections *VAR_3 = FUNC_0(1, sizeof(TCP_Connections));

    if (VAR_3 == ((void*)0))
        return ((void*)0);

    FUNC_2(VAR_3->self_secret_key, VAR_1, VAR_0);
    FUNC_1(VAR_3->self_public_key, VAR_3->self_secret_key);
    VAR_3->proxy_info = *VAR_2;

    return VAR_3;
}
