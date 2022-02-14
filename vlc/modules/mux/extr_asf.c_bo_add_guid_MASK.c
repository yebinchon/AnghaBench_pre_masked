
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Data4; int Data3; int Data2; int Data1; } ;
typedef TYPE_1__ vlc_guid_t ;
typedef int bo_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3( bo_t *VAR_0, const vlc_guid_t *VAR_1 )
{
    FUNC_2( VAR_0, VAR_1->Data1 );
    FUNC_1( VAR_0, VAR_1->Data2 );
    FUNC_1( VAR_0, VAR_1->Data3 );
    for( int VAR_2 = 0; VAR_2 < 8; VAR_2++ )
    {
        FUNC_0( VAR_0, VAR_1->Data4[VAR_2] );
    }
}
