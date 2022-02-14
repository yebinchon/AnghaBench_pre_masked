
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bufs; int enable; } ;
typedef TYPE_1__ ngx_http_gunzip_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_http_gunzip_conf_t *VAR_5 = VAR_3;
    ngx_http_gunzip_conf_t *VAR_6 = VAR_4;

    FUNC_1(VAR_6->enable, VAR_5->enable, 0);

    FUNC_0(VAR_6->bufs, VAR_5->bufs,
                              (128 * 1024) / VAR_1, VAR_1);

    return VAR_0;
}
