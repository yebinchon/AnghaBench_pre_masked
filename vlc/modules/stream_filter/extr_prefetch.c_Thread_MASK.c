
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint_fast64_t ;
typedef size_t uint64_t ;
struct TYPE_8__ {int state; int id; } ;
struct stream_ctrl {TYPE_1__ id_state; int query; struct stream_ctrl* next; } ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_10__ {int paused; int error; scalar_t__ stream_offset; scalar_t__ buffer_offset; size_t buffer_length; int eof; size_t seek_threshold; size_t buffer_size; int wait_data; scalar_t__ buffer; int lock; int wait_space; scalar_t__ can_seek; struct stream_ctrl* controls; int interrupt; } ;
typedef TYPE_3__ stream_sys_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct stream_ctrl*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void *FUNC_14(void *VAR_1)
{
    stream_t *VAR_2 = VAR_1;
    stream_sys_t *VAR_3 = VAR_2->p_sys;
    bool VAR_4 = 0;

    FUNC_12(VAR_3->interrupt);

    FUNC_13(&VAR_3->lock);
    FUNC_6(&VAR_3->lock);
    for (;;)
    {
        struct stream_ctrl *VAR_5 = VAR_3->controls;

        if (FUNC_7(VAR_5 != ((void*)0)))
        {
            VAR_3->controls = VAR_5->next;
            FUNC_0(VAR_2, VAR_5->query, VAR_5->id_state.id,
                          VAR_5->id_state.state);
            FUNC_4(VAR_5);
            continue;
        }

        if (VAR_3->paused != VAR_4)
        {
            FUNC_5(VAR_2, VAR_4 ? "resuming" : "pausing");
            VAR_4 = VAR_3->paused;
            FUNC_0(VAR_2, VAR_0, VAR_4);
            continue;
        }

        if (VAR_4 || VAR_3->error)
        {
            FUNC_11(&VAR_3->wait_space, &VAR_3->lock);
            continue;
        }

        uint_fast64_t VAR_6 = VAR_3->stream_offset;

        if (VAR_6 < VAR_3->buffer_offset)
        {
            if (FUNC_2(VAR_2, VAR_6) == 0)
            {
                VAR_3->buffer_offset = VAR_6;
                VAR_3->buffer_length = 0;
                FUNC_3(!VAR_3->error);
                VAR_3->eof = 0;
            }
            else
            {
                VAR_3->error = 1;
                FUNC_10(&VAR_3->wait_data);
            }
            continue;
        }

        if (VAR_3->eof)
        {
            FUNC_11(&VAR_3->wait_space, &VAR_3->lock);
            continue;
        }

        FUNC_3(VAR_6 >= VAR_3->buffer_offset);




        uint64_t VAR_7 = VAR_6 - VAR_3->buffer_offset;






        if (VAR_3->can_seek
         && VAR_7 >= (VAR_3->buffer_length + VAR_3->seek_threshold))
        {
            if (FUNC_2(VAR_2, VAR_6) == 0)
            {
                VAR_3->buffer_offset = VAR_6;
                VAR_3->buffer_length = 0;
                FUNC_3(!VAR_3->error);
                FUNC_3(!VAR_3->eof);
            }
            else
            {




                VAR_3->error = 1;
                FUNC_10(&VAR_3->wait_data);
            }
            continue;
        }

        FUNC_3(VAR_3->buffer_size >= VAR_3->buffer_length);

        size_t VAR_8 = VAR_3->buffer_size - VAR_3->buffer_length;
        if (VAR_8 == 0)
        {
            if (VAR_7 == 0)
            {
                FUNC_11(&VAR_3->wait_space, &VAR_3->lock);
                continue;
            }


            VAR_8 = VAR_7 > VAR_3->buffer_length ? VAR_3->buffer_length : VAR_7;

            VAR_3->buffer_offset += VAR_8;
            VAR_3->buffer_length -= VAR_8;
        }

        size_t VAR_9 = (VAR_3->buffer_offset + VAR_3->buffer_length)
                        % VAR_3->buffer_size;

        if (VAR_9 + VAR_8 > VAR_3->buffer_size)
            VAR_8 = VAR_3->buffer_size - VAR_9;

        ssize_t VAR_10 = FUNC_1(VAR_2, VAR_3->buffer + VAR_9, VAR_8);
        if (VAR_10 < 0)
            continue;
        if (VAR_10 == 0)
        {
            FUNC_3(VAR_8 > 0);
            FUNC_5(VAR_2, "end of stream");
            VAR_3->eof = 1;
        }

        FUNC_3((size_t)VAR_10 <= VAR_8);
        VAR_3->buffer_length += VAR_10;
        FUNC_3(VAR_3->buffer_length <= VAR_3->buffer_size);


        FUNC_10(&VAR_3->wait_data);
    }
    FUNC_8();
    FUNC_9();
    return ((void*)0);
}
