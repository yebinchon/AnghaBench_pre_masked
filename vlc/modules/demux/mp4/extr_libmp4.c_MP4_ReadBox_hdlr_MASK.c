
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int stream_t ;
typedef int int32_t ;
struct TYPE_7__ {scalar_t__ i_predefined; scalar_t__ i_handler_type; size_t* psz_name; } ;
struct TYPE_5__ {TYPE_4__* p_hdlr; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_6 (char,char,char,char) ;
 int FUNC_7 (int ) ;
 size_t VAR_3 ;
 size_t* FUNC_8 (size_t) ;
 int FUNC_9 (size_t*,int ,size_t) ;
 int FUNC_10 (int *,char*,char*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12( stream_t *VAR_5, MP4_Box_t *VAR_6 )
{
    int32_t VAR_7;
    FUNC_7(VAR_7);

    FUNC_4( VAR_0, VAR_1 );

    FUNC_3( VAR_6->data.p_hdlr );

    FUNC_2( VAR_6->data.p_hdlr->i_predefined );
    FUNC_2( VAR_6->data.p_hdlr->i_handler_type );

    FUNC_1( VAR_7 );
    FUNC_1( VAR_7 );
    FUNC_1( VAR_7 );
    VAR_6->data.p_hdlr->psz_name = ((void*)0);

    if( VAR_3 >= VAR_2 )
        FUNC_5( 0 );

    if( VAR_3 > 0 )
    {
        size_t VAR_8;


        if( VAR_6->data.p_hdlr->i_predefined == FUNC_6( 'm', 'h', 'l', 'r' ) )
        {
            uint8_t VAR_9;

            FUNC_0( VAR_9 );
            VAR_8 = (VAR_9 <= VAR_3) ? VAR_9 : VAR_3;
        }
        else
            VAR_8 = VAR_3;

        uint8_t *VAR_10 = VAR_6->data.p_hdlr->psz_name = FUNC_8( VAR_8 + 1 );
        if( FUNC_11( VAR_10 == ((void*)0) ) )
            FUNC_5( 0 );

        FUNC_9( VAR_10, VAR_4, VAR_8 );
        VAR_6->data.p_hdlr->psz_name[VAR_8] = '\0';
    }







    FUNC_5( 1 );
}
