
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int stream_extractor_t ;
typedef int ssize_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1( stream_extractor_t* VAR_2, uint64_t VAR_3 )
{
    while( VAR_3 )
    {
        ssize_t VAR_4 = FUNC_0( VAR_2, ((void*)0), VAR_3 );

        if( VAR_4 < 1 )
            return VAR_0;

        VAR_3 -= VAR_4;
    }

    return VAR_1;
}
