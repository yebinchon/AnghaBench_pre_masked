
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {TYPE_3__* p_rootnode; int p_reader; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_8__ {char* psz_node_name; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (char const*,char*) ;
 TYPE_3__* FUNC_1 (int ,int *,char const*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const**) ;

__attribute__((used)) static int FUNC_5( demux_t* VAR_3 )
{
    demux_sys_t* VAR_4 = VAR_3->p_sys;
    const char* VAR_5;

    do
    {
        int VAR_6 = FUNC_4( VAR_4->p_reader, &VAR_5 );
        bool VAR_7 = FUNC_3( VAR_4->p_reader );

        if( VAR_6 <= VAR_2 )
            break;

        switch(VAR_6)
        {
            default:
                break;

            case 128:
                if( FUNC_0( VAR_5, "tt" ) ||
                    VAR_4->p_rootnode != ((void*)0) )
                    return VAR_0;

                VAR_4->p_rootnode = FUNC_1( VAR_4->p_reader, ((void*)0), VAR_5 );
                if( VAR_7 )
                    break;
                if( !VAR_4->p_rootnode ||
                    FUNC_2( VAR_4->p_reader, VAR_4->p_rootnode ) != VAR_1 )
                    return VAR_0;
                break;

            case 129:
                if( !VAR_4->p_rootnode ||
                    FUNC_0( VAR_5, VAR_4->p_rootnode->psz_node_name ) )
                    return VAR_0;
                break;
        }

    } while( 1 );

    if( VAR_4->p_rootnode == ((void*)0) )
        return VAR_0;

    return VAR_1;
}
