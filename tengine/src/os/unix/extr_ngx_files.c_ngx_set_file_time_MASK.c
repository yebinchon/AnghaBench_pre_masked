
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int time_t ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int ngx_int_t ;
typedef int ngx_fd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,struct timeval*) ;

ngx_int_t
FUNC_2(u_char *VAR_2, ngx_fd_t VAR_3, time_t VAR_4)
{
    struct timeval VAR_5[2];

    VAR_5[0].tv_sec = FUNC_0();
    VAR_5[0].tv_usec = 0;
    VAR_5[1].tv_sec = VAR_4;
    VAR_5[1].tv_usec = 0;

    if (FUNC_1((char *) VAR_2, VAR_5) != -1) {
        return VAR_1;
    }

    return VAR_0;
}
