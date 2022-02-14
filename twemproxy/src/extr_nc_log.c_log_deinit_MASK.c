
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {scalar_t__ fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct logger VAR_1 ;

void
FUNC_1(void)
{
    struct logger *VAR_2 = &VAR_1;

    if (VAR_2->fd < 0 || VAR_2->fd == VAR_0) {
        return;
    }

    FUNC_0(VAR_2->fd);
}
