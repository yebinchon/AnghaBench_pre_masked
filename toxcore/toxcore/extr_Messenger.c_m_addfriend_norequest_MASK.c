
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_7__ {TYPE_1__* net_crypto; } ;
struct TYPE_6__ {int self_public_key; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 int FUNC_2 (TYPE_2__*,int const*,int ) ;
 int FUNC_3 (int const*) ;

int32_t FUNC_4(Messenger *VAR_4, const uint8_t *VAR_5)
{
    if (FUNC_0(VAR_4, VAR_5) != -1)
        return VAR_0;

    if (!FUNC_3(VAR_5))
        return VAR_1;

    if (FUNC_1(VAR_5, VAR_4->net_crypto->self_public_key))
        return VAR_2;

    return FUNC_2(VAR_4, VAR_5, VAR_3);
}
