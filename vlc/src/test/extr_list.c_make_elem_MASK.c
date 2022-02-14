
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_list {int dummy; } ;
struct test_elem {int i; struct vlc_list node; } ;


 int FUNC_0 () ;
 struct test_elem* FUNC_1 (int) ;

__attribute__((used)) static struct vlc_list *FUNC_2(int VAR_0)
{
    struct test_elem *VAR_1 = FUNC_1(sizeof (*VAR_1));
    if (VAR_1 == ((void*)0))
        FUNC_0();

    VAR_1->i = VAR_0;
    return &VAR_1->node;
}
