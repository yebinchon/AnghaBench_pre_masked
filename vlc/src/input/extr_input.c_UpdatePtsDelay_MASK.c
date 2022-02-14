
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_7__ {int i_slave; int p_es_out; TYPE_1__** slave; TYPE_2__* master; } ;
typedef TYPE_3__ input_thread_private_t ;
struct TYPE_6__ {int i_pts_delay; } ;
struct TYPE_5__ {int i_pts_delay; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int ,int const) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4( input_thread_t *VAR_1 )
{
    input_thread_private_t *VAR_2 = FUNC_2(VAR_1);


    vlc_tick_t VAR_3 = VAR_2->master->i_pts_delay;
    for( int VAR_4 = 0; VAR_4 < VAR_2->i_slave; VAR_4++ )
        VAR_3 = FUNC_0( VAR_3, VAR_2->slave[VAR_4]->i_pts_delay );

    if( VAR_3 < 0 )
        VAR_3 = 0;


    const int VAR_5 = FUNC_3( VAR_1, "cr-average" ) * VAR_3 / VAR_0;

    FUNC_1( FUNC_2(VAR_1)->p_es_out, VAR_3, 0, VAR_5 );
}
