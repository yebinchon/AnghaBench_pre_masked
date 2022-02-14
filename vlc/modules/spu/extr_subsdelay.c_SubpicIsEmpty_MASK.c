
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p_region; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_4__ {int p_text; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1( subpicture_t* VAR_0 )
{
    return ( VAR_0->p_region && ( FUNC_0( VAR_0->p_region->p_text ) ) );
}
