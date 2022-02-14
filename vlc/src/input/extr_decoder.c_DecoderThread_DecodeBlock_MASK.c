
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* pf_decode ) (TYPE_1__*,TYPE_2__*) ;} ;
struct decoder_owner {int error; TYPE_1__ dec; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_9__ {int i_flags; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int FUNC_0 (struct decoder_owner*,TYPE_2__*) ;
 int FUNC_1 (struct decoder_owner*) ;



 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6( struct decoder_owner *VAR_1, block_t *VAR_2 )
{
    decoder_t *VAR_3 = &VAR_1->dec;

    int VAR_4 = VAR_3->pf_decode( VAR_3, VAR_2 );
    switch( VAR_4 )
    {
        case 128:
            break;
        case 130:
            VAR_1->error = 1;
            break;
        case 129:
            FUNC_1( VAR_1 );
            if( FUNC_4( VAR_2 == ((void*)0) ) )
                break;
            if( !( VAR_2->i_flags & VAR_0 ) )
            {
                VAR_2->i_flags |= VAR_0;
                FUNC_0( VAR_1, VAR_2 );
            }
            else
                FUNC_2( VAR_2 );
            break;
        default:
            FUNC_5();
    }
}
