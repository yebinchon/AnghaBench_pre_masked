
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_8__ {int cookie; int data; int (* release ) (int ,int ,size_t,void*) ;scalar_t__ (* get ) (int ,int ,int *,int *,unsigned int*,size_t*,void**) ;} ;
struct TYPE_10__ {TYPE_1__ source; } ;
typedef TYPE_3__ imem_sys_t ;
struct TYPE_11__ {int p_buffer; } ;
typedef TYPE_4__ block_t ;


 TYPE_4__* FUNC_0 (size_t) ;
 int FUNC_1 (int ,void*,size_t) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,unsigned int*,size_t*,void**) ;
 int FUNC_3 (int ,int ,size_t,void*) ;

__attribute__((used)) static block_t *FUNC_4(stream_t *VAR_0, bool *restrict VAR_1)
{
    imem_sys_t *VAR_2 = (imem_sys_t*)VAR_0->p_sys;

    unsigned VAR_3;
    size_t VAR_4;
    void *VAR_5;

    if (VAR_2->source.get(VAR_2->source.data, VAR_2->source.cookie,
                        ((void*)0), ((void*)0), &VAR_3, &VAR_4, &VAR_5)) {
        *VAR_1 = 1;
        return ((void*)0);
    }

    block_t *VAR_6 = ((void*)0);
    if (VAR_4 > 0) {
        VAR_6 = FUNC_0(VAR_4);
        if (VAR_6)
            FUNC_1(VAR_6->p_buffer, VAR_5, VAR_4);
    }

    VAR_2->source.release(VAR_2->source.data, VAR_2->source.cookie,
                        VAR_4, VAR_5);
    return VAR_6;
}
