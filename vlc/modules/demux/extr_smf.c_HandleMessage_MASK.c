
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int stream_t ;
struct TYPE_16__ {int running_event; scalar_t__ start; scalar_t__ offset; } ;
typedef TYPE_1__ mtrk_t ;
typedef int int32_t ;
typedef int es_out_t ;
struct TYPE_17__ {TYPE_3__* p_sys; int * s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_18__ {int es; int pts; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_19__ {int* p_buffer; int i_pts; int i_dts; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 TYPE_4__* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int*,int) ;
 scalar_t__ FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static
int FUNC_12 (demux_t *VAR_0, mtrk_t *VAR_1, es_out_t *VAR_2)
{
    stream_t *VAR_3 = VAR_0->s;
    demux_sys_t *VAR_4 = VAR_0->p_sys;
    block_t *VAR_5;
    uint8_t VAR_6, VAR_7;
    int VAR_8;

    if (FUNC_10 (VAR_3, VAR_1->start + VAR_1->offset)
     || (FUNC_9 (VAR_3, &VAR_6, 1) != 1))
        return -1;

    VAR_7 = (VAR_6 & 0x80) ? VAR_6 : VAR_1->running_event;

    switch (VAR_7 & 0xf0)
    {
        case 0xF0:
            switch (VAR_7)
            {
                case 0xF0:
                case 0xF7:
                {

                    int32_t VAR_9 = FUNC_1 (VAR_3);
                    if (VAR_9 == -1)
                        return -1;

                    VAR_5 = FUNC_8 (VAR_3, VAR_9);
                    if (VAR_5 == ((void*)0))
                        return -1;
                    VAR_5 = FUNC_3 (VAR_5, 1, VAR_9);
                    if (VAR_5 == ((void*)0))
                        return -1;
                    VAR_5->p_buffer[0] = VAR_7;
                    goto send;
                }
                case 0xFF:
                    if (FUNC_0 (VAR_0, VAR_1))
                        return -1;


                    goto skip;
                case 0xF1:
                case 0xF3:
                    VAR_8 = 1;
                    break;
                case 0xF2:
                    VAR_8 = 2;
                    break;
                case 0xF4:
                case 0xF5:



                default:
                    VAR_8 = 0;
                    break;
            }
            break;
        case 0xC0:
        case 0xD0:
            VAR_8 = 1;
            break;
        default:
            VAR_8 = 2;
            break;
    }


    VAR_5 = FUNC_2 (1 + VAR_8);
    if (VAR_5 == ((void*)0))
        goto skip;

    VAR_5->p_buffer[0] = VAR_7;
    if (VAR_6 & 0x80)
    {
        if (FUNC_9(VAR_3, VAR_5->p_buffer + 1, VAR_8) < VAR_8)
            goto error;
    }
    else
    {
        if (VAR_8 == 0)
        {
            FUNC_7 (VAR_0, "malformatted MIDI event");
            goto error;
        }

        VAR_5->p_buffer[1] = VAR_6;
        if (VAR_8 > 1
         && FUNC_9(VAR_3, VAR_5->p_buffer + 2, VAR_8 - 1) < VAR_8 - 1)
            goto error;
    }

send:
    VAR_5->i_dts = VAR_5->i_pts = FUNC_5(&VAR_4->pts);
    if (VAR_2 != ((void*)0))
        FUNC_6(VAR_2, VAR_4->es, VAR_5);
    else
        FUNC_4 (VAR_5);

skip:
    if (VAR_7 < 0xF8)

        VAR_1->running_event = VAR_7;

    VAR_1->offset = FUNC_11 (VAR_3) - VAR_1->start;
    return 0;

error:
    FUNC_4(VAR_5);
    return -1;
}
