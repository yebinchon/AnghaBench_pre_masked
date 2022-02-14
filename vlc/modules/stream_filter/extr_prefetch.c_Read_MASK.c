
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int paused; size_t stream_offset; size_t buffer_size; int lock; int wait_space; scalar_t__ buffer; int wait_data; int interrupt; scalar_t__ error; } ;
typedef TYPE_2__ stream_sys_t ;
typedef size_t ssize_t ;


 size_t FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (void*,scalar_t__,size_t) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,void**) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;
    size_t VAR_4, VAR_5;
    bool VAR_6;

    if (VAR_2 == 0)
        return VAR_2;

    FUNC_7(&VAR_3->lock);
    if (VAR_3->paused)
    {
        FUNC_2(VAR_0, "reading while paused (buggy demux?)");
        VAR_3->paused = 0;
        FUNC_3(&VAR_3->wait_space);
    }

    while ((VAR_4 = FUNC_0(VAR_0, &VAR_6)) == 0 && !VAR_6)
    {
        void *VAR_7[2];

        if (VAR_3->error)
        {
            FUNC_8(&VAR_3->lock);
            return 0;
        }

        FUNC_5(VAR_3->interrupt, VAR_7);
        FUNC_4(&VAR_3->wait_data, &VAR_3->lock);
        FUNC_6(VAR_7);
    }

    VAR_5 = VAR_3->stream_offset % VAR_3->buffer_size;
    if (VAR_4 > VAR_2)
        VAR_4 = VAR_2;

    if (VAR_5 + VAR_4 > VAR_3->buffer_size)
        VAR_4 = VAR_3->buffer_size - VAR_5;

    FUNC_1(VAR_1, VAR_3->buffer + VAR_5, VAR_4);
    VAR_3->stream_offset += VAR_4;
    FUNC_3(&VAR_3->wait_space);
    FUNC_8(&VAR_3->lock);
    return VAR_4;
}
