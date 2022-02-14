
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_thread_t ;
typedef int demux_t ;
struct TYPE_4__ {TYPE_1__* master; } ;
struct TYPE_3__ {int * p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,double*,double*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,double,double) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( input_thread_t *VAR_2 )
{
    demux_t *VAR_3 = FUNC_4(VAR_2)->master->p_demux;

    if( FUNC_2( VAR_3, VAR_1 ) )
        FUNC_0( VAR_2, VAR_3 );

    {
        double VAR_4;
        double VAR_5;

        if( !FUNC_1( VAR_3, VAR_0, &VAR_4, &VAR_5 ) )
            FUNC_3( VAR_2, VAR_4, VAR_5 );
    }
}
