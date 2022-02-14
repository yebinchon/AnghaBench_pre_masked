
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; TYPE_3__* items; } ;
struct TYPE_9__ {TYPE_1__ conf; struct TYPE_9__* next; } ;
typedef TYPE_2__ vlc_plugin_t ;
struct TYPE_10__ {int i_type; } ;
typedef TYPE_3__ module_config_t ;
struct TYPE_11__ {size_t count; TYPE_3__** list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_1 (TYPE_3__**,size_t,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__** FUNC_3 (size_t,int) ;
 TYPE_2__* VAR_4 ;

int FUNC_4 (void)
{
    vlc_plugin_t *VAR_5;
    size_t VAR_6 = 0;

    for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
         VAR_6 += VAR_5->conf.size;

    module_config_t **VAR_7 = FUNC_3 (VAR_6, sizeof (*VAR_7));
    if (FUNC_2(VAR_7 == ((void*)0)))
        return VAR_0;

    VAR_6 = 0;
    for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
        module_config_t *VAR_8, *VAR_9;

        for (VAR_8 = VAR_5->conf.items, VAR_9 = VAR_8 + VAR_5->conf.size;
             VAR_8 < VAR_9;
             VAR_8++)
        {
            if (!FUNC_0(VAR_8->i_type))
                continue;
            VAR_7[VAR_6++] = VAR_8;
        }
    }

    FUNC_1 (VAR_7, VAR_6, sizeof (*VAR_7), VAR_2);

    VAR_3.list = VAR_7;
    VAR_3.count = VAR_6;
    return VAR_1;
}
