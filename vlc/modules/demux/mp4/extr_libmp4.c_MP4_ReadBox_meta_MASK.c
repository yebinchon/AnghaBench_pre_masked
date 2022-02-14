
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_10__ {scalar_t__ i_version; int i_handler_type; } ;
struct TYPE_9__ {int i_size; int i_handler; } ;
typedef TYPE_1__ MP4_Box_t ;


 int const VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_1__ const*) ;



 TYPE_1__* FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int const*) ;
 scalar_t__ FUNC_3 (int const*,char*,int) ;
 size_t FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int const**,int) ;
 int FUNC_6 (int *,int *,size_t const) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    const uint8_t *VAR_3;
    const size_t VAR_4 = FUNC_4( VAR_2 );

    if( VAR_2->i_size < 16 || VAR_2->i_size - VAR_4 < 8 )
        return 0;


    if( FUNC_6( VAR_1, ((void*)0), VAR_4 ) < (ssize_t) VAR_4 )
        return 0;


    if( FUNC_5( VAR_1, &VAR_3, 8 ) < 8 )
        return 0;

    if( !FUNC_3( VAR_3, "\0\0\0", 4 ) )
    {
        if( FUNC_6( VAR_1, ((void*)0), 4 ) < 4 )
            return 0;
    }
    else if( FUNC_3( &VAR_3[4], "hdlr", 4 ) )
    {
       return 0;
    }


    const uint32_t VAR_5[] = { VAR_0, 0 };
    if ( !FUNC_2( VAR_1, VAR_2, VAR_5 ) )
        return 0;


    const MP4_Box_t *VAR_6 = FUNC_1( VAR_2, "hdlr" );
    if ( VAR_6 && FUNC_0(VAR_6) && FUNC_0(VAR_6)->i_version == 0 )
    {
        VAR_2->i_handler = FUNC_0(VAR_6)->i_handler_type;
        switch( VAR_2->i_handler )
        {
            case 128:
            case 129:
            case 130:

                return FUNC_2( VAR_1, VAR_2, ((void*)0) );
            default:

                break;
        }
    }

    return 1;
}
