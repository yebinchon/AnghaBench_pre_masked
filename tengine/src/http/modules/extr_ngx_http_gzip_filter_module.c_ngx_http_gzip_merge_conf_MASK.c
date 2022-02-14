
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int types; int types_keys; int min_length; int memlevel; int wbits; int level; int postpone_gzipping; int bufs; int clear_etag; int no_buffer; int enable; } ;
typedef TYPE_1__ ngx_http_gzip_conf_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_7, void *VAR_8, void *VAR_9)
{
    ngx_http_gzip_conf_t *VAR_10 = VAR_8;
    ngx_http_gzip_conf_t *VAR_11 = VAR_9;

    FUNC_2(VAR_11->enable, VAR_10->enable, 0);
    FUNC_2(VAR_11->no_buffer, VAR_10->no_buffer, 0);




    FUNC_0(VAR_11->bufs, VAR_10->bufs,
                              (128 * 1024) / VAR_6, VAR_6);

    FUNC_1(VAR_11->postpone_gzipping, VAR_10->postpone_gzipping,
                              0);
    FUNC_2(VAR_11->level, VAR_10->level, 1);
    FUNC_1(VAR_11->wbits, VAR_10->wbits, VAR_1);
    FUNC_1(VAR_11->memlevel, VAR_10->memlevel,
                              VAR_0 - 1);
    FUNC_2(VAR_11->min_length, VAR_10->min_length, 20);

    if (FUNC_3(VAR_7, &VAR_11->types_keys, &VAR_11->types,
                             &VAR_10->types_keys, &VAR_10->types,
                             VAR_5)
        != VAR_4)
    {
        return VAR_2;
    }

    return VAR_3;
}
