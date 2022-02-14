
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_5__ {char* psz_node_name; } ;
typedef TYPE_1__ tt_node_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (char const*,char*) ;
 TYPE_1__* FUNC_1 (int *,int *,char const*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,char const**) ;

__attribute__((used)) static int FUNC_4( xml_reader_t *VAR_3, tt_node_t **VAR_4 )
{
    const char* VAR_5;

    do
    {
        int VAR_6 = FUNC_3( VAR_3, &VAR_5 );

        if( VAR_6 <= VAR_2 )
            break;

        switch(VAR_6)
        {
            default:
                break;

            case 128:
                if( FUNC_0( VAR_5, "tt" ) ||
                    *VAR_4 != ((void*)0) )
                    return VAR_0;

                *VAR_4 = FUNC_1( VAR_3, ((void*)0), VAR_5 );
                if( !*VAR_4 ||
                    FUNC_2( VAR_3, *VAR_4 ) != VAR_1 )
                    return VAR_0;
                break;

            case 129:
                if( !*VAR_4 ||
                    FUNC_0( VAR_5, (*VAR_4)->psz_node_name ) )
                    return VAR_0;
                break;
        }

    } while( 1 );

    if( *VAR_4 == ((void*)0) )
        return VAR_0;

    return VAR_1;
}
