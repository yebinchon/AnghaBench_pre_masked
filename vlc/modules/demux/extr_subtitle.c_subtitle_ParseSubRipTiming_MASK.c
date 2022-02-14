
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_stop; int i_start; } ;
typedef TYPE_1__ subtitle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,char*,char*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5( subtitle_t *VAR_2,
                                       const char *VAR_3 )
{
    int VAR_4 = VAR_0;
    char *VAR_5, *VAR_6;
    VAR_5 = FUNC_1( FUNC_3(VAR_3) + 1 );
    VAR_6 = FUNC_1( FUNC_3(VAR_3) + 1 );

    if( FUNC_2( VAR_3, "%s --> %s", VAR_5, VAR_6) == 2 &&
        FUNC_4( &VAR_2->i_start, VAR_5 ) == VAR_1 &&
        FUNC_4( &VAR_2->i_stop, VAR_6 ) == VAR_1 )
    {
        VAR_4 = VAR_1;
    }

    FUNC_0(VAR_5);
    FUNC_0(VAR_6);

    return VAR_4;
}
