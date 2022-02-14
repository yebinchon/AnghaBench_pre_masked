
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int layout; } ;
struct TYPE_5__ {TYPE_3__* p_chan; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;
typedef TYPE_3__ MP4_Box_data_chan_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    MP4_Box_data_chan_t *VAR_1 = VAR_0->data.p_chan;
    FUNC_0( &VAR_1->layout );
}
