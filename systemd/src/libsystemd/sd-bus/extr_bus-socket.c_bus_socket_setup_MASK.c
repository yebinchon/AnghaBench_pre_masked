
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int message_version; scalar_t__ message_endian; int output_fd; int input_fd; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(sd_bus *VAR_1) {
        FUNC_0(VAR_1);


        (void) FUNC_1(VAR_1->input_fd, VAR_0);
        (void) FUNC_2(VAR_1->output_fd, VAR_0);

        VAR_1->message_version = 1;
        VAR_1->message_endian = 0;
}
