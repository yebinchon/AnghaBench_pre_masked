
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int p_fifo; } ;
typedef TYPE_1__ sout_input_t ;
struct TYPE_16__ {int tinfo; scalar_t__ extrabuilder; } ;
typedef TYPE_2__ mp4_stream_t ;
struct TYPE_17__ {int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_18__ {int i_codec; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;




 TYPE_3__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int const*,size_t) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 size_t FUNC_8 (scalar_t__,int const**) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static block_t * FUNC_10(sout_input_t *VAR_0, mp4_stream_t *VAR_1)
{
    block_t *VAR_2 = FUNC_2(VAR_0->p_fifo);
    if(FUNC_9(!VAR_2))
        return ((void*)0);


    if(VAR_1->extrabuilder && !FUNC_5(VAR_1->tinfo))
    {
         FUNC_7(VAR_1->extrabuilder,
                                    VAR_2->p_buffer, VAR_2->i_buffer);
         const uint8_t *VAR_3;
         size_t VAR_4 = FUNC_8(VAR_1->extrabuilder, &VAR_3);
         if(VAR_4)
            FUNC_6(VAR_1->tinfo, VAR_3, VAR_4);
    }

    switch(FUNC_4(VAR_1->tinfo)->i_codec)
    {
        case 131:
            VAR_2 = FUNC_0(VAR_2);
            break;
        case 130:
        case 129:
            VAR_2 = FUNC_3(VAR_2, 4);
            break;
        case 128:
            VAR_2 = FUNC_1(VAR_2);
            break;
        default:
            break;
    }

    return VAR_2;
}
