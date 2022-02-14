
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_5__ {scalar_t__ i_start; } ;
typedef TYPE_1__ subpicture_t ;
struct decoder_owner {int b_has_data; int lock; int wait_acknowledge; scalar_t__ b_waiting; int * p_vout; int dec; } ;
typedef int decoder_t ;


 int FUNC_0 (struct decoder_owner*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7( struct decoder_owner *VAR_1, subpicture_t *VAR_2 )
{
    decoder_t *VAR_3 = &VAR_1->dec;
    vout_thread_t *VAR_4 = VAR_1->p_vout;


    if( VAR_2->i_start == VAR_0 )
    {
        FUNC_1( VAR_3, "non-dated spu buffer received" );
        FUNC_2( VAR_2 );
        return;
    }


    FUNC_4( &VAR_1->lock );

    if( VAR_1->b_waiting )
    {
        VAR_1->b_has_data = 1;
        FUNC_3( &VAR_1->wait_acknowledge );
    }

    FUNC_0( VAR_1 );
    FUNC_5( &VAR_1->lock );

    if( VAR_2->i_start == VAR_0 )
    {
        FUNC_2( VAR_2 );
        return;
    }

    FUNC_6( VAR_4, VAR_2 );
}
