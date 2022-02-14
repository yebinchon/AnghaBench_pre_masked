
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct mc_api_out {scalar_t__ b_eos; } ;
typedef int picture_t ;
struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_13__ {int (* dequeue_out ) (TYPE_4__*,int) ;int (* get_out ) (TYPE_4__*,int,struct mc_api_out*) ;int (* release_out ) (TYPE_4__*,int,int) ;} ;
struct TYPE_12__ {int b_flush_out; int (* pf_process_output ) (TYPE_1__*,struct mc_api_out*,int **,int **) ;int b_drained; int b_aborted; int lock; int dec_cond; TYPE_4__ api; int cond; int b_output_ready; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 int FUNC_7 (TYPE_4__*,int,struct mc_api_out*) ;
 int FUNC_8 (TYPE_1__*,struct mc_api_out*,int **,int **) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;

__attribute__((used)) static void *FUNC_17(void *VAR_2)
{
    decoder_t *VAR_3 = VAR_2;
    decoder_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_13(&VAR_4->lock);
    FUNC_4(&VAR_4->lock);
    for (;;)
    {
        int VAR_5;


        while (!VAR_4->b_flush_out && !VAR_4->b_output_ready)
            FUNC_12(&VAR_4->cond, &VAR_4->lock);

        if (VAR_4->b_flush_out)
        {

            VAR_4->b_flush_out = 0;
            FUNC_10(&VAR_4->dec_cond);
            continue;
        }

        int VAR_6 = FUNC_16();

        FUNC_14(&VAR_4->lock);



        VAR_5 = VAR_4->api.dequeue_out(&VAR_4->api, -1);

        FUNC_13(&VAR_4->lock);


        if (VAR_4->b_flush_out)
        {


            if (VAR_5 >= 0)
                VAR_4->api.release_out(&VAR_4->api, VAR_5, 0);


            if (VAR_5 != VAR_1
             && VAR_5 != VAR_0)
            {
                FUNC_15(VAR_6);
                continue;
            }
        }


        if (VAR_5 >= 0 || VAR_5 == VAR_1
         || VAR_5 == VAR_0)
        {
            struct mc_api_out VAR_7;
            int VAR_8 = VAR_4->api.get_out(&VAR_4->api, VAR_5, &VAR_7);

            if (VAR_8 == 1)
            {
                picture_t *VAR_9 = ((void*)0);
                block_t *VAR_10 = ((void*)0);

                if (VAR_4->pf_process_output(VAR_3, &VAR_7, &VAR_9,
                                             &VAR_10) == -1 && !VAR_7.b_eos)
                {
                    FUNC_2(VAR_3, "pf_process_output failed");
                    FUNC_15(VAR_6);
                    break;
                }
                if (VAR_9)
                    FUNC_1(VAR_3, VAR_9);
                else if (VAR_10)
                    FUNC_0(VAR_3, VAR_10);

                if (VAR_7.b_eos)
                {
                    FUNC_3(VAR_3, "EOS received");
                    VAR_4->b_drained = 1;
                    FUNC_11(&VAR_4->dec_cond);
                }
            } else if (VAR_8 != 0)
            {
                FUNC_2(VAR_3, "get_out failed");
                FUNC_15(VAR_6);
                break;
            }
        }
        else
        {
            FUNC_15(VAR_6);
            break;
        }
        FUNC_15(VAR_6);
    }
    FUNC_3(VAR_3, "OutThread stopped");


    VAR_4->b_aborted = 1;
    FUNC_11(&VAR_4->dec_cond);

    FUNC_9();
    FUNC_14(&VAR_4->lock);

    return ((void*)0);
}
