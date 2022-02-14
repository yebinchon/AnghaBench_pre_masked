
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stats_metric {int dummy; } ;
struct array {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct stats_metric* FUNC_1 (struct array*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct array*) ;
 int FUNC_3 (struct stats_metric*) ;

__attribute__((used)) static void
FUNC_4(struct array *VAR_2)
{
    uint32_t VAR_3, VAR_4;

    VAR_4 = FUNC_2(VAR_2);
    FUNC_0(VAR_4 == VAR_0 || VAR_4 == VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        struct stats_metric *VAR_5 = FUNC_1(VAR_2, VAR_3);

        FUNC_3(VAR_5);
    }
}
