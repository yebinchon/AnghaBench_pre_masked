
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_9__ {scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int lock; int mutex; int owner; int down; scalar_t__ busyness; scalar_t__ rise_count; scalar_t__ fall_count; scalar_t__ access_count; scalar_t__ access_time; } ;
typedef TYPE_2__ ngx_http_upstream_check_peer_shm_t ;
struct TYPE_11__ {scalar_t__ len; } ;
struct TYPE_12__ {TYPE_3__ lock_file; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__* VAR_3 ;
 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,char*,TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_upstream_check_peer_shm_t *VAR_4,
    ngx_http_upstream_check_peer_shm_t *VAR_5, ngx_uint_t VAR_6,
    ngx_pool_t *VAR_7, ngx_str_t *VAR_8)
{
    u_char *VAR_9;

    if (VAR_5) {
        VAR_4->access_time = VAR_5->access_time;
        VAR_4->access_count = VAR_5->access_count;

        VAR_4->fall_count = VAR_5->fall_count;
        VAR_4->rise_count = VAR_5->rise_count;
        VAR_4->busyness = VAR_5->busyness;

        VAR_4->down = VAR_5->down;

    } else{
        VAR_4->access_time = 0;
        VAR_4->access_count = 0;

        VAR_4->fall_count = 0;
        VAR_4->rise_count = 0;
        VAR_4->busyness = 0;

        VAR_4->down = VAR_6;
    }

    VAR_4->owner = VAR_1;







    VAR_9 = FUNC_0(VAR_7, VAR_3->lock_file.len + VAR_8->len);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    (void) FUNC_2(VAR_9, "%V%V%Z", &VAR_3->lock_file, VAR_8);



    if (FUNC_1(&VAR_4->mutex, &VAR_4->lock, VAR_9) != VAR_2) {
        return VAR_0;
    }

    return VAR_2;
}
