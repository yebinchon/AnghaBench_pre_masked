
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_4, char const *VAR_5 )
{
    int VAR_6;
    if( !FUNC_1( VAR_5, "red" ) )
        VAR_6 = VAR_2;
    else if( !FUNC_1( VAR_5, "blue" ) )
        VAR_6 = VAR_0;
    else if( !FUNC_1( VAR_5, "green" ) )
        VAR_6 = VAR_1;
    else if( !FUNC_1( VAR_5, "white" ) )
        VAR_6 = VAR_3;
    else
    {
        FUNC_0( VAR_4, "no valid ball color provided (%s)", VAR_5 );
        VAR_6 = VAR_2;
    }
    return VAR_6;
}
