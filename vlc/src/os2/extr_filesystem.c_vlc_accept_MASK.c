
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct sockaddr*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int ,int) ;

int FUNC_2 (int VAR_7, struct sockaddr *VAR_8, socklen_t *VAR_9, bool VAR_10)
{
    do
    {
        int VAR_11 = FUNC_0 (VAR_7, VAR_8, VAR_9);
        if (VAR_11 != -1)
        {
            FUNC_1 (VAR_11, VAR_3, VAR_1);
            if (VAR_10)
                FUNC_1 (VAR_11, VAR_4, FUNC_1 (VAR_11, VAR_2, 0) | VAR_5);
            return VAR_11;
        }
    }
    while (VAR_6 == VAR_0);

    return -1;
}
