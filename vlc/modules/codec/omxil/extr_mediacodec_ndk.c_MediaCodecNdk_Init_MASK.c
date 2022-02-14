
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mc_api_sys ;
struct TYPE_4__ {int b_support_rotation; int set_output_surface; int release_out_ts; int release_out; int get_out; int dequeue_out; int queue_in; int dequeue_in; int flush; int stop; int start; int configure_decoder; int prepare; int clean; int p_sys; } ;
typedef TYPE_1__ mc_api ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,int) ;

int FUNC_2(mc_api *VAR_14)
{
    if (!FUNC_0(VAR_14))
        return VAR_6;

    VAR_14->p_sys = FUNC_1(1, sizeof(mc_api_sys));
    if (!VAR_14->p_sys)
        return VAR_6;

    VAR_14->clean = VAR_0;
    VAR_14->prepare = VAR_7;
    VAR_14->configure_decoder = VAR_1;
    VAR_14->start = VAR_12;
    VAR_14->stop = VAR_13;
    VAR_14->flush = VAR_4;
    VAR_14->dequeue_in = VAR_2;
    VAR_14->queue_in = VAR_8;
    VAR_14->dequeue_out = VAR_3;
    VAR_14->get_out = VAR_5;
    VAR_14->release_out = VAR_9;
    VAR_14->release_out_ts = VAR_10;
    VAR_14->set_output_surface = VAR_11;

    VAR_14->b_support_rotation = 1;
    return 0;
}
