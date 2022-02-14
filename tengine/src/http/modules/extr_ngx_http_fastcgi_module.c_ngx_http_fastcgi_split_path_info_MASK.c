
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
typedef void* ngx_str_t ;
struct TYPE_12__ {void* err; int captures; int regex; int pool; void* pattern; } ;
typedef TYPE_2__ ngx_regex_compile_t ;
struct TYPE_13__ {int split_regex; void* split_name; } ;
typedef TYPE_3__ ngx_http_fastcgi_loc_conf_t ;
struct TYPE_14__ {int pool; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_15__ {void* name; } ;
typedef TYPE_5__ ngx_command_t ;
struct TYPE_11__ {void** elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,void**) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    FUNC_0(VAR_2, VAR_5, 0,
                       "\"%V\" requires PCRE library", &VAR_6->name);
    return VAR_0;


}
