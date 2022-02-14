
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock_out; int p_buffers; TYPE_2__* p_encoder; int picture_pool_has_room; int pp_pics; scalar_t__ b_abort; int cond; } ;
typedef TYPE_1__ transcode_encoder_t ;
typedef int picture_t ;
typedef int block_t ;
struct TYPE_6__ {int * (* pf_encode_video ) (TYPE_2__*,int *) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (TYPE_2__*,int *) ;
 int * FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void* FUNC_12( void *VAR_0 )
{
    transcode_encoder_t *VAR_1 = VAR_0;
    picture_t *VAR_2 = ((void*)0);
    int VAR_3 = FUNC_10 ();
    block_t *VAR_4 = ((void*)0);

    FUNC_7( &VAR_1->lock_out );

    for( ;; )
    {
        while( !VAR_1->b_abort &&
               (VAR_2 = FUNC_2( VAR_1->pp_pics )) == ((void*)0) )
            FUNC_6( &VAR_1->cond, &VAR_1->lock_out );
        FUNC_11( &VAR_1->picture_pool_has_room );

        if( VAR_2 )
        {

            FUNC_8( &VAR_1->lock_out );
            VAR_4 = VAR_1->p_encoder->pf_encode_video( VAR_1->p_encoder, VAR_2 );
            FUNC_1( VAR_2 );
            FUNC_7( &VAR_1->lock_out );

            FUNC_0( &VAR_1->p_buffers, VAR_4 );
        }

        if( VAR_1->b_abort )
            break;
    }


    while( (VAR_2 = FUNC_2( VAR_1->pp_pics )) != ((void*)0) )
    {
        FUNC_11( &VAR_1->picture_pool_has_room );
        VAR_4 = VAR_1->p_encoder->pf_encode_video( VAR_1->p_encoder, VAR_2 );
        FUNC_1( VAR_2 );
        FUNC_0( &VAR_1->p_buffers, VAR_4 );
    }


    do {
        VAR_4 = VAR_1->p_encoder->pf_encode_video(VAR_1->p_encoder, ((void*)0) );
        FUNC_0( &VAR_1->p_buffers, VAR_4 );
    } while( VAR_4 );

    FUNC_8( &VAR_1->lock_out );

    FUNC_9 (VAR_3);

    return ((void*)0);
}
