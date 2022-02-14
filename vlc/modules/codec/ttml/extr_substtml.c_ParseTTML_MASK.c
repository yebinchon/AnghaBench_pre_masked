
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int uint8_t ;
typedef int tt_node_t ;
typedef int stream_t ;
typedef int decoder_t ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,size_t,int) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static tt_node_t *FUNC_7( decoder_t *VAR_1, const uint8_t *VAR_2, size_t VAR_3 )
{
    stream_t* VAR_4;
    xml_reader_t* VAR_5;

    VAR_4 = FUNC_4( VAR_1, (uint8_t*) VAR_2, VAR_3, 1 );
    if( FUNC_2( VAR_4 == ((void*)0) ) )
        return ((void*)0);

    VAR_5 = FUNC_5( VAR_1, VAR_4 );
    if( FUNC_2( VAR_5 == ((void*)0) ) )
    {
        FUNC_3( VAR_4 );
        return ((void*)0);
    }

    tt_node_t *VAR_6 = ((void*)0);
    if( FUNC_0( VAR_5, &VAR_6 ) != VAR_0 )
    {
        if( VAR_6 )
            FUNC_1( VAR_6 );
        VAR_6 = ((void*)0);
    }

    FUNC_6( VAR_5 );
    FUNC_3( VAR_4 );

    return VAR_6;
}
