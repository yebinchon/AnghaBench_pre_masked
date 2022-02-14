
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_1; int member_0; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int sigset_t ;
typedef int siginfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,struct timespec*) ;
 int FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int,struct iovec const*,int) ;

ssize_t FUNC_9(int VAR_6, const struct iovec *VAR_7, int VAR_8)
{
    sigset_t VAR_9, VAR_10;

    FUNC_3(&VAR_9);
    FUNC_2(&VAR_9, VAR_2);
    FUNC_1(VAR_3, &VAR_9, &VAR_10);

    ssize_t VAR_11 = FUNC_8(VAR_6, VAR_7, VAR_8);
    if (VAR_11 < 0 && VAR_5 == VAR_1)
    {






        for (;;)
        {
            sigset_t VAR_12;
            int VAR_13;

            FUNC_5(&VAR_12);
            if (!FUNC_4(&VAR_12, VAR_2))
                break;

            FUNC_7(&VAR_9, &VAR_13);
            FUNC_0(VAR_13 == VAR_2);
        }

    }

    if (!FUNC_4(&VAR_10, VAR_2))
        FUNC_1(VAR_4, &VAR_10, ((void*)0));
    return VAR_11;
}
