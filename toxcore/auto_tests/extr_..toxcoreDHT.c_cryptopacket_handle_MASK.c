
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* cryptopackethandlers; int self_secret_key; int self_public_key; } ;
struct TYPE_4__ {int (* function ) (int ,int ,scalar_t__*,scalar_t__*,int) ;int object; } ;
typedef int IP_Port ;
typedef TYPE_2__ DHT ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__ const*,scalar_t__ const*,int) ;
 int FUNC_3 (int ,int ,scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, IP_Port VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
    DHT *VAR_9 = VAR_5;

    if (VAR_7[0] == VAR_1) {
        if (VAR_8 <= VAR_4 * 2 + VAR_3 + 1 + VAR_2 ||
                VAR_8 > VAR_0 + VAR_2)
            return 1;

        if (FUNC_1(VAR_7 + 1, VAR_9->self_public_key) == 0) {
            uint8_t VAR_10[VAR_4];
            uint8_t VAR_11[VAR_0];
            uint8_t VAR_12;
            int VAR_13 = FUNC_0(VAR_9->self_public_key, VAR_9->self_secret_key, VAR_10, VAR_11, &VAR_12, VAR_7, VAR_8);

            if (VAR_13 == -1 || VAR_13 == 0)
                return 1;

            if (!VAR_9->cryptopackethandlers[VAR_12].function) return 1;

            return VAR_9->cryptopackethandlers[VAR_12].function(VAR_9->cryptopackethandlers[VAR_12].object, VAR_6, VAR_10,
                    VAR_11, VAR_13);

        } else {
            int VAR_14 = FUNC_2(VAR_9, VAR_7 + 1, VAR_7, VAR_8);

            if ((unsigned int)VAR_14 == VAR_8)
                return 0;
        }
    }

    return 1;
}
