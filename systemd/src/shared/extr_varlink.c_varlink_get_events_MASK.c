
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ input_buffer_unscanned; scalar_t__ output_buffer_size; int write_disconnected; int current; int read_disconnected; scalar_t__ connecting; } ;
typedef TYPE_1__ Varlink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(Varlink *VAR_8) {
        int VAR_9 = 0;

        FUNC_1(VAR_8, -VAR_0);

        if (VAR_8->state == VAR_6)
                return -VAR_1;

        if (VAR_8->connecting)


                return VAR_3;

        if (!VAR_8->read_disconnected &&
            FUNC_0(VAR_8->state, VAR_4, VAR_5, VAR_7) &&
            !VAR_8->current &&
            VAR_8->input_buffer_unscanned <= 0)
                VAR_9 |= VAR_2;

        if (!VAR_8->write_disconnected &&
            VAR_8->output_buffer_size > 0)
                VAR_9 |= VAR_3;

        return VAR_9;
}
