
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
struct msghdr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct msghdr const*,int) ;
 scalar_t__ FUNC_1 (struct pollfd*,int,int) ;

ssize_t FUNC_2(int VAR_1, const struct msghdr *VAR_2, int VAR_3)
{
    struct pollfd VAR_4;

    VAR_4.fd = VAR_1;
    VAR_4.events = VAR_0;

    if (FUNC_1(&VAR_4, 1, -1) < 0)
        return -1;

    return FUNC_0(VAR_1, VAR_2, VAR_3);
}
