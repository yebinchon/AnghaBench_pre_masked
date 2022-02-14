
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* psz_description; void* psz_language; int i_id; int i_group; } ;
typedef TYPE_1__ es_format_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static inline void FUNC_2( es_format_t *VAR_0, const es_format_t *VAR_1 )
{
    VAR_0->i_group = VAR_1->i_group;
    VAR_0->i_id = VAR_1->i_id;
    if( VAR_1->psz_language )
    {
        FUNC_0( VAR_0->psz_language );
        VAR_0->psz_language = FUNC_1( VAR_1->psz_language );
    }
    if( VAR_1->psz_description )
    {
        FUNC_0( VAR_0->psz_description );
        VAR_0->psz_description = FUNC_1( VAR_1->psz_description );
    }
}
