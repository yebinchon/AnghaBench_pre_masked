
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* psz_capability; } ;
typedef TYPE_1__ module_t ;



const char *FUNC_0 (const module_t *VAR_0)
{
    return (VAR_0->psz_capability != ((void*)0)) ? VAR_0->psz_capability : "none";
}
