
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ input_fd; scalar_t__ output_fd; } ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void FUNC_3(sd_bus *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0);

        if (VAR_0->input_fd != VAR_0->output_fd)
                FUNC_2(VAR_0->output_fd);
        VAR_0->output_fd = VAR_0->input_fd = FUNC_2(VAR_0->input_fd);
}
