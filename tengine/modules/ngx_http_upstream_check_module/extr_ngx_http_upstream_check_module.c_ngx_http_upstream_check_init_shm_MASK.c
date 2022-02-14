
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_8__ {int init; int data; } ;
typedef TYPE_1__ ngx_shm_zone_t ;
struct TYPE_9__ {int check_shm_size; TYPE_7__* peers; } ;
typedef TYPE_2__ ngx_http_upstream_check_main_conf_t ;
struct TYPE_10__ {int pool; int log; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_11__ {int check_shm_name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,char*,int *,int) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int *,int,int *) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_6, void *VAR_7)
{
    ngx_str_t *VAR_8;
    ngx_uint_t VAR_9;
    ngx_shm_zone_t *VAR_10;
    ngx_http_upstream_check_main_conf_t *VAR_11 = VAR_7;

    VAR_5++;

    VAR_8 = &VAR_11->peers->check_shm_name;

    FUNC_0(VAR_8, VAR_6->pool,
                                VAR_5);


    VAR_9 = 1 * 1024 * 1024;

    VAR_9 = VAR_9 < VAR_11->check_shm_size ?
                          VAR_11->check_shm_size : VAR_9;

    VAR_10 = FUNC_2(VAR_6, VAR_8, VAR_9,
                                     &VAR_4);

    FUNC_1(VAR_1, VAR_6->log, 0,
                   "http upstream check, upsteam:%V, shm_zone size:%ui",
                   VAR_8, VAR_9);

    VAR_10->data = VAR_6->pool;
    VAR_2 = VAR_11->peers;

    VAR_10->init = VAR_3;

    return VAR_0;
}
