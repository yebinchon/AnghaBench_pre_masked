
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int dht; } ;
typedef TYPE_1__ Net_Crypto ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int const*,int const*,scalar_t__,int *) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(const Net_Crypto *VAR_5, uint8_t *VAR_6, uint8_t *VAR_7,
                                 uint8_t *VAR_8, const uint8_t *VAR_9, uint16_t VAR_10)
{
    if (VAR_10 != VAR_0)
        return -1;

    FUNC_2(VAR_8, VAR_9 + 1, VAR_4);
    FUNC_0(VAR_5->dht, VAR_7, VAR_8);
    int VAR_11 = FUNC_1(VAR_7, VAR_9 + 1 + VAR_4,
                                     VAR_9 + 1 + VAR_4 + VAR_3, VAR_1 + VAR_2,
                                     VAR_6);

    if (VAR_11 != VAR_1)
        return -1;

    return 0;
}
