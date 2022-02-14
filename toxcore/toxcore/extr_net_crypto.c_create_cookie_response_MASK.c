
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int plain ;
struct TYPE_3__ {int secret_symmetric_key; } ;
typedef TYPE_1__ Net_Crypto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int const*,int *,int *,int,int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const Net_Crypto *VAR_6, uint8_t *VAR_7, const uint8_t *VAR_8,
                                  const uint8_t *VAR_9, const uint8_t *VAR_10)
{
    uint8_t VAR_11[VAR_0];
    FUNC_2(VAR_11, VAR_8, VAR_5);
    FUNC_2(VAR_11 + VAR_5, VAR_10, VAR_5);
    uint8_t VAR_12[VAR_1 + sizeof(uint64_t)];

    if (FUNC_0(VAR_12, VAR_11, VAR_6->secret_symmetric_key) != 0)
        return -1;

    FUNC_2(VAR_12 + VAR_1, VAR_8 + VAR_0, sizeof(uint64_t));
    VAR_7[0] = VAR_3;
    FUNC_3(VAR_7 + 1);
    int VAR_13 = FUNC_1(VAR_9, VAR_7 + 1, VAR_12, sizeof(VAR_12), VAR_7 + 1 + VAR_4);

    if (VAR_13 != VAR_2 - (1 + VAR_4))
        return -1;

    return VAR_2;
}
