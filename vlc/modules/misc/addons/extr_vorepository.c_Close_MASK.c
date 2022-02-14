
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ addons_finder_t ;
struct TYPE_5__ {struct TYPE_5__* psz_tempfile; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(vlc_object_t *VAR_0)
{
    addons_finder_t *VAR_1 = (addons_finder_t*) VAR_0;
    if ( VAR_1->p_sys->psz_tempfile )
    {
        FUNC_1( VAR_1->p_sys->psz_tempfile );
        FUNC_0( VAR_1->p_sys->psz_tempfile );
    }
    FUNC_0( VAR_1->p_sys );
}
