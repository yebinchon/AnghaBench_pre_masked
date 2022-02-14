
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int,int,int,char*,int) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int) ;
 int * FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_9 (char*,...) ;
 void* FUNC_10 (int,int *,int ) ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int ,int,int ) ;

int FUNC_13( int VAR_10, char *VAR_11[] ) {
    if( VAR_10 != 3 ) {
        FUNC_9( "Incorrect number of parameters.\n"
                "Usage is: %s command-fifo response-fifo\n", VAR_11[0] );
        FUNC_6( -2 );
    }

    FUNC_9( "Creating shared memory for RGBA..." );
    int VAR_12 = FUNC_12( VAR_2, VAR_6 * VAR_1 * 4, VAR_4 );
    if( VAR_12 == -1 ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FUNC_9( " done, ID is %d. Text...", VAR_12 );
    int VAR_13 = FUNC_12( VAR_2, VAR_5, VAR_4 );
    if( VAR_13 == -1 ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FUNC_9( " done, ID is %d\n", VAR_13 );

    FUNC_9( "Attaching shared memory for RGBA..." );
    VAR_8 = FUNC_10( VAR_12, ((void*)0), 0 );
    if( VAR_8 == (void*)-1 ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FUNC_9( " done. Text..." );
    VAR_9 = FUNC_10( VAR_13, ((void*)0), 0 );
    if( VAR_9 == (void*)-1 ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FUNC_9( " done\n" );

    FUNC_9( "Queueing shared memory for destruction, RGBA..." );
    if( FUNC_11( VAR_12, VAR_3, 0 ) == -1 ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FUNC_9( " done. Text..." );
    if( FUNC_11( VAR_13, VAR_3, 0 ) == -1 ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FUNC_9( " done\n" );

    FUNC_9( "Generating data..." );
    FUNC_1();
    FUNC_9( " done\n" );

    FUNC_9( "Making FIFOs..." );
    if( FUNC_8( VAR_11[1], VAR_4 ) ) {
        if( VAR_7 != VAR_0 ) {
            FUNC_9( " failed\n" );
            FUNC_6( -1 );
        }
        FUNC_9( " input already exists..." );
    }
    if( FUNC_8( VAR_11[2], VAR_4 ) ) {
        if( VAR_7 != VAR_0 ) {
            FUNC_9( " failed\n" );
            FUNC_6( -1 );
        }
        FUNC_9( " output already exists..." );
    }
    FUNC_9( " done\n" );

    FUNC_9( "Please make sure vlc is running.\n"
            "You should append parameters similar to the following:\n"
            "--sub-source overlay{input=%s,output=%s}\n",
            VAR_11[1], VAR_11[2] );

    FUNC_9( "Opening FIFOs..." );
    FILE *VAR_14 = FUNC_7( VAR_11[1], "w" );
    if( VAR_14 == ((void*)0) ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FILE *VAR_15 = FUNC_7( VAR_11[2], "r" );
    if( VAR_15 == ((void*)0) ) {
        FUNC_9( " failed\n" );
        FUNC_6( -1 );
    }
    FUNC_9( " done\n" );

    int VAR_16 = FUNC_4( VAR_14, VAR_15 );
    int VAR_17 = FUNC_4( VAR_14, VAR_15 );
    FUNC_2( VAR_14, VAR_15, VAR_16, VAR_6, VAR_1, "RGBA",
                   VAR_12 );
    FUNC_2( VAR_14, VAR_15, VAR_17, VAR_5, 1, "TEXT",
                   VAR_13 );

    FUNC_0( VAR_14, VAR_15, VAR_16 );
    FUNC_0( VAR_14, VAR_15, VAR_17 );
    FUNC_5( VAR_14, VAR_15, VAR_17 );

    FUNC_3( VAR_14, VAR_15, VAR_16 );
    FUNC_3( VAR_14, VAR_15, VAR_17 );
}
