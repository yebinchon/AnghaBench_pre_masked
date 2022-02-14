
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* psz_longname; char const* psz_shortname; } ;
typedef TYPE_1__ module_t ;


 char const* FUNC_0 (TYPE_1__ const*) ;

const char *FUNC_1( const module_t *VAR_0, bool VAR_1 )
{
    if( VAR_1 && ( VAR_0->psz_longname != ((void*)0)) )
        return VAR_0->psz_longname;

    if (VAR_0->psz_shortname != ((void*)0))
        return VAR_0->psz_shortname;
    return FUNC_0 (VAR_0);
}
