
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_3__ {int le_channel_count; int le_sample_rate; int le_bit_rate; int encoder; } ;
typedef TYPE_1__ ACSession ;


 int FUNC_0 (int *,int ,int ,int ,int *,int *,int *) ;

int FUNC_1(ACSession *VAR_0, int32_t VAR_1, int32_t VAR_2, uint8_t VAR_3)
{
    if (!VAR_0 || !FUNC_0(&VAR_0->encoder, VAR_1,
                                          VAR_2, VAR_3,
                                          &VAR_0->le_bit_rate,
                                          &VAR_0->le_sample_rate,
                                          &VAR_0->le_channel_count))
        return -1;

    return 0;
}
