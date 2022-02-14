
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {scalar_t__ level; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 struct logger VAR_1 ;

void
FUNC_1(void)
{
    struct logger *VAR_2 = &VAR_1;

    if (VAR_2->level < VAR_0) {
        VAR_2->level++;
        FUNC_0("up log level to %d", VAR_2->level);
    }
}
