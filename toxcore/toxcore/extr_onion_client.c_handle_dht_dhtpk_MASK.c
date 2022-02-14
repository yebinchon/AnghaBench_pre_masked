
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_1__* c; } ;
struct TYPE_4__ {int self_secret_key; } ;
typedef TYPE_2__ Onion_Client ;
typedef int IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,int ,int const*,int const*,scalar_t__,int *) ;
 int FUNC_1 (TYPE_2__*,int const*,int *,int) ;
 scalar_t__ FUNC_2 (int const*,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, IP_Port VAR_6, const uint8_t *VAR_7, const uint8_t *VAR_8,
                            uint16_t VAR_9)
{
    Onion_Client *VAR_10 = VAR_5;

    if (VAR_9 < VAR_2 + VAR_0 + VAR_3)
        return 1;

    if (VAR_9 > VAR_1 + VAR_0 + VAR_3)
        return 1;

    uint8_t VAR_11[VAR_1];
    int VAR_12 = FUNC_0(VAR_8, VAR_10->c->self_secret_key, VAR_8 + VAR_4,
                           VAR_8 + VAR_4 + VAR_3,
                           VAR_9 - (VAR_4 + VAR_3), VAR_11);

    if (VAR_12 != VAR_9 - (VAR_0 + VAR_3))
        return 1;

    if (FUNC_2(VAR_7, VAR_11 + 1 + sizeof(uint64_t)) != 0)
        return 1;

    return FUNC_1(VAR_10, VAR_8, VAR_11, VAR_12);
}
