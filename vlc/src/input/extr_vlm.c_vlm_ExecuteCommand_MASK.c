
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ vlm_t ;
typedef int vlm_message_t ;


 int FUNC_0 (TYPE_1__*,char const*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( vlm_t *VAR_0, const char *VAR_1,
                        vlm_message_t **VAR_2)
{
    int VAR_3;

    FUNC_1( &VAR_0->lock );
    VAR_3 = FUNC_0( VAR_0, VAR_1, VAR_2 );
    FUNC_2( &VAR_0->lock );

    return VAR_3;
}
