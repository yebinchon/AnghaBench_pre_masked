
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_priority; } ;
typedef TYPE_1__ input_item_slave_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const input_item_slave_t *VAR_2 = *((const input_item_slave_t **) VAR_0);
    const input_item_slave_t *VAR_3 = *((const input_item_slave_t **) VAR_1);

    if( VAR_2 == ((void*)0) || VAR_3 == ((void*)0) )
    {

        return VAR_2 == ((void*)0) ? 1 : VAR_3 == ((void*)0) ? -1 : 0;
    }

    if( VAR_2->i_priority > VAR_3->i_priority )
        return -1;

    if( VAR_2->i_priority < VAR_3->i_priority )
        return 1;

    return 0;
}
