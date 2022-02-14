
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int cookie; int data; int (* release ) (int ,int ,size_t,void*) ;scalar_t__ (* get ) (int ,int ,scalar_t__*,scalar_t__*,unsigned int*,size_t*,void**) ;} ;
struct TYPE_9__ {scalar_t__ deadline; scalar_t__ dts; TYPE_1__ source; int es; } ;
typedef TYPE_2__ imem_sys_t ;
struct TYPE_10__ {int out; scalar_t__ p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_11__ {scalar_t__ i_dts; int p_buffer; scalar_t__ i_pts; } ;
typedef TYPE_4__ block_t ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,void*,size_t) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*,scalar_t__*,unsigned int*,size_t*,void**) ;
 int FUNC_5 (int ,int ,size_t,void*) ;

__attribute__((used)) static int FUNC_6(demux_t *VAR_1)
{
    imem_sys_t *VAR_2 = (imem_sys_t*)VAR_1->p_sys;

    if (VAR_2->deadline == VAR_0)
        VAR_2->deadline = VAR_2->dts + 1;

    for (;;) {
        if (VAR_2->deadline <= VAR_2->dts)
            break;


        int64_t VAR_3, VAR_4;
        unsigned VAR_5;
        size_t VAR_6;
        void *VAR_7;

        if (VAR_2->source.get(VAR_2->source.data, VAR_2->source.cookie,
                            &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7))
            return 0;

        if (VAR_3 < 0)
            VAR_3 = VAR_4;

        if (VAR_6 > 0) {
            block_t *VAR_8 = FUNC_0(VAR_6);
            if (VAR_8) {
                VAR_8->i_dts = VAR_3 >= 0 ? (1 + VAR_3) : VAR_0;
                VAR_8->i_pts = VAR_4 >= 0 ? (1 + VAR_4) : VAR_0;
                FUNC_3(VAR_8->p_buffer, VAR_7, VAR_6);

                FUNC_2(VAR_1->out, VAR_8->i_dts);
                FUNC_1(VAR_1->out, VAR_2->es, VAR_8);
            }
        }

        VAR_2->dts = VAR_3;

        VAR_2->source.release(VAR_2->source.data, VAR_2->source.cookie,
                            VAR_6, VAR_7);
    }
    VAR_2->deadline = VAR_0;
    return 1;
}
