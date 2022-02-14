
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int stream_t ;
typedef scalar_t__ ssize_t ;
typedef int avi_chunk_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int*) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__ const) ;
 scalar_t__ const FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_3, const avi_chunk_t *VAR_4 )
{
    bool VAR_5 = 0;
    const uint64_t VAR_6 = FUNC_0( VAR_4 );
    if ( !FUNC_1(VAR_3, VAR_0, &VAR_5) && VAR_5 )
    {
        return FUNC_3( VAR_3, VAR_6 );
    }
    else
    {
        ssize_t VAR_7 = VAR_6 - FUNC_4( VAR_3 );
        return (VAR_7 >=0 && FUNC_2( VAR_3, ((void*)0), VAR_7 ) == VAR_7) ?
                    VAR_2 : VAR_1;
    }
}
