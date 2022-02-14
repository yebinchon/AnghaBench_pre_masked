
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef int avi_chunk_t ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2( stream_t *VAR_1, avi_chunk_t *VAR_2 )
{
    avi_chunk_t VAR_3;

    if( !VAR_2 )
    {
        if( FUNC_0( VAR_1, &VAR_3, ((void*)0) ) )
        {
            return VAR_0;
        }
        VAR_2 = &VAR_3;
    }

    return FUNC_1( VAR_1, VAR_2 );
}
