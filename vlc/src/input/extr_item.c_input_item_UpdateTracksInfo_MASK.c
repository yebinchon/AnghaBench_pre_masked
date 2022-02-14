
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int i_es; int lock; TYPE_2__** es; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_13__ {scalar_t__ i_id; } ;
typedef TYPE_2__ es_format_t ;


 int FUNC_0 (int,TYPE_2__**,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(input_item_t *VAR_0, const es_format_t *VAR_1)
{
    int VAR_2;
    es_format_t *VAR_3 = FUNC_4(sizeof *VAR_3);
    if (!VAR_3)
        return;

    FUNC_2(VAR_3, VAR_1);

    FUNC_5( &VAR_0->lock );

    for( VAR_2 = 0; VAR_2 < VAR_0->i_es; VAR_2++ )
    {
        if (VAR_0->es[VAR_2]->i_id != VAR_1->i_id)
            continue;


        FUNC_1(VAR_0->es[VAR_2]);
        FUNC_3(VAR_0->es[VAR_2]);
        VAR_0->es[VAR_2] = VAR_3;
        FUNC_6( &VAR_0->lock );
        return;
    }


    FUNC_0(VAR_0->i_es, VAR_0->es, VAR_3);
    FUNC_6( &VAR_0->lock );
}
