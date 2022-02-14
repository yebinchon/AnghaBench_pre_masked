
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t size; TYPE_4__* items; } ;
struct TYPE_11__ {TYPE_1__ conf; TYPE_3__ const* module; } ;
typedef TYPE_2__ vlc_plugin_t ;
struct TYPE_12__ {TYPE_2__* plugin; } ;
typedef TYPE_3__ module_t ;
struct TYPE_13__ {scalar_t__ b_removed; scalar_t__ b_internal; } ;
typedef TYPE_4__ module_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__ const*,int) ;
 TYPE_4__* FUNC_2 (size_t,int) ;

module_config_t *FUNC_3( const module_t *VAR_0, unsigned *restrict VAR_1 )
{
    const vlc_plugin_t *VAR_2 = VAR_0->plugin;

    if (VAR_2->module != VAR_0)
    {

        *VAR_1 = 0;
        return ((void*)0);
    }

    unsigned VAR_3,VAR_4;
    size_t VAR_5 = VAR_2->conf.size;
    module_config_t *VAR_6 = FUNC_2( VAR_5, sizeof( *VAR_6 ) );

    FUNC_0( VAR_1 != ((void*)0) );
    *VAR_1 = 0;

    if( !VAR_6 )
        return ((void*)0);

    for( VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_5; VAR_3++ )
    {
        const module_config_t *VAR_7 = VAR_2->conf.items + VAR_3;
        if( VAR_7->b_internal
         || VAR_7->b_removed )
            continue;

        FUNC_1( VAR_6 + VAR_4, VAR_7, sizeof( *VAR_6 ) );
        VAR_4++;
    }
    *VAR_1 = VAR_4;

    return VAR_6;
}
