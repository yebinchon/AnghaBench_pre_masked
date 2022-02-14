
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int plain ;
struct TYPE_3__ {int self_secret_key; int secret_symmetric_key; } ;
typedef TYPE_1__ Net_Crypto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int const*,int) ;
 int VAR_6 ;
 int FUNC_2 (int const*,int ,int *,int *,int,int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const Net_Crypto *VAR_7, uint8_t *VAR_8, const uint8_t *VAR_9, const uint8_t *VAR_10,
                                   const uint8_t *VAR_11, const uint8_t *VAR_12, const uint8_t *VAR_13)
{
    uint8_t VAR_14[VAR_4 + VAR_5 + VAR_6 + VAR_1];
    FUNC_3(VAR_14, VAR_10, VAR_4);
    FUNC_3(VAR_14 + VAR_4, VAR_11, VAR_5);
    FUNC_1(VAR_14 + VAR_4 + VAR_5, VAR_9, VAR_1);
    uint8_t VAR_15[VAR_0];
    FUNC_3(VAR_15, VAR_12, VAR_5);
    FUNC_3(VAR_15 + VAR_5, VAR_13, VAR_5);

    if (FUNC_0(VAR_14 + VAR_4 + VAR_5 + VAR_6, VAR_15,
                      VAR_7->secret_symmetric_key) != 0)
        return -1;

    FUNC_4(VAR_8 + 1 + VAR_1);
    int VAR_16 = FUNC_2(VAR_12, VAR_7->self_secret_key, VAR_8 + 1 + VAR_1, VAR_14, sizeof(VAR_14),
                           VAR_8 + 1 + VAR_1 + VAR_4);

    if (VAR_16 != VAR_2 - (1 + VAR_1 + VAR_4))
        return -1;

    VAR_8[0] = VAR_3;
    FUNC_3(VAR_8 + 1, VAR_9, VAR_1);

    return VAR_2;
}
