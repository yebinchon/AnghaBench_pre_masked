
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {int tid; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,struct stats*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct stats*) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static rstatus_t
FUNC_4(struct stats *VAR_4)
{
    rstatus_t VAR_5;

    if (!VAR_2) {
        return VAR_1;
    }

    VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 != VAR_1) {
        return VAR_5;
    }

    VAR_5 = FUNC_1(&VAR_4->tid, ((void*)0), VAR_3, VAR_4);
    if (VAR_5 < 0) {
        FUNC_0("stats aggregator create failed: %s", FUNC_3(VAR_5));
        return VAR_0;
    }

    return VAR_1;
}
