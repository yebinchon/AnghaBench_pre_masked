
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_socket ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int p_timeout ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int *,int *,struct timeval*) ;
 double FUNC_1 (int ) ;

int FUNC_2(t_socket VAR_2, fd_set *VAR_3, fd_set *VAR_4, fd_set *VAR_5,
        p_timeout VAR_6) {
    int VAR_7;
    do {
        struct timeval VAR_8;
        double VAR_9 = FUNC_1(VAR_6);
        VAR_8.tv_sec = (int) VAR_9;
        VAR_8.tv_usec = (int) ((VAR_9 - VAR_8.tv_sec) * 1.0e6);

        VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_9 >= 0.0 ? &VAR_8: ((void*)0));
    } while (VAR_7 < 0 && VAR_1 == VAR_0);
    return VAR_7;
}
