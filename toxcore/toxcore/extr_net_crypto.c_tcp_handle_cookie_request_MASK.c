
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int data ;
struct TYPE_5__ {int tcp_c; } ;
typedef TYPE_1__ Net_Crypto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int *,int *,int const*,int ) ;
 int FUNC_2 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_3(Net_Crypto *VAR_4, int VAR_5, const uint8_t *VAR_6, uint16_t VAR_7)
{
    uint8_t VAR_8[VAR_0];
    uint8_t VAR_9[VAR_2];
    uint8_t VAR_10[VAR_3];

    if (FUNC_1(VAR_4, VAR_8, VAR_9, VAR_10, VAR_6, VAR_7) != 0)
        return -1;

    uint8_t VAR_11[VAR_1];

    if (FUNC_0(VAR_4, VAR_11, VAR_8, VAR_9, VAR_10) != sizeof(VAR_11))
        return -1;

    int VAR_12 = FUNC_2(VAR_4->tcp_c, VAR_5, VAR_11, sizeof(VAR_11));
    return VAR_12;
}
