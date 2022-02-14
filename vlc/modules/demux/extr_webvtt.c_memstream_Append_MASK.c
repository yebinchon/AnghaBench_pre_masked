
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {int * stream; } ;


 int FUNC_0 (struct vlc_memstream*,char) ;
 int FUNC_1 (struct vlc_memstream*,char const*) ;

__attribute__((used)) static void FUNC_2( struct vlc_memstream *VAR_0, const char *VAR_1 )
{
    if( VAR_0->stream != ((void*)0) )
    {
        FUNC_1( VAR_0, VAR_1 );
        FUNC_0( VAR_0, '\n' );
    }
}
