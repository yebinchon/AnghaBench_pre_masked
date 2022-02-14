
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_15__ {int synth; int end_date; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_16__ {int i_flags; scalar_t__ i_pts; int i_buffer; int* p_buffer; int i_length; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,scalar_t__) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int,int) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ,char*,int,int *,int *,int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,unsigned int,int*,int ,int,int*,int,int) ;
 int FUNC_17 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_18 (decoder_t *VAR_4, block_t *VAR_5)
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;
    block_t *VAR_7 = ((void*)0);

    if (VAR_5 == ((void*)0))
        return VAR_2;

    if (VAR_5->i_flags & (VAR_1|VAR_0))
    {
        FUNC_0 (VAR_4);
        if (VAR_5->i_flags & VAR_0)
        {
            FUNC_1(VAR_5);
            return VAR_2;
        }
    }

    if (VAR_5->i_pts != VAR_3
     && FUNC_2(&VAR_6->end_date) == VAR_3)
        FUNC_4 (&VAR_6->end_date, VAR_5->i_pts);
    else
    if (VAR_5->i_pts < FUNC_2 (&VAR_6->end_date))
    {
        FUNC_17 (VAR_4, "MIDI message in the past?");
        goto drop;
    }

    if (VAR_5->i_buffer < 1)
        goto drop;

    uint8_t VAR_8 = VAR_5->p_buffer[0];
    uint8_t VAR_9 = VAR_5->p_buffer[0] & 0xf;
    VAR_8 &= 0xF0;

    if (VAR_8 == 0xF0)
        switch (VAR_9)
        {
            case 0:
                if (VAR_5->p_buffer[VAR_5->i_buffer - 1] != 0xF7)
                {
            case 7:
                    FUNC_17 (VAR_4, "fragmented SysEx not implemented");
                    goto drop;
                }
                FUNC_14 (VAR_6->synth, (char *)VAR_5->p_buffer + 1,
                                   VAR_5->i_buffer - 2, ((void*)0), ((void*)0), ((void*)0), 0);
                break;
            case 0xF:
                FUNC_15 (VAR_6->synth);
                break;
        }

    uint8_t VAR_10 = (VAR_5->i_buffer > 1) ? (VAR_5->p_buffer[1] & 0x7f) : 0;
    uint8_t VAR_11 = (VAR_5->i_buffer > 2) ? (VAR_5->p_buffer[2] & 0x7f) : 0;

    switch (VAR_8 & 0xF0)
    {
        case 0x80:
            FUNC_10 (VAR_6->synth, VAR_9, VAR_10);
            break;
        case 0x90:
            FUNC_11 (VAR_6->synth, VAR_9, VAR_10, VAR_11);
            break;

        case 0xB0:
            FUNC_8 (VAR_6->synth, VAR_9, VAR_10, VAR_11);
            break;
        case 0xC0:
            FUNC_13 (VAR_6->synth, VAR_9, VAR_10);
            break;
        case 0xD0:
            FUNC_9 (VAR_6->synth, VAR_9, VAR_10);
            break;
        case 0xE0:
            FUNC_12 (VAR_6->synth, VAR_9, (VAR_11 << 7) | VAR_10);
            break;
    }

    unsigned VAR_12 =
        (VAR_5->i_pts - FUNC_2 (&VAR_6->end_date)) * 441 / 10000;
    if (VAR_12 == 0)
        goto drop;

    if (FUNC_7 (VAR_4))
        goto drop;
    VAR_7 = FUNC_5 (VAR_4, VAR_12);
    if (VAR_7 == ((void*)0))
        goto drop;

    VAR_7->i_pts = FUNC_2 (&VAR_6->end_date );
    VAR_7->i_length = FUNC_3 (&VAR_6->end_date, VAR_12)
                      - VAR_7->i_pts;
    FUNC_16 (VAR_6->synth, VAR_12, VAR_7->p_buffer, 0, 2,
                             VAR_7->p_buffer, 1, 2);
drop:
    FUNC_1 (VAR_5);
    if (VAR_7 != ((void*)0))
        FUNC_6 (VAR_4, VAR_7);
    return VAR_2;
}
