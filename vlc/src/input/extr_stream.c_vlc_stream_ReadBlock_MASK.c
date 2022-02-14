
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ (* pf_read ) (TYPE_1__*,int ,scalar_t__) ;TYPE_3__* (* pf_block ) (TYPE_1__*,int*) ;} ;
typedef TYPE_1__ stream_t ;
struct TYPE_12__ {int eof; int offset; TYPE_3__* block; TYPE_3__* peek; } ;
typedef TYPE_2__ stream_priv_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_13__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;

block_t *FUNC_6(stream_t *VAR_0)
{
    stream_priv_t *VAR_1 = (stream_priv_t *)VAR_0;
    block_t *VAR_2;

    if (FUNC_5())
    {
        VAR_1->eof = 1;
        return ((void*)0);
    }

    if (VAR_1->peek != ((void*)0))
    {
        VAR_2 = VAR_1->peek;
        VAR_1->peek = ((void*)0);
    }
    else if (VAR_1->block != ((void*)0))
    {
        VAR_2 = VAR_1->block;
        VAR_1->block = ((void*)0);
    }
    else if (VAR_0->pf_block != ((void*)0))
    {
        VAR_1->eof = 0;
        VAR_2 = VAR_0->pf_block(VAR_0, &VAR_1->eof);
    }
    else
    {
        VAR_2 = FUNC_0(4096);
        if (FUNC_4(VAR_2 == ((void*)0)))
            return ((void*)0);

        ssize_t VAR_3 = VAR_0->pf_read(VAR_0, VAR_2->p_buffer, VAR_2->i_buffer);
        if (VAR_3 > 0)
            VAR_2->i_buffer = VAR_3;
        else
        {
            FUNC_1(VAR_2);
            VAR_2 = ((void*)0);
        }

        VAR_1->eof = !VAR_3;
    }

    if (VAR_2 != ((void*)0))
        VAR_1->offset += VAR_2->i_buffer;

    return VAR_2;
}
