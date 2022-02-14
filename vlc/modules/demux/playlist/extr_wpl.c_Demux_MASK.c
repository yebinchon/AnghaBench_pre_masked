
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_8__ {int * p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const**) ;

__attribute__((used)) static int FUNC_8( stream_t* VAR_4, input_item_node_t *VAR_5 )
{
    xml_reader_t *VAR_6 = VAR_4->p_sys;
    const char* VAR_7;
    int VAR_8;

    if( FUNC_7( VAR_6, &VAR_7 ) != VAR_3 ||
        FUNC_5( VAR_7, "smil" ) || FUNC_6( VAR_6 ) == 1 )
    {
        return VAR_0;
    }

    input_item_t* VAR_9 = FUNC_0( VAR_4 );

    while( ( VAR_8 = FUNC_7( VAR_6, &VAR_7 ) ) > 0 )
    {
        if( VAR_8 == VAR_2 && !FUNC_5( VAR_7, "smil" ) )
            break;

        if( VAR_8 == VAR_3 )
        {
            if( !FUNC_5( VAR_7, "head" ) )
            {
                FUNC_4( VAR_4, VAR_9 );
                continue;
            }

            if( !FUNC_5( VAR_7, "body" ) )
            {
                FUNC_3( VAR_4, VAR_5 );
                continue;
            }

            FUNC_2( VAR_4, "skipping unknown tag <%s> in <smil>", VAR_7 );
            FUNC_1( VAR_4, VAR_7 );
        }
    }

    return VAR_1;
}
