
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_whence; int l_type; } ;
typedef int ngx_fd_t ;
typedef int ngx_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct flock*) ;
 int VAR_3 ;
 int FUNC_1 (struct flock*,int) ;

ngx_err_t
FUNC_2(ngx_fd_t VAR_4)
{
    struct flock VAR_5;

    FUNC_1(&VAR_5, sizeof(struct flock));
    VAR_5.l_type = VAR_1;
    VAR_5.l_whence = VAR_2;

    if (FUNC_0(VAR_4, VAR_0, &VAR_5) == -1) {
        return VAR_3;
    }

    return 0;
}
