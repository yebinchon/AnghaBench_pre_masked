
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int stream_t ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int*) ;
 scalar_t__ FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4( stream_t *VAR_3, uint64_t VAR_4 )
{
    bool VAR_5 = 0;
    if ( FUNC_0( VAR_3, VAR_0, &VAR_5 ) != VAR_2 ||
         VAR_5 )
    {

        return FUNC_2( VAR_3, VAR_4 );
    }


    int64_t VAR_6 = FUNC_3( VAR_3 );
    if ( VAR_6 < 0 || VAR_4 < (uint64_t)VAR_6 )
        return VAR_1;

    size_t VAR_7 = VAR_4 - VAR_6;
    if( VAR_7 == 0 )
        return VAR_2;
    else if( VAR_7 > (1<<17) )
        return VAR_1;

    if( FUNC_1( VAR_3, ((void*)0), VAR_7 ) != (ssize_t)VAR_7 )
        return VAR_1;
    return VAR_2;
}
