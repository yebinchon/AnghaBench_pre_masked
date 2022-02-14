
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulCmd ;
typedef int libvlc_int_t ;
typedef int i_len ;
typedef int i_argc ;
typedef scalar_t__ ULONG ;
typedef int HPIPE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int,int,int,int ) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__*,int ,int ,int ,int,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ,int *,int,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int VAR_16 ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 char* FUNC_13 (char const* const) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char const* const,char*) ;
 int FUNC_16 () ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_17 (int *,char*) ;
 char* FUNC_18 (char const* const,int *) ;

void FUNC_19( libvlc_int_t *VAR_19, int VAR_20, const char *const VAR_21[] )
{
    if( FUNC_17( VAR_19, "high-priority" ) )
    {
        if( !FUNC_3( VAR_14, VAR_12, VAR_13, 0 ) )
        {
            FUNC_10( VAR_19, "raised process priority" );
        }
        else
        {
            FUNC_10( VAR_19, "could not raise process priority" );
        }
    }

    if( FUNC_17( VAR_19, "one-instance" )
        || ( FUNC_17( VAR_19, "one-instance-when-started-from-file" )
             && FUNC_17( VAR_19, "started-from-file" ) ) )
    {
        HPIPE VAR_22;
        ULONG VAR_23;
        ULONG VAR_24;

        FUNC_12( VAR_19, "one instance mode ENABLED");


        for(;;)
        {
            VAR_24 = FUNC_2( VAR_15, &VAR_22, &VAR_23, 0, 0,
                          VAR_9,
                          VAR_8 | VAR_11 |
                          VAR_10,
                          ((void*)0) );

            if( VAR_24 == VAR_0 )
                FUNC_4( VAR_15, -1 );
            else
                break;
        }

        if( VAR_24 )
        {
            VAR_24 = FUNC_1( VAR_15, &VAR_16,
                                 VAR_4,
                                 VAR_7 | VAR_6 |
                                 VAR_5 | 0x01,
                                 32768, 32768, 0 );
            if( VAR_24 )
            {


                FUNC_11( VAR_19, "one instance mode DISABLED "
                         "(a named pipe couldn't be created)" );
                return;
            }




            VAR_17 = FUNC_7();


            VAR_18 = FUNC_6( VAR_1, ((void*)0), 1024 * 1024,
                                         VAR_19 );
            if( VAR_18 == -1 )
            {
                FUNC_11( VAR_19, "one instance mode DISABLED "
                         "(IPC helper thread couldn't be created)");

                VAR_17 = -1;
            }
        }
        else
        {

            ULONG VAR_25 = FUNC_17( VAR_19, "playlist-enqueue") ?
                              VAR_2 : VAR_3;
            ULONG VAR_26;


            FUNC_5( VAR_22, &VAR_25, sizeof( VAR_25 ), &VAR_26 );





            FUNC_5( VAR_22, &VAR_20, sizeof( VAR_20 ), &VAR_26 );

            for( int VAR_27 = 0; VAR_27 < VAR_20; VAR_27++ )
            {

                char *VAR_28;
                if( FUNC_15( VAR_21[ VAR_27 ], "://" ))
                    VAR_28 = FUNC_13( VAR_21[ VAR_27 ] );
                else
                    VAR_28 = FUNC_18( VAR_21[ VAR_27 ], ((void*)0) );

                if( !VAR_28 )
                    VAR_28 = ( char * )VAR_21[ VAR_27 ];

                size_t VAR_29 = FUNC_14( VAR_28 ) + 1;


                FUNC_5( VAR_22, &VAR_29, sizeof( VAR_29 ), &VAR_26 );


                FUNC_5( VAR_22, VAR_28, VAR_29, &VAR_26 );

                if( VAR_28 != VAR_21[ VAR_27 ])
                    FUNC_9( VAR_28 );
            }


            FUNC_0( VAR_22 );


            FUNC_16();
            FUNC_8( 0 );
        }
    }
}
