
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_9__ {int len; int * data; } ;
struct TYPE_10__ {int options; TYPE_2__ err; int pattern; } ;
typedef TYPE_3__ ngx_regex_compile_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int * regex; } ;
struct TYPE_11__ {int handler; TYPE_1__ pattern; } ;
typedef TYPE_4__ ngx_http_proxy_rewrite_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,int *) ;
 int VAR_5 ;
 int * FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_6, ngx_http_proxy_rewrite_t *VAR_7,
    ngx_str_t *VAR_8, ngx_uint_t VAR_9)
{
    FUNC_0(VAR_1, VAR_6, 0,
                       "using regex \"%V\" requires PCRE library", VAR_8);
    return VAR_0;


}
