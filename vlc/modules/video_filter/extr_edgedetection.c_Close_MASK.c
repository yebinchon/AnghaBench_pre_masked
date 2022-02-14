
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ filter_t ;
typedef int filter_chain_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_0 )
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    FUNC_0( (filter_chain_t *)VAR_1->p_sys );
}
