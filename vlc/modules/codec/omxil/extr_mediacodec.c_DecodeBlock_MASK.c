
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_19__ {int i_quirks; scalar_t__ b_started; } ;
struct TYPE_21__ {int (* pf_on_new_block ) (TYPE_2__*,TYPE_4__**) ;int i_decode_flags; int lock; scalar_t__ b_has_format; scalar_t__ b_aborted; TYPE_1__ api; scalar_t__ b_output_ready; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_22__ {int i_flags; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__**) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(decoder_t *VAR_10, block_t *VAR_11)
{
    decoder_sys_t *VAR_12 = VAR_10->p_sys;
    int VAR_13;

    FUNC_10(&VAR_12->lock);

    if (VAR_12->b_aborted)
    {
        if (VAR_12->b_has_format)
            goto end;
        else
            goto reload;
    }

    if (VAR_11 == ((void*)0))
    {

        FUNC_6(VAR_10, "Decoder is draining");

        if (VAR_12->b_output_ready)
            FUNC_2(VAR_10, ((void*)0), 1);
        goto end;
    }

    if (VAR_11->i_flags & (VAR_1|VAR_0))
    {
        if (VAR_12->b_output_ready)
            FUNC_2(VAR_10, ((void*)0), 1);
        FUNC_1(VAR_10);
        if (VAR_12->b_aborted)
            goto end;
        if (VAR_11->i_flags & VAR_0)
            goto end;
    }

    if (VAR_11->i_flags & VAR_2
     && !(VAR_12->api.i_quirks & VAR_5))
    {




        FUNC_7(VAR_10, "codec doesn't support interlaced videos");
        goto reload;
    }


    if ((VAR_13 = VAR_12->pf_on_new_block(VAR_10, &VAR_11)) != 1)
    {
        if (VAR_13 != 0)
        {
            FUNC_0(VAR_10);
            FUNC_6(VAR_10, "pf_on_new_block failed");
        }
        goto end;
    }
    if (VAR_12->i_decode_flags & (VAR_3|VAR_4))
    {
        FUNC_7(VAR_10, "Draining from DecodeBlock");
        const bool VAR_14 = VAR_12->i_decode_flags & VAR_4;
        VAR_12->i_decode_flags = 0;


        if (VAR_12->b_output_ready)
            FUNC_2(VAR_10, ((void*)0), 1);
        FUNC_1(VAR_10);
        if (VAR_12->b_aborted)
            goto end;

        if (VAR_14)
        {
            FUNC_4(VAR_10);

            int VAR_15 = FUNC_3(VAR_10);
            switch (VAR_15)
            {
            case 128:
                FUNC_7(VAR_10, "Restarted from DecodeBlock");
                break;
            case 129:
                break;
            default:
                FUNC_6(VAR_10, "StartMediaCodec failed");
                FUNC_0(VAR_10);
                goto end;
            }
        }
    }


    if (VAR_12->api.b_started)
        FUNC_2(VAR_10, VAR_11, 0);

end:
    if (VAR_11)
        FUNC_5(VAR_11);


    int VAR_16 = VAR_12->b_aborted && VAR_12->b_has_format ? VAR_6
                                                      : VAR_8;
    FUNC_11(&VAR_12->lock);
    return VAR_16;

reload:
    FUNC_11(&VAR_12->lock);


    FUNC_9(VAR_10, "mediacodec-failed", VAR_9);
    return VAR_7;
}
