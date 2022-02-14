
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pollfd*,int,int) ;
 int FUNC_1 (int,struct iovec const*,int) ;

ssize_t FUNC_2(int VAR_1, const struct iovec *VAR_2, int VAR_3)
{
    struct pollfd VAR_4;

    VAR_4.fd = VAR_1;
    VAR_4.events = VAR_0;

    if (FUNC_0(&VAR_4, 1, -1) < 0)
        return -1;
    return FUNC_1(VAR_1, VAR_2, VAR_3);
}
