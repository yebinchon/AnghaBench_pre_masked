
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int done; int mutex; } ;
typedef TYPE_1__ vlc_once_t ;


 int FUNC_0 (unsigned int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(vlc_once_t *VAR_0, void (*VAR_1)(void))
{
    unsigned VAR_2;


    FUNC_0( &VAR_2, VAR_0->done );


    if( VAR_2 == 0 )
    {
        FUNC_1( &VAR_0->mutex );


        FUNC_0( &VAR_2, VAR_0->done );


        if( VAR_2 == 0 )
        {
            VAR_1();


            FUNC_0( &VAR_0->done, 1 );
        }

        FUNC_2( &VAR_0->mutex );
    }
}
