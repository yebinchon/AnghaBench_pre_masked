
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbnode {int dummy; } ;
struct msg {int dummy; } ;


 struct msg* FUNC_0 (struct rbnode*) ;
 struct rbnode* FUNC_1 (int *) ;
 int VAR_0 ;

struct msg *
FUNC_2(void)
{
    struct rbnode *VAR_1;

    VAR_1 = FUNC_1(&VAR_0);
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    return FUNC_0(VAR_1);
}
