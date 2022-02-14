
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_3__* p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_11__ {char* psz_uri; int i_priority; int i_type; } ;
typedef TYPE_2__ libvlc_media_slave_t ;
struct TYPE_12__ {int i_slaves; int lock; TYPE_4__** pp_slaves; } ;
typedef TYPE_3__ input_item_t ;
struct TYPE_13__ {int i_priority; int i_type; int psz_uri; } ;
typedef TYPE_4__ input_item_slave_t ;
 int FUNC_0 (int) ;
 TYPE_2__** FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__**,int) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *) ;

unsigned int FUNC_9( libvlc_media_t *VAR_2,
                                      libvlc_media_slave_t ***VAR_3 )
{
    FUNC_0( VAR_2 && VAR_3 );
    input_item_t *VAR_4 = VAR_2->p_input_item;
    *VAR_3 = ((void*)0);

    FUNC_7( &VAR_4->lock );

    int VAR_5 = VAR_4->i_slaves;
    if( VAR_5 <= 0 )
        return FUNC_8( &VAR_4->lock ), 0;

    libvlc_media_slave_t **VAR_6 = FUNC_1( VAR_5, sizeof(*VAR_6) );
    if( VAR_6 == ((void*)0) )
        return FUNC_8( &VAR_4->lock ), 0;

    for( int VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7 )
    {
        input_item_slave_t *VAR_8 = VAR_4->pp_slaves[VAR_7];
        FUNC_0( VAR_8->i_priority >= 132 );


        libvlc_media_slave_t *VAR_9 = FUNC_3( sizeof(*VAR_9) +
                                                FUNC_5( VAR_8->psz_uri )
                                                + 1 );
        if( VAR_9 == ((void*)0) )
        {
            FUNC_2(VAR_6, VAR_7);
            return FUNC_8( &VAR_4->lock ), 0;
        }
        VAR_9->psz_uri = (char *) ((uint8_t *)VAR_9) + sizeof(*VAR_9);
        FUNC_4( VAR_9->psz_uri, VAR_8->psz_uri );

        switch( VAR_8->i_type )
        {
        case 128:
            VAR_9->i_type = VAR_1;
            break;
        case 129:
            VAR_9->i_type = VAR_0;
            break;
        default:
            FUNC_6();
        }

        switch( VAR_8->i_priority )
        {
        case 132:
            VAR_9->i_priority = 0;
            break;
        case 131:
            VAR_9->i_priority = 1;
            break;
        case 133:
            VAR_9->i_priority = 2;
            break;
        case 134:
            VAR_9->i_priority = 3;
            break;
        case 130:
            VAR_9->i_priority = 4;
            break;
        default:
            FUNC_6();
        }
        VAR_6[VAR_7] = VAR_9;
    }
    FUNC_8( &VAR_4->lock );

    *VAR_3 = VAR_6;
    return VAR_5;
}
