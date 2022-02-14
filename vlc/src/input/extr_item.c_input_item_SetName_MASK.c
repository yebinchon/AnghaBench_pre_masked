
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int psz_name; } ;
typedef TYPE_1__ input_item_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( input_item_t *VAR_0, const char *VAR_1 )
{
    FUNC_2( &VAR_0->lock );

    FUNC_0( VAR_0->psz_name );
    VAR_0->psz_name = FUNC_1( VAR_1 );

    FUNC_3( &VAR_0->lock );
}
