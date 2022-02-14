
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_md5_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int len; int * data; } ;
struct TYPE_9__ {TYPE_2__ sid; TYPE_1__* name; } ;
typedef TYPE_3__ ngx_http_ss_server_t ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_7__ {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_conf_t *VAR_2,
    ngx_http_ss_server_t *VAR_3)
{
    u_char VAR_4[16];
    ngx_md5_t VAR_5;

    VAR_3->sid.len = 32;
    VAR_3->sid.data = FUNC_4(VAR_2->pool, 32);
    if (VAR_3->sid.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(&VAR_5);
    FUNC_3(&VAR_5, VAR_3->name->data, VAR_3->name->len);
    FUNC_1(VAR_4, &VAR_5);

    FUNC_0(VAR_3->sid.data, VAR_4, 16);

    return VAR_1;
}
