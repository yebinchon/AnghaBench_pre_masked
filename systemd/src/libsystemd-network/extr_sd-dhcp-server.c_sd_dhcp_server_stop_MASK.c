
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* fd; void* fd_raw; int receive_message; } ;
typedef TYPE_1__ sd_dhcp_server ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ) ;

int FUNC_4(sd_dhcp_server *VAR_1) {
        FUNC_0(VAR_1, -VAR_0);

        VAR_1->receive_message =
                FUNC_3(VAR_1->receive_message);

        VAR_1->fd_raw = FUNC_2(VAR_1->fd_raw);
        VAR_1->fd = FUNC_2(VAR_1->fd);

        FUNC_1(VAR_1, "STOPPED");

        return 0;
}
