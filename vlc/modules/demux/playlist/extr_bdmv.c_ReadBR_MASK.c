
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_3, input_item_node_t *VAR_4 )
{
    const char *VAR_5 = FUNC_0(VAR_3);


    char *VAR_6 = FUNC_7( VAR_5, FUNC_6( VAR_5) - 15 );
    if( !VAR_6 )
        return VAR_0;

    input_item_t *VAR_7 = FUNC_3( VAR_6, VAR_6 );
    FUNC_2( VAR_7, "demux=bluray", VAR_1 );
    FUNC_5( VAR_4, VAR_7 );
    FUNC_4( VAR_7 );

    FUNC_1( VAR_6 );

    return VAR_2;
}
