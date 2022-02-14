
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {scalar_t__ stream_offset; scalar_t__ buffer_offset; scalar_t__ buffer_length; int eof; } ;
typedef TYPE_2__ stream_sys_t ;



__attribute__((used)) static size_t FUNC_0(const stream_t *VAR_0, bool *VAR_1)
{
    stream_sys_t *VAR_2 = VAR_0->p_sys;

    *VAR_1 = 0;

    if (VAR_2->stream_offset < VAR_2->buffer_offset)
        return 0;
    if ((VAR_2->stream_offset - VAR_2->buffer_offset) >= VAR_2->buffer_length)
    {
        *VAR_1 = VAR_2->eof;
        return 0;
    }
    return VAR_2->buffer_offset + VAR_2->buffer_length - VAR_2->stream_offset;
}
