
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int i_size; int i_max; TYPE_2__* p_entry; } ;
typedef TYPE_1__ avi_index_t ;
struct TYPE_8__ {scalar_t__ i_pos; scalar_t__ i_lengthtotal; scalar_t__ i_length; } ;
typedef TYPE_2__ avi_entry_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1( avi_index_t *VAR_0, uint64_t *VAR_1,
                              avi_entry_t *VAR_2 )
{

    if( *VAR_1 < VAR_2->i_pos )
         *VAR_1 = VAR_2->i_pos;


    if( VAR_0->i_size >= VAR_0->i_max )
    {
        VAR_0->i_max += 16384;
        VAR_0->p_entry = FUNC_0( VAR_0->p_entry,
                                            VAR_0->i_max * sizeof( *VAR_0->p_entry ) );
        if( !VAR_0->p_entry )
            return;
    }

    if( VAR_0->i_size > 0 )
    {
        VAR_2->i_lengthtotal =
            VAR_0->p_entry[VAR_0->i_size - 1].i_length +
                VAR_0->p_entry[VAR_0->i_size - 1].i_lengthtotal;
    }
    else
    {
        VAR_2->i_lengthtotal = 0;
    }

    VAR_0->p_entry[VAR_0->i_size++] = *VAR_2;
}
