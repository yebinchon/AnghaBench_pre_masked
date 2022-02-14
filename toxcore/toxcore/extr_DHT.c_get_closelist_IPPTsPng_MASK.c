
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ sa_family_t ;
struct TYPE_5__ {TYPE_1__* close_clientlist; } ;
struct TYPE_4__ {int assoc6; int assoc4; int public_key; } ;
typedef int IPPTsPng ;
typedef TYPE_2__ DHT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*) ;

__attribute__((used)) static IPPTsPng *FUNC_1(DHT *VAR_3, const uint8_t *VAR_4, sa_family_t VAR_5)
{
    uint32_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
        if (FUNC_0(VAR_3->close_clientlist[VAR_6].public_key, VAR_4) != 0)
            continue;

        if (VAR_5 == VAR_0)
            return &VAR_3->close_clientlist[VAR_6].assoc4;
        else if (VAR_5 == VAR_1)
            return &VAR_3->close_clientlist[VAR_6].assoc6;
    }

    return ((void*)0);
}
