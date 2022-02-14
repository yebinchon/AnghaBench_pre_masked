
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline int FUNC_1( const char *VAR_7 )
{
    if ( !FUNC_0( VAR_7, "playlist" ) )
        return VAR_3;
    else if ( !FUNC_0( VAR_7, "skin" ) )
        return VAR_5;
    else if ( !FUNC_0( VAR_7, "discovery" ) )
        return VAR_4;
    else if ( !FUNC_0( VAR_7, "extension" ) )
        return VAR_0;
    else if ( !FUNC_0( VAR_7, "interface" ) )
        return VAR_1;
    else if ( !FUNC_0( VAR_7, "meta" ) )
        return VAR_2;
    else
        return VAR_6;
}
