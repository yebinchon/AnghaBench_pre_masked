
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_15__ {size_t size; scalar_t__ exists; TYPE_3__ name; int * addr; int log; } ;
struct TYPE_17__ {void* tag; scalar_t__ noreuse; int * init; TYPE_2__ shm; int * data; } ;
typedef TYPE_4__ ngx_shm_zone_t ;
struct TYPE_18__ {size_t nelts; TYPE_4__* elts; struct TYPE_18__* next; } ;
typedef TYPE_5__ ngx_list_part_t ;
struct TYPE_19__ {TYPE_1__* cycle; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_13__ {TYPE_5__ part; } ;
struct TYPE_14__ {int log; TYPE_11__ shared_memory; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_6__*,int ,char*,...) ;
 TYPE_4__* FUNC_1 (TYPE_11__*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

ngx_shm_zone_t *
FUNC_3(ngx_conf_t *VAR_1, ngx_str_t *VAR_2, size_t VAR_3, void *VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_shm_zone_t *VAR_6;
    ngx_list_part_t *VAR_7;

    VAR_7 = &VAR_1->cycle->shared_memory.part;
    VAR_6 = VAR_7->elts;

    for (VAR_5 = 0; ; VAR_5++) {

        if (VAR_5 >= VAR_7->nelts) {
            if (VAR_7->next == ((void*)0)) {
                break;
            }
            VAR_7 = VAR_7->next;
            VAR_6 = VAR_7->elts;
            VAR_5 = 0;
        }

        if (VAR_2->len != VAR_6[VAR_5].shm.name.len) {
            continue;
        }

        if (FUNC_2(VAR_2->data, VAR_6[VAR_5].shm.name.data, VAR_2->len)
            != 0)
        {
            continue;
        }

        if (VAR_4 != VAR_6[VAR_5].tag) {
            FUNC_0(VAR_0, VAR_1, 0,
                            "the shared memory zone \"%V\" is "
                            "already declared for a different use",
                            &VAR_6[VAR_5].shm.name);
            return ((void*)0);
        }

        if (VAR_6[VAR_5].shm.size == 0) {
            VAR_6[VAR_5].shm.size = VAR_3;
        }

        if (VAR_3 && VAR_3 != VAR_6[VAR_5].shm.size) {
            FUNC_0(VAR_0, VAR_1, 0,
                            "the size %uz of shared memory zone \"%V\" "
                            "conflicts with already declared size %uz",
                            VAR_3, &VAR_6[VAR_5].shm.name, VAR_6[VAR_5].shm.size);
            return ((void*)0);
        }

        return &VAR_6[VAR_5];
    }

    VAR_6 = FUNC_1(&VAR_1->cycle->shared_memory);

    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6->data = ((void*)0);
    VAR_6->shm.log = VAR_1->cycle->log;
    VAR_6->shm.addr = ((void*)0);
    VAR_6->shm.size = VAR_3;
    VAR_6->shm.name = *VAR_2;
    VAR_6->shm.exists = 0;
    VAR_6->init = ((void*)0);
    VAR_6->tag = VAR_4;
    VAR_6->noreuse = 0;

    return VAR_6;
}
