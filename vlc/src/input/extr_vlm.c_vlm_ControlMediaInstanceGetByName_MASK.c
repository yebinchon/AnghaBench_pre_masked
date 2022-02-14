
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_instance; TYPE_2__** instance; } ;
typedef TYPE_1__ vlm_media_sys_t ;
struct TYPE_6__ {char* psz_name; } ;
typedef TYPE_2__ vlm_media_instance_sys_t ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static vlm_media_instance_sys_t *FUNC_1( vlm_media_sys_t *VAR_0, const char *VAR_1 )
{
    for( int VAR_2 = 0; VAR_2 < VAR_0->i_instance; VAR_2++ )
    {
        const char *VAR_3 = VAR_0->instance[VAR_2]->psz_name;
        if( ( VAR_3 == ((void*)0) && VAR_1 == ((void*)0) ) ||
            ( VAR_3 && VAR_1 && !FUNC_0( VAR_3, VAR_1 ) ) )
            return VAR_0->instance[VAR_2];
    }
    return ((void*)0);
}
