
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double vlc_tick_t ;
struct input_stats_t {int dummy; } ;
typedef int input_thread_t ;
struct TYPE_7__ {double normal_time; TYPE_2__* p_item; int * stats; int p_es_out; TYPE_1__* master; } ;
typedef TYPE_3__ input_thread_private_t ;
struct TYPE_6__ {int lock; struct input_stats_t* p_stats; } ;
struct TYPE_5__ {int p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,double*) ;
 int FUNC_1 (int ,double,double,double,double) ;
 int FUNC_2 (int *,struct input_stats_t*) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct input_stats_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( input_thread_t *VAR_5 )
{
    input_thread_private_t *VAR_6 = FUNC_3(VAR_5);
    double VAR_7 = 0.0;
    vlc_tick_t VAR_8;
    vlc_tick_t VAR_9;


    if( FUNC_0( VAR_6->master->p_demux,
                       VAR_2, &VAR_7 ) )
        VAR_7 = 0.0;

    if( FUNC_0( VAR_6->master->p_demux, VAR_3, &VAR_8 ) )
        VAR_8 = VAR_4;

    if( FUNC_0( VAR_6->master->p_demux, VAR_0, &VAR_9 ) )
        VAR_9 = VAR_4;



    FUNC_0( VAR_6->master->p_demux, VAR_1, &VAR_6->normal_time );

    FUNC_1( VAR_6->p_es_out, VAR_7, VAR_8, VAR_6->normal_time,
                     VAR_9 );

    struct input_stats_t VAR_10;
    if( VAR_6->stats != ((void*)0) )
        FUNC_4( VAR_6->stats, &VAR_10 );

    FUNC_5( &VAR_6->p_item->lock );
    if( VAR_6->stats != ((void*)0) )
        *VAR_6->p_item->p_stats = VAR_10;
    FUNC_6( &VAR_6->p_item->lock );

    FUNC_2( VAR_5, &VAR_10 );
}
