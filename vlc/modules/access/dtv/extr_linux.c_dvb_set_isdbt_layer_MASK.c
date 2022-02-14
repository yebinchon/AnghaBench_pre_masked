
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int time_interleaving; int segment_count; int code_rate; int modulation; } ;
typedef TYPE_1__ isdbt_layer_t ;
typedef int dvb_device_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int,int ,int ,unsigned int,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3 (dvb_device_t *VAR_8, unsigned VAR_9,
                                const isdbt_layer_t *VAR_10)
{
    uint32_t VAR_11 = FUNC_1 (VAR_10->modulation, VAR_6);
    uint32_t VAR_12 = FUNC_0 (VAR_10->code_rate);
    uint32_t VAR_13 = VAR_10->segment_count;
    uint32_t VAR_14 = VAR_10->time_interleaving;

    VAR_9 *= VAR_5 - VAR_1;

    return FUNC_2 (VAR_8, 5, VAR_0, VAR_7,
                          VAR_1 + VAR_9, VAR_12,
                          VAR_2 + VAR_9, VAR_11,
                          VAR_3 + VAR_9, VAR_13,
                          VAR_4 + VAR_9, VAR_14);
}
