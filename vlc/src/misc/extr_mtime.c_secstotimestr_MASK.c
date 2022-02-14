
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int rem; int quot; } ;
typedef TYPE_1__ div_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,char*,int,int,...) ;
 scalar_t__ FUNC_2 (int) ;

char *FUNC_3( char *VAR_1, int32_t VAR_2 )
{
    if( FUNC_2(VAR_2 < 0) )
    {
        FUNC_3( VAR_1 + 1, -VAR_2 );
        *VAR_1 = '-';
        return VAR_1;
    }

    div_t VAR_3;

    VAR_3 = FUNC_0( VAR_2, 60 );
    VAR_2 = VAR_3.rem;
    VAR_3 = FUNC_0( VAR_3.quot, 60 );

    if( VAR_3.quot )
        FUNC_1( VAR_1, VAR_0, "%u:%02u:%02u",
                 VAR_3.quot, VAR_3.rem, VAR_2 );
    else
        FUNC_1( VAR_1, VAR_0, "%02u:%02u",
                  VAR_3.rem, VAR_2 );
    return VAR_1;
}
