
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int psz_name; } ;
typedef TYPE_1__ input_item_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

char *FUNC_3( input_item_t *VAR_0 )
{
    FUNC_1( &VAR_0->lock );

    char *VAR_1 = VAR_0->psz_name ? FUNC_0( VAR_0->psz_name ) : ((void*)0);

    FUNC_2( &VAR_0->lock );
    return VAR_1;
}
