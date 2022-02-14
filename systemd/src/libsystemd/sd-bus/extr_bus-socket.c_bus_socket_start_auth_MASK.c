
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ input_fd; int accept_fd; scalar_t__ output_fd; scalar_t__ is_server; scalar_t__ auth_timeout; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,int ) ;

int FUNC_7(sd_bus *VAR_4) {
        FUNC_0(VAR_4);

        FUNC_1(VAR_4);

        FUNC_2(VAR_4, VAR_1);
        VAR_4->auth_timeout = FUNC_5(VAR_3) + VAR_2;

        if (FUNC_6(VAR_4->input_fd, VAR_0, 0, 0) <= 0)
                VAR_4->accept_fd = 0;

        if (VAR_4->output_fd != VAR_4->input_fd)
                if (FUNC_6(VAR_4->output_fd, VAR_0, 0, 0) <= 0)
                        VAR_4->accept_fd = 0;

        if (VAR_4->is_server)
                return FUNC_3(VAR_4);
        else
                return FUNC_4(VAR_4);
}
