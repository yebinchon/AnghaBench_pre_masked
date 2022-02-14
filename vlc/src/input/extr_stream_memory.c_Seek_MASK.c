
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vlc_stream_memory_private {scalar_t__ i_size; scalar_t__ i_pos; } ;
typedef int stream_t ;


 int VAR_0 ;
 struct vlc_stream_memory_private* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_1, uint64_t VAR_2 )
{
    struct vlc_stream_memory_private *VAR_3 = FUNC_0(VAR_1);

    if( VAR_2 > VAR_3->i_size )
        VAR_2 = VAR_3->i_size;

    VAR_3->i_pos = VAR_2;
    return VAR_0;
}
