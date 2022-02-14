
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_stream_fifo_t ;
typedef int ssize_t ;
struct TYPE_4__ {int p_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (int ,void const*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;

ssize_t FUNC_4(vlc_stream_fifo_t *VAR_0,
                              const void *VAR_1, size_t VAR_2)
{
    block_t *VAR_3 = FUNC_0(VAR_2);
    if (FUNC_2(VAR_3 == ((void*)0)))
        return -1;

    FUNC_1(VAR_3->p_buffer, VAR_1, VAR_2);
    return FUNC_3(VAR_0, VAR_3) ? -1 : (ssize_t)VAR_2;
}
