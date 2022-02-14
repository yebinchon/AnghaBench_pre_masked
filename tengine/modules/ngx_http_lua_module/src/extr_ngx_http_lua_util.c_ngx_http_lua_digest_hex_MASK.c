
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_md5_t ;
typedef int md5_buf ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;

u_char *
FUNC_4(u_char *VAR_1, const u_char *VAR_2, int VAR_3)
{
    ngx_md5_t VAR_4;
    u_char VAR_5[VAR_0];

    FUNC_2(&VAR_4);
    FUNC_3(&VAR_4, VAR_2, VAR_3);
    FUNC_1(VAR_5, &VAR_4);

    return FUNC_0(VAR_1, VAR_5, sizeof(VAR_5));
}
