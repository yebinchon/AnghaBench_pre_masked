
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct pollfd {int fd; int events; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct sockaddr*,int *,int) ;
 scalar_t__ FUNC_1 (struct pollfd*,int,int) ;

int FUNC_2(int VAR_1, struct sockaddr *VAR_2, socklen_t *VAR_3,
                  bool VAR_4)
{
    struct pollfd VAR_5;

    VAR_5.fd = VAR_1;
    VAR_5.events = VAR_0;

    if (FUNC_1(&VAR_5, 1, -1) < 0)
        return -1;

    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
