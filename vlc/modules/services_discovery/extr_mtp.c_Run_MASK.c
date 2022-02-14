
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int services_discovery_t ;
typedef int LIBMTP_raw_device_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void *FUNC_11( void *VAR_1 )
{
    LIBMTP_raw_device_t *VAR_2;
    int VAR_3;
    int VAR_4;
    int VAR_5 = 0;
    services_discovery_t *VAR_6 = VAR_1;

    for(;;)
    {
        int VAR_7 = FUNC_9();
        VAR_4 = FUNC_2( &VAR_2, &VAR_3 );
        if ( VAR_4 == 0 && VAR_3 > 0 && VAR_2 != ((void*)0) &&
             VAR_5 == 0 )
        {

            FUNC_6( VAR_6, "New device found" );
            if( FUNC_0( VAR_6, &VAR_2[0] ) == VAR_0 )
                VAR_5 = 1;
            else
                VAR_5 = 2;
        }
        else
        {
            if ( ( VAR_4 != 0 || VAR_3 == 0 || VAR_2 == ((void*)0) )
                 && VAR_5 == 1)
            {

                FUNC_7( VAR_6, "Device disconnected" );
                FUNC_1( VAR_6 );
                VAR_5 = 0;
            }
        }
        FUNC_5( VAR_2 );
        FUNC_8(VAR_7);
        if( VAR_5 == 2 )
        {
            FUNC_10( FUNC_4(5) );
            VAR_5 = 0;
        }
        else
            FUNC_10( FUNC_3(500) );
    }
    return ((void*)0);
}
