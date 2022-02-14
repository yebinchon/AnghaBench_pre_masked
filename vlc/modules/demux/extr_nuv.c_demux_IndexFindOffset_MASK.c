
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int i_idx; TYPE_1__* idx; } ;
typedef TYPE_2__ demux_index_t ;
struct TYPE_4__ {int i_offset; } ;



__attribute__((used)) static uint64_t FUNC_0(demux_index_t *VAR_0, uint64_t VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = VAR_0->i_idx-1;


    if( VAR_0->i_idx <= 0 )
        return -1;


    if( VAR_1 <= VAR_0->idx[0].i_offset )
        return VAR_0->idx[0].i_offset;
    if( VAR_1 == VAR_0->idx[VAR_3].i_offset )
        return VAR_0->idx[VAR_3].i_offset;
    if( VAR_1 > VAR_0->idx[VAR_3].i_offset )
        return -1;


    for( ;; )
    {
        int VAR_4;

        if( VAR_3 - VAR_2 <= 1 )
            break;

        VAR_4 = (VAR_2+VAR_3)/2;
        if( VAR_0->idx[VAR_4].i_offset < VAR_1 )
            VAR_2 = VAR_4;
        else if( VAR_0->idx[VAR_4].i_offset > VAR_1 )
            VAR_3 = VAR_4;
        else
            return VAR_0->idx[VAR_4].i_offset;
    }


    if( VAR_1 - VAR_0->idx[VAR_2].i_offset < VAR_0->idx[VAR_3].i_offset - VAR_1 )
        return VAR_0->idx[VAR_2].i_offset;
    else
        return VAR_0->idx[VAR_3].i_offset;
}
