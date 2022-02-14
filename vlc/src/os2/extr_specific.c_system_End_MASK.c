
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulCmd ;
typedef scalar_t__ ULONG ;
typedef int TID ;
typedef int HPIPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__*,int ,int ,int ,int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,scalar_t__*,int,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

void FUNC_7(void)
{
    if( VAR_8 == FUNC_6())
    {
        HPIPE VAR_10;
        ULONG VAR_11;
        ULONG VAR_12;
        ULONG VAR_13;

        do
        {
            VAR_13 = FUNC_1( VAR_7, &VAR_10, &VAR_11, 0, 0,
                          VAR_4,
                          VAR_3 | VAR_6 |
                          VAR_5,
                          ((void*)0) );

            if( VAR_13 == VAR_1 )
                FUNC_3( VAR_7, -1 );
            else if( VAR_13 )
                FUNC_2( 1 );
        } while( VAR_13 );


        ULONG VAR_14 = VAR_2;
        FUNC_5( VAR_10, &VAR_14, sizeof( VAR_14 ), &VAR_12 );

        FUNC_0( VAR_10 );

        TID VAR_15 = VAR_9;
        FUNC_4( &VAR_15, VAR_0 );
    }
}
