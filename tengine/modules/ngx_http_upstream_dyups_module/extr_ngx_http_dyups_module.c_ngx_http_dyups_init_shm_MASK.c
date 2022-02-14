
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int init; int data; } ;
typedef TYPE_1__ ngx_shm_zone_t ;
struct TYPE_8__ {int shm_size; int shm_name; } ;
typedef TYPE_2__ ngx_http_dyups_main_conf_t ;
struct TYPE_9__ {int pool; int log; } ;
typedef TYPE_3__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,char*,int *,int ) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int *,int ,int *) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_7, void *VAR_8)
{
    ngx_http_dyups_main_conf_t *VAR_9 = VAR_8;

    ngx_shm_zone_t *VAR_10;

    VAR_6++;

    if (FUNC_0(&VAR_9->shm_name, VAR_7->pool,
                                     VAR_6)
        != VAR_3)
    {
        return VAR_0;
    }

    VAR_10 = FUNC_2(VAR_7, &VAR_9->shm_name, VAR_9->shm_size,
                                     &VAR_5);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_2, VAR_7->log, 0,
                  "[dyups] init shm:%V, size:%ui", &VAR_9->shm_name,
                  VAR_9->shm_size);

    VAR_10->data = VAR_7->pool;
    VAR_10->init = VAR_4;

    return VAR_1;
}
