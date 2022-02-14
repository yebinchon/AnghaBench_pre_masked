
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int revents; int fd; } ;
typedef int p_timeout ;
typedef int * p_socket ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(p_socket VAR_8, int VAR_9, p_timeout VAR_10) {
    int VAR_11;
    struct pollfd VAR_12;
    VAR_12.fd = *VAR_8;
    VAR_12.events = VAR_9;
    VAR_12.revents = 0;
    if (FUNC_2(VAR_10)) return VAR_3;
    do {
        int VAR_13 = (int)(FUNC_1(VAR_10)*1e3);
        VAR_11 = FUNC_0(&VAR_12, 1, VAR_13 >= 0? VAR_13: -1);
    } while (VAR_11 == -1 && VAR_7 == VAR_0);
    if (VAR_11 == -1) return VAR_7;
    if (VAR_11 == 0) return VAR_3;
    if (VAR_9 == VAR_6 && (VAR_12.revents & (VAR_5|VAR_4))) return VAR_1;
    return VAR_2;
}
