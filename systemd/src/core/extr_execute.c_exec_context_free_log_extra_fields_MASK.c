
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int iov_base; } ;
struct TYPE_6__ {size_t n_log_extra_fields; TYPE_2__* log_extra_fields; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

void FUNC_3(ExecContext *VAR_0) {
        size_t VAR_1;

        FUNC_0(VAR_0);

        for (VAR_1 = 0; VAR_1 < VAR_0->n_log_extra_fields; VAR_1++)
                FUNC_1(VAR_0->log_extra_fields[VAR_1].iov_base);
        VAR_0->log_extra_fields = FUNC_2(VAR_0->log_extra_fields);
        VAR_0->n_log_extra_fields = 0;
}
