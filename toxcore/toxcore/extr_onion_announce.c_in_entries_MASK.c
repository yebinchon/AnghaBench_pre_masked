
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* entries; } ;
struct TYPE_4__ {int public_key; int time; } ;
typedef TYPE_2__ Onion_Announce ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int const*) ;

__attribute__((used)) static int FUNC_2(const Onion_Announce *VAR_2, const uint8_t *VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        if (!FUNC_0(VAR_2->entries[VAR_4].time, VAR_1)
                && FUNC_1(VAR_2->entries[VAR_4].public_key, VAR_3) == 0)
            return VAR_4;
    }

    return -1;
}
