
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int stream_t ;
struct TYPE_6__ {TYPE_2__* peek; TYPE_2__* block; } ;
typedef TYPE_1__ stream_priv_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_7__ {size_t i_buffer; int * p_buffer; } ;
typedef TYPE_2__ block_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (size_t) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,size_t) ;

ssize_t FUNC_4(stream_t *VAR_1, const uint8_t **restrict VAR_2, size_t VAR_3)
{
    stream_priv_t *VAR_4 = (stream_priv_t *)VAR_1;
    block_t *VAR_5;

    VAR_5 = VAR_4->peek;
    if (VAR_5 == ((void*)0))
    {
        VAR_5 = VAR_4->block;
        VAR_4->peek = VAR_5;
        VAR_4->block = ((void*)0);
    }

    if (VAR_5 == ((void*)0))
    {
        VAR_5 = FUNC_0(VAR_3);
        if (FUNC_2(VAR_5 == ((void*)0)))
            return VAR_0;

        VAR_5->i_buffer = 0;
    }
    else
    if (VAR_5->i_buffer < VAR_3)
    {
        size_t VAR_6 = VAR_5->i_buffer;

        VAR_5 = FUNC_1(VAR_5, 0, VAR_3);
        if (FUNC_2(VAR_5 == ((void*)0)))
            return VAR_0;

        VAR_5->i_buffer = VAR_6;
    }

    VAR_4->peek = VAR_5;
    *VAR_2 = VAR_5->p_buffer;

    while (VAR_5->i_buffer < VAR_3)
    {
        size_t VAR_7 = VAR_5->i_buffer;
        ssize_t VAR_8;

        VAR_8 = FUNC_3(VAR_1, VAR_5->p_buffer + VAR_7, VAR_3 - VAR_7);
        if (VAR_8 < 0)
            continue;

        VAR_5->i_buffer += VAR_8;

        if (VAR_8 == 0)
            return VAR_5->i_buffer;
    }

    return VAR_3;
}
