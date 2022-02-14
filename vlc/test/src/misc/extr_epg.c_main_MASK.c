
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_epg_t ;


 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int) ;

int FUNC_10( void )
{
    FUNC_6();

    int VAR_0=1;


    FUNC_5("--test %d\n", VAR_0++);
    vlc_epg_t *VAR_1 = FUNC_8( 0, 0 );
    FUNC_1(VAR_1);
    FUNC_0( VAR_1, 42, 20, "A" );
    FUNC_0( VAR_1, 62, 20, "B" );
    FUNC_0( VAR_1, 82, 20, "C" );
    FUNC_0( VAR_1, 102, 20, "D" );
    FUNC_4( VAR_1 );
    FUNC_3( VAR_1, "ABCD", 4 );
    FUNC_2( VAR_1, ((void*)0) );

    FUNC_9( VAR_1, 82 );
    FUNC_2( VAR_1, "C" );

    FUNC_7( VAR_1 );



    FUNC_5("--test %d\n", VAR_0++);
    VAR_1 = FUNC_8( 0, 0 );
    FUNC_1(VAR_1);
    FUNC_0( VAR_1, 82, 20, "C" );
    FUNC_0( VAR_1, 62, 20, "B" );
    FUNC_0( VAR_1, 102, 20, "D" );
    FUNC_0( VAR_1, 42, 20, "A" );
    FUNC_4( VAR_1 );
    FUNC_3( VAR_1, "ABCD", 4 );
    FUNC_7( VAR_1 );


    FUNC_5("--test %d\n", VAR_0++);
    VAR_1 = FUNC_8( 0, 0 );
    FUNC_1(VAR_1);
    FUNC_0( VAR_1, 142, 20, "F" );
    FUNC_0( VAR_1, 122, 20, "E" );
    FUNC_0( VAR_1, 102, 20, "D" );
    FUNC_0( VAR_1, 82, 20, "C" );
    FUNC_0( VAR_1, 42, 20, "A" );
    FUNC_0( VAR_1, 62, 20, "B" );
    FUNC_4( VAR_1 );
    FUNC_3( VAR_1, "ABCDEF", 6 );
    FUNC_7( VAR_1 );


    FUNC_5("--test %d\n", VAR_0++);
    VAR_1 = FUNC_8( 0, 0 );
    FUNC_1(VAR_1);
    FUNC_0( VAR_1, 62, 20, "E" );
    FUNC_0( VAR_1, 62, 20, "F" );
    FUNC_0( VAR_1, 42, 20, "A" );
    FUNC_9( VAR_1, 62 );
    FUNC_0( VAR_1, 82, 20, "C" );
    FUNC_0( VAR_1, 62, 20, "B" );
    FUNC_0( VAR_1, 102, 20, "D" );
    FUNC_4( VAR_1 );
    FUNC_3( VAR_1, "ABCD", 4 );
    FUNC_2( VAR_1, "B" );
    FUNC_7( VAR_1 );

    return 0;
}
