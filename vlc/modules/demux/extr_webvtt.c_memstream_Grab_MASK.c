
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {size_t length; int * ptr; int * stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vlc_memstream*) ;

__attribute__((used)) static void FUNC_2( struct vlc_memstream *VAR_1, void **VAR_2, size_t *VAR_3 )
{
    if( VAR_1->stream != ((void*)0) && FUNC_1( VAR_1 ) == VAR_0 )
    {
        if( VAR_1->length == 0 )
        {
            FUNC_0( VAR_1->ptr );
            VAR_1->ptr = ((void*)0);
        }
        *VAR_2 = VAR_1->ptr;
        *VAR_3 = VAR_1->length;
    }
}
