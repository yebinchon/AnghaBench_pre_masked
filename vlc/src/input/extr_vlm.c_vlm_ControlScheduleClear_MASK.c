
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_schedule; int * schedule; } ;
typedef TYPE_1__ vlm_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1( vlm_t *VAR_1 )
{
    while( VAR_1->i_schedule > 0 )
        FUNC_0( VAR_1, VAR_1->schedule[0] );

    return VAR_0;
}
