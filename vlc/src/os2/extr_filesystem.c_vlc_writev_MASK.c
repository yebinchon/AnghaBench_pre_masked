
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
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,struct timespec*) ;
 scalar_t__ FUNC_5 (int,struct iovec const*,int) ;

ssize_t FUNC_6(int VAR_6, const struct iovec *VAR_7, int VAR_8)
{
    sigset_t VAR_9, VAR_10;

    FUNC_2(&VAR_9);
    FUNC_1(&VAR_9, VAR_2);
    FUNC_0(VAR_3, &VAR_9, &VAR_10);

    ssize_t VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_8);
    if (VAR_11 < 0 && VAR_5 == VAR_1)
    {
        siginfo_t VAR_12;
        struct timespec VAR_13 = { 0, 0 };

        while (FUNC_4(&VAR_9, &VAR_12, &VAR_13) >= 0 || VAR_5 != VAR_0);
    }

    if (!FUNC_3(&VAR_10, VAR_2))
        FUNC_0(VAR_4, &VAR_10, ((void*)0));

    return VAR_11;
}
