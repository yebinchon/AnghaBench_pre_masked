
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {TYPE_1__* dht; } ;
struct TYPE_3__ {int self_secret_key; } ;
typedef TYPE_2__ Onion ;
typedef int IP_Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,char const*,char const*,int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 char* VAR_4 ;

__attribute__((used)) static int FUNC_2(void *VAR_5, IP_Port VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
    Onion *VAR_9 = VAR_5;

    if (VAR_8 != (1 + VAR_1 + VAR_2 + sizeof("Install gentoo") + VAR_0))
        return 1;

    uint8_t VAR_10[sizeof("Install gentoo")] = {0};

    if (FUNC_1(VAR_4, VAR_7 + 1, VAR_1) != 0)
        return 1;

    int VAR_11 = FUNC_0(VAR_7 + 1 + VAR_1, VAR_9->dht->self_secret_key, VAR_7 + 1,
                           VAR_7 + 1 + VAR_1 + VAR_2, sizeof("Install gentoo") + VAR_0, VAR_10);

    if (VAR_11 == -1)
        return 1;

    if (FUNC_1(VAR_10, "Install gentoo", sizeof("Install gentoo")) != 0)
        return 1;

    VAR_3 = 1;
    return 0;
}
