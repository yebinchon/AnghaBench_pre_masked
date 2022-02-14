
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int socklen_t ;
struct TYPE_5__ {int sa; } ;
struct TYPE_6__ {TYPE_1__ sockaddr; int fd; } ;
typedef TYPE_2__ sd_netlink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (int ,int ,int ,int) ;

int FUNC_4(sd_netlink *VAR_4) {
        socklen_t VAR_5;
        int VAR_6;

        VAR_6 = FUNC_3(VAR_4->fd, VAR_2, VAR_1, 1);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_5 = sizeof(VAR_4->sockaddr);

        VAR_6 = FUNC_0(VAR_4->fd, &VAR_4->sockaddr.sa, VAR_5);

        if (VAR_6 < 0 && VAR_3 != VAR_0)
                return -VAR_3;

        VAR_6 = FUNC_2(VAR_4->fd, &VAR_4->sockaddr.sa, &VAR_5);
        if (VAR_6 < 0)
                return -VAR_3;

        VAR_6 = FUNC_1(VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        return 0;
}
