
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct msg *VAR_1)
{
    if (VAR_1->type == VAR_0) {
        return 1;
    }

    return 0;
}
