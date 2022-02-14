
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int ngx_fd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,char*) ;

void
FUNC_2(ngx_fd_t *VAR_2, ngx_log_t *VAR_3)
{
    if (FUNC_0(VAR_2[0]) == -1) {
        FUNC_1(VAR_0, VAR_3, VAR_1, "close() channel failed");
    }

    if (FUNC_0(VAR_2[1]) == -1) {
        FUNC_1(VAR_0, VAR_3, VAR_1, "close() channel failed");
    }
}
