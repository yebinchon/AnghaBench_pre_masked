
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int xml_elem_hnd_t ;
typedef int track_elem_t ;
typedef int stream_t ;
typedef int input_item_node_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int *,char const**) ;

__attribute__((used)) static bool FUNC_3( stream_t *VAR_1, input_item_node_t *VAR_2,
                          track_elem_t *VAR_3, xml_reader_t *VAR_4,
                          const char *VAR_5, xml_elem_hnd_t *VAR_6 )
{
    FUNC_0(VAR_1); FUNC_0(VAR_2);
    FUNC_0(VAR_3); FUNC_0(VAR_6);
    const char *VAR_7;
    int VAR_8;

    while( (VAR_8 = FUNC_2( VAR_4, &VAR_7 )) > 0 )
        if( VAR_8 == VAR_0 && !FUNC_1( VAR_5, VAR_7 ) )
            return 1;
    return 0;
}
