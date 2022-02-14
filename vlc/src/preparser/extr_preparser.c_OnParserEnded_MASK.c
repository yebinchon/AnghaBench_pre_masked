
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* preparser; int done; int state; } ;
typedef TYPE_2__ input_preparser_task_t ;
typedef int input_item_t ;
struct TYPE_3__ {int worker; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(input_item_t *VAR_0, int VAR_1, void *VAR_2)
{
    FUNC_0(VAR_0);
    input_preparser_task_t* VAR_3 = VAR_2;

    FUNC_1( &VAR_3->state, VAR_1 );
    FUNC_1( &VAR_3->done, 1 );
    FUNC_2( VAR_3->preparser->worker );
}
