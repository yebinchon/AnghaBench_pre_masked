
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ output_buffer_size; scalar_t__ got_pollhup; scalar_t__ write_disconnected; int state; scalar_t__ read_disconnected; scalar_t__ connecting; } ;
typedef TYPE_1__ Varlink ;


 scalar_t__ FUNC_0 (int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(Varlink *VAR_5) {
        FUNC_2(VAR_5);






        if (!FUNC_1(VAR_5->state))
                return 0;


        if (VAR_5->connecting)
                return 0;


        if (VAR_5->output_buffer_size > 0 && !VAR_5->write_disconnected)
                return 0;


        if (VAR_5->read_disconnected && VAR_5->write_disconnected)
                goto disconnect;


        if (FUNC_0(VAR_5->state, VAR_0, VAR_1, VAR_3) && VAR_5->read_disconnected)
                goto disconnect;




        if (FUNC_0(VAR_5->state, VAR_2) && (VAR_5->write_disconnected || VAR_5->got_pollhup))
                goto disconnect;

        return 0;

disconnect:
        FUNC_3(VAR_5, VAR_4);
        return 1;
}
