
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; int member_1; int member_0; } ;
struct pollfd {int fd; int events; int revents; } ;
typedef int fd_set ;
struct TYPE_3__ {int rem; int quot; } ;
typedef TYPE_1__ div_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 unsigned int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ FUNC_3 (int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int *,int *,int *,struct timeval*) ;

int (FUNC_6) (struct pollfd *VAR_9, unsigned VAR_10, int VAR_11)
{
    fd_set VAR_12[1], VAR_13[1], VAR_14[1];
    struct timeval VAR_15 = { 0, 0 };
    int VAR_16 = -1;

    FUNC_2 (VAR_12);
    FUNC_2 (VAR_13);
    FUNC_2 (VAR_14);
    for (unsigned VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
    {
        int VAR_18 = VAR_9[VAR_17].fd;
        if (VAR_16 < VAR_18)
            VAR_16 = VAR_18;
        if ((unsigned)VAR_18 >= VAR_2)
        {
            VAR_8 = VAR_1;
            return -1;
        }
        if (VAR_9[VAR_17].events & VAR_6)
            FUNC_1 (VAR_18, VAR_12);
        if (VAR_9[VAR_17].events & VAR_7)
            FUNC_1 (VAR_18, VAR_13);
        if (VAR_9[VAR_17].events & VAR_5)
            FUNC_1 (VAR_18, VAR_14);
    }

    if (VAR_11 >= 0)
    {
        div_t VAR_19 = FUNC_3 (VAR_11, 1000);
        VAR_15.tv_sec = VAR_19.quot;
        VAR_15.tv_usec = VAR_19.rem * 1000;
    }

    VAR_16 = FUNC_5 (VAR_16 + 1, VAR_12, VAR_13, VAR_14,
                  (VAR_11 >= 0) ? &VAR_15 : ((void*)0));
    if (VAR_16 == -1)
    {
        if (VAR_8 != VAR_0)
            return -1;

        VAR_16 = 0;

        for (unsigned VAR_20 = 0; VAR_20 < VAR_10; VAR_20++)
            if (FUNC_4 (VAR_9[VAR_20].fd, VAR_3) == -1)
            {
                VAR_9[VAR_20].revents = VAR_4;
                VAR_16++;
            }
            else
                VAR_9[VAR_20].revents = 0;

        return VAR_16 ? VAR_16 : -1;
    }

    for (unsigned VAR_21 = 0; VAR_21 < VAR_10; VAR_21++)
    {
        int VAR_22 = VAR_9[VAR_21].fd;
        VAR_9[VAR_21].revents = (FUNC_0 (VAR_22, VAR_12) ? VAR_6 : 0)
                       | (FUNC_0 (VAR_22, VAR_13) ? VAR_7 : 0)
                       | (FUNC_0 (VAR_22, VAR_14) ? VAR_5 : 0);
    }
    return VAR_16;
}
