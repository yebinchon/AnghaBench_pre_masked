
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

int FUNC_6( void )
{
    libvlc_instance_t *VAR_2;

    FUNC_3();

    FUNC_4( "Testing the core variables\n" );
    VAR_2 = FUNC_1( VAR_1, VAR_0 );
    FUNC_0( VAR_2 != ((void*)0) );

    FUNC_5( VAR_2 );

    FUNC_2( VAR_2 );

    return 0;
}
