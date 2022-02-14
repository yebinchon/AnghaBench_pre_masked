
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_next; int * psz_help; int * psz_longname; int * psz_shortname; int * psz_name; } ;
typedef TYPE_1__ libvlc_module_description_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (libvlc_module_description_t *VAR_0)
{
    libvlc_module_description_t *VAR_1 = VAR_0;
    while ( VAR_1 ) {
        FUNC_0 (FUNC_2 (VAR_1->psz_name) );
        FUNC_0 (FUNC_2 (VAR_1->psz_shortname) );
        FUNC_0 (VAR_1->psz_longname == ((void*)0) || FUNC_2 (VAR_1->psz_longname));
        FUNC_0 (VAR_1->psz_help == ((void*)0) || FUNC_2 (VAR_1->psz_help));
        VAR_1 = VAR_1->p_next;
    }

    FUNC_1 (VAR_0);
}
