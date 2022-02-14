
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa; int un; } ;
struct udev_ctrl {int bound; int cleanup_socket; int sock; int addrlen; TYPE_1__ saddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct udev_ctrl*) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct udev_ctrl *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        if (VAR_2->bound)
                return 0;

        VAR_3 = FUNC_1(VAR_2->sock, &VAR_2->saddr.sa, VAR_2->addrlen);
        if (VAR_3 < 0 && VAR_1 == VAR_0) {
                (void) FUNC_4(&VAR_2->saddr.un);
                VAR_3 = FUNC_1(VAR_2->sock, &VAR_2->saddr.sa, VAR_2->addrlen);
        }

        if (VAR_3 < 0)
                return FUNC_3(VAR_1, "Failed to bind udev control socket: %m");

        if (FUNC_2(VAR_2->sock, 0) < 0)
                return FUNC_3(VAR_1, "Failed to listen udev control socket: %m");

        VAR_2->bound = 1;
        VAR_2->cleanup_socket = 1;

        return 0;
}
