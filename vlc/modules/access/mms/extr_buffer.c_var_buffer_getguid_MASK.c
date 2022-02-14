
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Data4; void* Data3; void* Data2; int Data1; } ;
typedef TYPE_1__ vlc_guid_t ;
typedef int var_buffer_t ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( var_buffer_t *VAR_0, vlc_guid_t *VAR_1 )
{
    VAR_1->Data1 = FUNC_1( VAR_0 );
    VAR_1->Data2 = FUNC_0( VAR_0 );
    VAR_1->Data3 = FUNC_0( VAR_0 );

    for( int VAR_2 = 0; VAR_2 < 8; VAR_2++ )
        VAR_1->Data4[VAR_2] = FUNC_2( VAR_0 );
}
