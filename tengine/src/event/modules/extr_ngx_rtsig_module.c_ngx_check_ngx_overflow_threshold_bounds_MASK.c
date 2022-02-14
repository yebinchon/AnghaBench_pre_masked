
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int ,int *,int ,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    if (VAR_2) {
        return FUNC_0(VAR_3, VAR_4, VAR_5);
    }

    FUNC_1(VAR_1, VAR_3, 0,
                       "\"rtsig_overflow_threshold\" is not supported "
                       "since Linux 2.6.6-mm2, ignored");

    return VAR_0;
}
