
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {scalar_t__ pulse; int tick; int es; int pts; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {int* p_buffer; int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (demux_t *VAR_6)
{
    demux_sys_t *VAR_7 = VAR_6->p_sys;


    if (VAR_7->tick <= FUNC_2 (&VAR_7->pts))
    {
        block_t *VAR_8 = FUNC_1 (1);
        if (FUNC_5(VAR_8 == ((void*)0)))
            return VAR_5;

        VAR_8->p_buffer[0] = 0xF9;
        VAR_8->i_dts = VAR_8->i_pts = VAR_7->tick;

        FUNC_3 (VAR_6->out, VAR_7->es, VAR_8);
        FUNC_4 (VAR_6->out, VAR_7->tick);

        VAR_7->tick += VAR_0;
        return VAR_4;
    }


    uint64_t VAR_9 = VAR_7->pulse;

    if (FUNC_0 (VAR_6, &VAR_9, VAR_6->out))
        return VAR_2;

    if (VAR_9 == VAR_1)
        return VAR_3;

    VAR_7->pulse = VAR_9;
    return VAR_4;
}
