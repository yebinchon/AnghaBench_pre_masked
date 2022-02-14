
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int temp_plain ;
typedef int plain ;
struct TYPE_6__ {TYPE_2__* Onion_Data_Handlers; TYPE_1__* c; int temp_secret_key; } ;
struct TYPE_5__ {int (* function ) (int ,size_t*,size_t*,int) ;int object; } ;
struct TYPE_4__ {int self_secret_key; } ;
typedef TYPE_3__ Onion_Client ;
typedef int IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t const*,int ,size_t const*,size_t const*,int,size_t*) ;
 int FUNC_1 (int ,size_t*,size_t*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_5, IP_Port VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
    Onion_Client *VAR_9 = VAR_5;

    if (VAR_8 <= (VAR_2 + VAR_0))
        return 1;

    if (VAR_8 > VAR_1)
        return 1;

    uint8_t VAR_10[VAR_8 - VAR_2];
    int VAR_11 = FUNC_0(VAR_7 + 1 + VAR_3, VAR_9->temp_secret_key, VAR_7 + 1,
                           VAR_7 + 1 + VAR_3 + VAR_4,
                           VAR_8 - (1 + VAR_3 + VAR_4), VAR_10);

    if ((uint32_t)VAR_11 != sizeof(VAR_10))
        return 1;

    uint8_t VAR_12[sizeof(VAR_10) - VAR_0];
    VAR_11 = FUNC_0(VAR_10, VAR_9->c->self_secret_key, VAR_7 + 1, VAR_10 + VAR_4,
                       sizeof(VAR_10) - VAR_4, VAR_12);

    if ((uint32_t)VAR_11 != sizeof(VAR_12))
        return 1;

    if (!VAR_9->Onion_Data_Handlers[VAR_12[0]].function)
        return 1;

    return VAR_9->Onion_Data_Handlers[VAR_12[0]].function(VAR_9->Onion_Data_Handlers[VAR_12[0]].object, VAR_10, VAR_12,
            sizeof(VAR_12));
}
