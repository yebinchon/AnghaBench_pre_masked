
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int libvlc_int_t ;
struct TYPE_2__ {int i_int; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_7( libvlc_int_t *VAR_5 )
{

    for( unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
    {
        FUNC_3( VAR_5, VAR_3[VAR_6], VAR_1 );
        FUNC_2( VAR_5, VAR_3[VAR_6], VAR_2, VAR_3 );
    }


    for( unsigned VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ )
    {
        int VAR_8 = FUNC_1();
        FUNC_5( VAR_5, VAR_3[VAR_7], VAR_8 );
        FUNC_0( VAR_8 == VAR_4[VAR_7].i_int );
        FUNC_5( VAR_5, VAR_3[VAR_7], 0 );
        FUNC_0( VAR_4[VAR_7].i_int == 0 );
        VAR_4[VAR_7].i_int = 1;
    }


    for( unsigned VAR_9 = 0; VAR_9 < VAR_0; VAR_9++ )
    {
        FUNC_6( VAR_5, VAR_3[VAR_9] );
        FUNC_0( VAR_4[VAR_9].i_int == 0 );
    }

    for( unsigned VAR_10 = 0; VAR_10 < VAR_0; VAR_10++ )
        FUNC_4( VAR_5, VAR_3[VAR_10] );
}
