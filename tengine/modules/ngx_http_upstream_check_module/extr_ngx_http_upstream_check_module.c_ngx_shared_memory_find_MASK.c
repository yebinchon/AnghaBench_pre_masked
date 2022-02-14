
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_14__ {scalar_t__ len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
struct TYPE_13__ {TYPE_2__ name; } ;
struct TYPE_15__ {void* tag; TYPE_3__ shm; } ;
typedef TYPE_5__ ngx_shm_zone_t ;
struct TYPE_16__ {size_t nelts; TYPE_5__* elts; struct TYPE_16__* next; } ;
typedef TYPE_6__ ngx_list_part_t ;
struct TYPE_11__ {int part; } ;
struct TYPE_17__ {TYPE_1__ shared_memory; } ;
typedef TYPE_7__ ngx_cycle_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_shm_zone_t *
FUNC_1(ngx_cycle_t *VAR_0, ngx_str_t *VAR_1, void *VAR_2)
{
    ngx_uint_t VAR_3;
    ngx_shm_zone_t *VAR_4;
    ngx_list_part_t *VAR_5;

    VAR_5 = (ngx_list_part_t *) &(VAR_0->shared_memory.part);
    VAR_4 = VAR_5->elts;

    for (VAR_3 = 0; ; VAR_3++) {

        if (VAR_3 >= VAR_5->nelts) {
            if (VAR_5->next == ((void*)0)) {
                break;
            }
            VAR_5 = VAR_5->next;
            VAR_4 = VAR_5->elts;
            VAR_3 = 0;
        }

        if (VAR_1->len != VAR_4[VAR_3].shm.name.len) {
            continue;
        }

        if (FUNC_0(VAR_1->data, VAR_4[VAR_3].shm.name.data, VAR_1->len)
                != 0)
        {
            continue;
        }

        if (VAR_2 != VAR_4[VAR_3].tag) {
            continue;
        }

        return &VAR_4[VAR_3];
    }

    return ((void*)0);
}
