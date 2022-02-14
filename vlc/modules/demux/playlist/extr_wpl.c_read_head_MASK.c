
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_7__ {int * p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char const**) ;

__attribute__((used)) static void FUNC_6( stream_t* VAR_2, input_item_t* VAR_3 )
{
    xml_reader_t *VAR_4 = VAR_2->p_sys;
    char const* VAR_5;
    int VAR_6;

    while( ( VAR_6 = FUNC_5( VAR_4, &VAR_5 ) ) > 0 )
    {
        if( VAR_6 == VAR_0 && !FUNC_4( VAR_5, "head" ) )
            break;

        if( VAR_6 == VAR_1 )
        {
            if( !FUNC_4( VAR_5, "meta" ) )
            {
                FUNC_2( VAR_2, VAR_3 );
                continue;
            }

            if( !FUNC_4( VAR_5, "title" ) )
            {
                if( FUNC_3( VAR_2, VAR_3 ) )
                    break;
                continue;
            }

            FUNC_1( VAR_2, "skipping unknown tag <%s> in <head>", VAR_5 );
            FUNC_0( VAR_2, VAR_5 );
        }
    }
}
