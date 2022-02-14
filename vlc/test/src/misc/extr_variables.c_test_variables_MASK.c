
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libvlc_int_t ;
struct TYPE_3__ {int * p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14( libvlc_instance_t *VAR_0 )
{
    libvlc_int_t *VAR_1 = VAR_0->p_libvlc_int;
    FUNC_0( FUNC_13( ((void*)0) ) );

    FUNC_11( "Testing for integers\n" );
    FUNC_9( VAR_1 );

    FUNC_11( "Testing for booleans\n" );
    FUNC_2( VAR_1 );

    FUNC_11( "Testing for floats\n" );
    FUNC_7( VAR_1 );

    FUNC_11( "Testing for rationals\n" );
    FUNC_8( VAR_1 );

    FUNC_11( "Testing for strings\n" );
    FUNC_12( VAR_1 );

    FUNC_11( "Testing for addresses\n" );
    FUNC_1( VAR_1 );

    FUNC_11( "Testing the callbacks\n" );
    FUNC_3( VAR_1 );

    FUNC_11( "Testing the limits\n" );
    FUNC_10( VAR_1 );

    FUNC_11( "Testing choices\n" );
    FUNC_5( VAR_1 );

    FUNC_11( "Testing var_Change()\n" );
    FUNC_4( VAR_1 );

    FUNC_11( "Testing type at creation\n" );
    FUNC_6( VAR_1 );
}
