
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_stream_memory_private {size_t i_size; size_t i_pos; size_t p_buffer; } ;
typedef int stream_t ;
typedef size_t ssize_t ;


 int FUNC_0 (void*,size_t,size_t) ;
 struct vlc_stream_memory_private* FUNC_1 (int *) ;

__attribute__((used)) static ssize_t FUNC_2( stream_t *VAR_0, void *VAR_1, size_t VAR_2 )
{
    struct vlc_stream_memory_private *VAR_3 = FUNC_1(VAR_0);

    if( VAR_2 > VAR_3->i_size - VAR_3->i_pos )
        VAR_2 = VAR_3->i_size - VAR_3->i_pos;
    if ( VAR_1 )
        FUNC_0( VAR_1, VAR_3->p_buffer + VAR_3->i_pos, VAR_2 );
    VAR_3->i_pos += VAR_2;
    return VAR_2;
}
