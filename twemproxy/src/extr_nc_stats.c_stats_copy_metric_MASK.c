
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int counter; } ;
struct stats_metric {TYPE_1__ value; int name; } ;
struct stats {int dummy; } ;
struct array {int dummy; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 struct stats_metric* FUNC_0 (struct array*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct array*) ;
 int FUNC_2 (struct stats*,int *,int ) ;

__attribute__((used)) static rstatus_t
FUNC_3(struct stats *VAR_1, struct array *VAR_2)
{
    rstatus_t VAR_3;
    uint32_t VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_2); VAR_4++) {
        struct stats_metric *VAR_5 = FUNC_0(VAR_2, VAR_4);

        VAR_3 = FUNC_2(VAR_1, &VAR_5->name, VAR_5->value.counter);
        if (VAR_3 != VAR_0) {
            return VAR_3;
        }
    }

    return VAR_0;
}
