
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_meta_t ;
struct TYPE_8__ {int b_net; scalar_t__ i_slaves; int * p_meta; int lock; TYPE_7__** pp_slaves; int i_type; int i_duration; int psz_name; int psz_uri; } ;
typedef TYPE_1__ input_item_t ;
typedef int input_item_slave_t ;
struct TYPE_9__ {int i_priority; int i_type; int psz_uri; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_7__**,int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int ,int ,int ,int ) ;
 int * FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

input_item_t *FUNC_10( input_item_t *VAR_1 )
{
    vlc_meta_t *VAR_2 = ((void*)0);
    input_item_t *VAR_3;
    bool VAR_4;

    FUNC_8( &VAR_1->lock );

    VAR_3 = FUNC_2( VAR_1->psz_uri, VAR_1->psz_name,
                              VAR_1->i_duration, VAR_1->i_type,
                              VAR_0 );
    if( FUNC_4(VAR_3 != ((void*)0)) && VAR_1->p_meta != ((void*)0) )
    {
        VAR_2 = FUNC_7();
        FUNC_6( VAR_2, VAR_1->p_meta );
    }
    VAR_4 = VAR_1->b_net;

    if( FUNC_4(VAR_3 != ((void*)0)) && VAR_1->i_slaves > 0 )
    {
        for( int VAR_5 = 0; VAR_5 < VAR_1->i_slaves; VAR_5++ )
        {
            input_item_slave_t* VAR_6 = FUNC_3(
                        VAR_1->pp_slaves[VAR_5]->psz_uri,
                        VAR_1->pp_slaves[VAR_5]->i_type,
                        VAR_1->pp_slaves[VAR_5]->i_priority);
            if( FUNC_5(VAR_6 != ((void*)0)) )
            {
                FUNC_0(VAR_3->i_slaves, VAR_3->pp_slaves, VAR_6);
            }
        }
    }

    FUNC_9( &VAR_1->lock );

    if( FUNC_4(VAR_3 != ((void*)0)) )
    {
        FUNC_1( VAR_3, VAR_1 );
        VAR_3->p_meta = VAR_2;
        VAR_3->b_net = VAR_4;
    }

    return VAR_3;
}
