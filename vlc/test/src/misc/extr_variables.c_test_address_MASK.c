
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ p_address; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int libvlc_int_t ;
struct TYPE_5__ {char* p_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int ,char*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_5( libvlc_int_t *VAR_4 )
{
    char VAR_5[VAR_0];

    for( unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
        FUNC_1( VAR_4, VAR_2[VAR_6], VAR_1 );

    for( unsigned VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ )
    {
        VAR_3[VAR_7].p_address = &VAR_5[VAR_7];
        FUNC_4( VAR_4, VAR_2[VAR_7], VAR_3[VAR_7].p_address );
    }

    for( unsigned VAR_8 = 0; VAR_8 < VAR_0; VAR_8++ )
    {
        vlc_value_t VAR_9;
        FUNC_3( VAR_4, VAR_2[VAR_8], &VAR_9 );
        FUNC_0( VAR_9.p_address == VAR_3[VAR_8].p_address );
    }

    for( unsigned VAR_10 = 0; VAR_10 < VAR_0; VAR_10++ )
        FUNC_2( VAR_4, VAR_2[VAR_10] );
}
