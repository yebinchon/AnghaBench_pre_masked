
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_11__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_12__ {TYPE_7__* context; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_13__ {scalar_t__ i_buffer; int p_buffer; struct TYPE_13__* p_next; } ;
typedef TYPE_3__ block_t ;
struct TYPE_14__ {int error; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,char*,size_t,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t FUNC_7(sout_access_out_t *VAR_0, block_t *VAR_1)
{
    sout_access_out_sys_t *VAR_2 = (sout_access_out_sys_t*)VAR_0->p_sys;
    size_t VAR_3 = 0;
    int VAR_4;

    while (VAR_1 != ((void*)0)) {
        block_t *VAR_5 = VAR_1->p_next;

        FUNC_2(VAR_2->context, VAR_1->p_buffer, VAR_1->i_buffer);
        FUNC_1(VAR_2->context);
        if ((VAR_4 = VAR_2->context->error) != 0) {
            VAR_2->context->error = 0;
            goto error;
        }
        VAR_3 += VAR_1->i_buffer;

        FUNC_4(VAR_1);

        VAR_1 = VAR_5;
    }

    return VAR_3;

error:
    FUNC_5(VAR_0, "Wrote only %zu bytes: %s", VAR_3,
            FUNC_6(FUNC_0(VAR_4)));
    FUNC_3( VAR_1 );
    return VAR_3;
}
