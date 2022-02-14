
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;


 int FUNC_0 (char const,char const,char const,char const) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,int ) ;

vlc_fourcc_t FUNC_3( int VAR_0, const char *VAR_1 )
{
    if( !VAR_1 || FUNC_1(VAR_1) != 4 )
        return 0;
    return FUNC_2( VAR_0,
                                FUNC_0( VAR_1[0], VAR_1[1],
                                            VAR_1[2], VAR_1[3] ) );
}
