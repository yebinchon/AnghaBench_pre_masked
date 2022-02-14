
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fdc; int* fdv; } ;
typedef TYPE_1__ vlclua_dtable_t ;
typedef int lua_State ;


 int FUNC_0 (int) ;
 int* FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_0, int VAR_1 )
{
    vlclua_dtable_t *VAR_2 = FUNC_3( VAR_0 );

    if( (unsigned)VAR_1 < 3u )
        return -1;


    for( unsigned VAR_3 = 0; VAR_3 < VAR_2->fdc; VAR_3++ )
        FUNC_0( VAR_2->fdv[VAR_3] != VAR_1 );


    for( unsigned VAR_4 = 0; VAR_4 < VAR_2->fdc; VAR_4++ )
    {
        if( VAR_2->fdv[VAR_4] == -1 )
        {
            VAR_2->fdv[VAR_4] = VAR_1;
            return 3 + VAR_4;
        }
    }

    if( VAR_2->fdc >= 64 )
        return -1;

    int *VAR_5 = FUNC_1( VAR_2->fdv, (VAR_2->fdc + 1) * sizeof (VAR_2->fdv[0]) );
    if( FUNC_2(VAR_5 == ((void*)0)) )
        return -1;

    VAR_2->fdv = VAR_5;
    VAR_2->fdv[VAR_2->fdc] = VAR_1;
    VAR_1 = 3 + VAR_2->fdc;
    VAR_2->fdc++;
    return VAR_1;
}
