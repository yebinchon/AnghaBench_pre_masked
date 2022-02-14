
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {int addr; int addrlen; int family; } ;
struct server {TYPE_1__ info; int port; int addrstr; } ;
struct conn {int done; struct sockaddr* addr; int addrlen; int family; int err; } ;
typedef scalar_t__ rstatus_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct server *VAR_2, struct conn *VAR_3)
{
    rstatus_t VAR_4;

    VAR_4 = FUNC_0(&VAR_2->addrstr, VAR_2->port, &VAR_2->info);
    if (VAR_4 != VAR_1) {
        VAR_3->err = VAR_0;
        VAR_3->done = 1;
        return;
    }

    VAR_3->family = VAR_2->info.family;
    VAR_3->addrlen = VAR_2->info.addrlen;
    VAR_3->addr = (struct sockaddr *)&VAR_2->info.addr;
}
