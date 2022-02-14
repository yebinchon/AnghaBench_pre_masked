
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int (* pf_seek ) (TYPE_1__*,scalar_t__) ;} ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {int eof; scalar_t__ offset; TYPE_3__* block; TYPE_3__* peek; } ;
typedef TYPE_2__ stream_priv_t ;
struct TYPE_9__ {scalar_t__ i_buffer; size_t p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

int FUNC_2(stream_t *VAR_2, uint64_t VAR_3)
{
    stream_priv_t *VAR_4 = (stream_priv_t *)VAR_2;

    VAR_4->eof = 0;

    block_t *VAR_5 = VAR_4->peek;
    if (VAR_5 != ((void*)0))
    {
        if (VAR_3 >= VAR_4->offset
         && VAR_3 <= (VAR_4->offset + VAR_5->i_buffer))
        {
            size_t VAR_6 = VAR_3 - VAR_4->offset;

            VAR_5->p_buffer += VAR_6;
            VAR_5->i_buffer -= VAR_6;
            VAR_4->offset = VAR_3;

            if (VAR_5->i_buffer == 0)
            {
                VAR_4->peek = ((void*)0);
                FUNC_0(VAR_5);
            }

            return VAR_1;
        }
    }
    else
    {
        if (VAR_4->offset == VAR_3)
            return VAR_1;
    }

    if (VAR_2->pf_seek == ((void*)0))
        return VAR_0;

    int VAR_7 = VAR_2->pf_seek(VAR_2, VAR_3);
    if (VAR_7 != VAR_1)
        return VAR_7;

    VAR_4->offset = VAR_3;

    if (VAR_5 != ((void*)0))
    {
        VAR_4->peek = ((void*)0);
        FUNC_0(VAR_5);
    }

    if (VAR_4->block != ((void*)0))
    {
        FUNC_0(VAR_4->block);
        VAR_4->block = ((void*)0);
    }

    return VAR_1;
}
