
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct stats_server {int metric; } ;
struct stats_metric {int dummy; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t,int) ;
 struct stats_metric* FUNC_1 (int *) ;
 int FUNC_2 (struct stats_metric*) ;
 struct stats_metric* VAR_2 ;

__attribute__((used)) static rstatus_t
FUNC_3(struct stats_server *VAR_3)
{
    rstatus_t VAR_4;
    uint32_t VAR_5, VAR_6 = VAR_1;

    VAR_4 = FUNC_0(&VAR_3->metric, VAR_6, sizeof(struct stats_metric));
    if (VAR_4 != VAR_0) {
        return VAR_4;
    }

    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
        struct stats_metric *VAR_7 = FUNC_1(&VAR_3->metric);


        *VAR_7 = VAR_2[VAR_5];


        FUNC_2(VAR_7);
    }

    return VAR_0;
}
