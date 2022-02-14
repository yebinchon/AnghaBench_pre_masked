
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_7__ {int timestamp_fifo; } ;
struct TYPE_9__ {TYPE_1__ video; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_10__ {int i_dts; scalar_t__ i_pts; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(decoder_t *VAR_1, block_t **VAR_2)
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4 = *VAR_2;

    FUNC_0(VAR_3->video.timestamp_fifo,
                      VAR_4->i_pts ? VAR_0 : VAR_4->i_dts);

    return 1;
}
