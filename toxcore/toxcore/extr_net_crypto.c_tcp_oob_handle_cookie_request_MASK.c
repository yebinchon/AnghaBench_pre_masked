
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
 int FUNC_0 (TYPE_1__ const*,int *,int *,int *,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int *,int *,int *,int const*,int ) ;
 scalar_t__ FUNC_2 (int const*,int *) ;
 int FUNC_3 (int ,unsigned int,int const*,int *,int) ;

__attribute__((used)) static int FUNC_4(const Net_Crypto *VAR_4, unsigned int VAR_5,
        const uint8_t *VAR_6, const uint8_t *VAR_7, uint16_t VAR_8)
{
    uint8_t VAR_9[VAR_0];
    uint8_t VAR_10[VAR_2];
    uint8_t VAR_11[VAR_3];

    if (FUNC_1(VAR_4, VAR_9, VAR_10, VAR_11, VAR_7, VAR_8) != 0)
        return -1;

    if (FUNC_2(VAR_6, VAR_11) != 0)
        return -1;

    uint8_t VAR_12[VAR_1];

    if (FUNC_0(VAR_4, VAR_12, VAR_9, VAR_10, VAR_6) != sizeof(VAR_12))
        return -1;

    int VAR_13 = FUNC_3(VAR_4->tcp_c, VAR_5, VAR_6, VAR_12, sizeof(VAR_12));
    return VAR_13;
}
