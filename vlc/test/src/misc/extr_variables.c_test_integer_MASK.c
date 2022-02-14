
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int libvlc_int_t ;
struct TYPE_2__ {scalar_t__ i_int; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_8( libvlc_int_t *VAR_4 )
{
    for( unsigned VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
        FUNC_2( VAR_4, VAR_2[VAR_5], VAR_1 );

    for( unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
    {
        VAR_3[VAR_6].i_int = FUNC_1();
        FUNC_7( VAR_4, VAR_2[VAR_6], VAR_3[VAR_6].i_int );
    }

    for( unsigned VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ )
    {
        FUNC_0( FUNC_5( VAR_4, VAR_2[VAR_7] ) == VAR_3[VAR_7].i_int );
        FUNC_6( VAR_4, VAR_2[VAR_7] );
        FUNC_0( FUNC_5( VAR_4, VAR_2[VAR_7] ) == VAR_3[VAR_7].i_int + 1 );
        FUNC_3( VAR_4, VAR_2[VAR_7] );
        FUNC_0( FUNC_5( VAR_4, VAR_2[VAR_7] ) == VAR_3[VAR_7].i_int );
    }

    for( unsigned VAR_8 = 0; VAR_8 < VAR_0; VAR_8++ )
        FUNC_4( VAR_4, VAR_2[VAR_8] );
}
