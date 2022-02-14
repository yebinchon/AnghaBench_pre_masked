
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ t_socket ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int p_timeout ;
typedef int fd_set ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,struct timeval*) ;
 double FUNC_2 (int ) ;

int FUNC_3(t_socket VAR_0, fd_set *VAR_1, fd_set *VAR_2, fd_set *VAR_3,
        p_timeout VAR_4) {
    struct timeval VAR_5;
    double VAR_6 = FUNC_2(VAR_4);
    VAR_5.tv_sec = (int) VAR_6;
    VAR_5.tv_usec = (int) ((VAR_6 - VAR_5.tv_sec) * 1.0e6);
    if (VAR_0 <= 0) {
        FUNC_0((DWORD) (1000*VAR_6));
        return 0;
    } else return FUNC_1(0, VAR_1, VAR_2, VAR_3, VAR_6 >= 0.0? &VAR_5: ((void*)0));
}
