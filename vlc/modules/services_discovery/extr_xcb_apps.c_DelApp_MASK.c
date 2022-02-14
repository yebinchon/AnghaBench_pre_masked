
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct app {int item; int owner; } ;


 int FUNC_0 (struct app*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3 (void *VAR_0)
{
    struct app *VAR_1 = VAR_0;

    FUNC_2 (VAR_1->owner, VAR_1->item);
    FUNC_1 (VAR_1->item);
    FUNC_0 (VAR_1);
}
