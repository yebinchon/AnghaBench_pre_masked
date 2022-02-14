
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pollfd {int events; int revents; int fd; } ;
typedef int socklen_t ;
struct TYPE_5__ {scalar_t__ state; int last_connect_error; int output_fd; } ;
typedef TYPE_1__ sd_bus ;
typedef int error ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int*,int*) ;
 int FUNC_4 (struct pollfd*,int,int ) ;

int FUNC_5(sd_bus *VAR_8) {
        int VAR_9 = 0;
        socklen_t VAR_10 = sizeof(VAR_9);
        struct pollfd VAR_11 = {
                .fd = VAR_8->output_fd,
                .events = VAR_4,
        };
        int VAR_12;

        FUNC_0(VAR_8->state == VAR_0);

        VAR_12 = FUNC_4(&VAR_11, 1, 0);
        if (VAR_12 < 0)
                return -VAR_7;

        if (!(VAR_11.revents & (VAR_4|VAR_2|VAR_3)))
                return 0;

        VAR_12 = FUNC_3(VAR_8->output_fd, VAR_5, VAR_6, &VAR_9, &VAR_10);
        if (VAR_12 < 0)
                VAR_8->last_connect_error = VAR_7;
        else if (VAR_9 != 0)
                VAR_8->last_connect_error = VAR_9;
        else if (VAR_11.revents & (VAR_2|VAR_3))
                VAR_8->last_connect_error = VAR_1;
        else
                return FUNC_2(VAR_8);

        return FUNC_1(VAR_8);
}
