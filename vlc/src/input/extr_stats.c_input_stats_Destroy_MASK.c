
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int lock; } ;
struct input_stats {TYPE_2__ input_bitrate; TYPE_1__ demux_bitrate; } ;


 int FUNC_0 (struct input_stats*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct input_stats *VAR_0)
{
    FUNC_1(&VAR_0->demux_bitrate.lock);
    FUNC_1(&VAR_0->input_bitrate.lock);
    FUNC_0(VAR_0);
}
