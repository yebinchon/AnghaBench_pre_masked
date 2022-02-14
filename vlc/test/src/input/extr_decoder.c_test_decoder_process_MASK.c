
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct decoder_owner {TYPE_1__* packetizer; } ;
struct TYPE_21__ {int (* pf_decode ) (TYPE_1__*,TYPE_2__*) ;TYPE_2__* (* pf_get_cc ) (TYPE_1__*,int *) ;int fmt_out; int fmt_in; TYPE_2__* (* pf_packetize ) (TYPE_1__*,TYPE_2__**) ;int * p_module; } ;
typedef TYPE_1__ decoder_t ;
typedef int decoder_cc_desc_t ;
struct TYPE_22__ {struct TYPE_22__* p_next; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 struct decoder_owner* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int *) ;
 int FUNC_6 (int *,int *) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,TYPE_2__**) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;

int FUNC_12(decoder_t *VAR_3, block_t *VAR_4)
{
    struct decoder_owner *VAR_5 = FUNC_3(VAR_3);
    decoder_t *VAR_6 = VAR_5->packetizer;


    if (VAR_3->p_module == ((void*)0))
    {
        if (VAR_4 != ((void*)0))
            FUNC_1(VAR_4);
        return VAR_1;
    }

    block_t **VAR_7 = VAR_4 ? &VAR_4 : ((void*)0);
    block_t *VAR_8;
    while ((VAR_8 =
                VAR_6->pf_packetize(VAR_6, VAR_7)))
    {

        if (!FUNC_6(&VAR_3->fmt_in, &VAR_6->fmt_out))
        {
            FUNC_2("restarting module due to input format change\n");


            VAR_3->pf_decode(VAR_3, ((void*)0));


            FUNC_4(VAR_3);
            if (FUNC_5(VAR_3, 0, &VAR_6->fmt_out) != VAR_2)
            {
                FUNC_0(VAR_8);
                return VAR_1;
            }
        }

        if (VAR_6->pf_get_cc)
        {
            decoder_cc_desc_t VAR_9;
            block_t *VAR_10 = VAR_6->pf_get_cc(VAR_6, &VAR_9);
            if (VAR_10)
                FUNC_1(VAR_10);
        }

        while (VAR_8 != ((void*)0))
        {

            block_t *VAR_11 = VAR_8->p_next;
            VAR_8->p_next = ((void*)0);

            int VAR_12 = VAR_3->pf_decode(VAR_3, VAR_8);

            if (VAR_12 == VAR_0)
            {
                FUNC_0(VAR_11);
                return VAR_1;
            }

            VAR_8 = VAR_11;
        }
    }
    if (VAR_4 == ((void*)0))
        VAR_3->pf_decode(VAR_3, ((void*)0));
    return VAR_2;
}
