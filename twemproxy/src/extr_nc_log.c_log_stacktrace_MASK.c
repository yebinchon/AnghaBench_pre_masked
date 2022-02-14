
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {scalar_t__ fd; } ;


 struct logger VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void
FUNC_1(void)
{
    struct logger *VAR_1 = &VAR_0;

    if (VAR_1->fd < 0) {
        return;
    }
    FUNC_0(VAR_1->fd);
}
