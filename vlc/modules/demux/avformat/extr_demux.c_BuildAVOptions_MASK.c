
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int demux_t ;
typedef int AVDictionary ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int **) ;

__attribute__((used)) static AVDictionary * FUNC_3( demux_t *VAR_0 )
{
    char *VAR_1 = FUNC_1( VAR_0, "avformat-options" );
    AVDictionary *VAR_2 = ((void*)0);
    if( VAR_1 )
    {
        FUNC_2( VAR_1, &VAR_2 );
        FUNC_0( VAR_1 );
    }
    return VAR_2;
}
