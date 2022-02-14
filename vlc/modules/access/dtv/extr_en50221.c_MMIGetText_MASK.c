
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ cam_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (int *,int) ;

__attribute__((used)) static char *FUNC_5( cam_t *VAR_1, uint8_t **VAR_2, int *VAR_3 )
{
    int VAR_4 = FUNC_1( *VAR_2, *VAR_3 );
    int VAR_5;
    uint8_t *VAR_6;

    if ( VAR_4 != VAR_0 )
    {
        FUNC_2( VAR_1->obj, "unexpected text tag: %06x", VAR_4 );
        *VAR_3 = 0;
        return FUNC_3( "" );
    }

    VAR_6 = FUNC_0( *VAR_2, &VAR_5 );

    *VAR_2 += VAR_5 + 4;
    *VAR_3 -= VAR_5 + 4;

    return FUNC_4(VAR_6,VAR_5);
}
