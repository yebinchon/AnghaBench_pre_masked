
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef int input_thread_t ;
typedef int input_attachment_t ;
typedef int demux_t ;
struct TYPE_4__ {int i_attachment; int p_es_out; TYPE_1__* p_item; int ** attachment_demux; int * attachment; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int*,int **,int ***,int,int **,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ***,...) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10( input_thread_t *VAR_2, demux_t *VAR_3 )
{
    vlc_meta_t *VAR_4 = FUNC_7();
    if( FUNC_4(VAR_4 == ((void*)0)) )
        return;

    FUNC_1( VAR_3, VAR_1, VAR_4 );



    input_attachment_t **VAR_5;
    int VAR_6;

    if( !FUNC_1( VAR_3, VAR_0,
                        &VAR_5, &VAR_6 ) )
    {
        FUNC_8( &FUNC_3(VAR_2)->p_item->lock );
        if( FUNC_3(VAR_2)->i_attachment > 0 )
        {
            int VAR_7 = 0;
            for( int VAR_8 = 0; VAR_8 < FUNC_3(VAR_2)->i_attachment; VAR_8++ )
            {
                if( FUNC_3(VAR_2)->attachment_demux[VAR_8] == VAR_3 )
                    FUNC_5( FUNC_3(VAR_2)->attachment[VAR_8] );
                else
                {
                    FUNC_3(VAR_2)->attachment[VAR_7] = FUNC_3(VAR_2)->attachment[VAR_8];
                    FUNC_3(VAR_2)->attachment_demux[VAR_7] = FUNC_3(VAR_2)->attachment_demux[VAR_8];
                    VAR_7++;
                }
            }
            FUNC_3(VAR_2)->i_attachment = VAR_7;
        }
        FUNC_0( &FUNC_3(VAR_2)->i_attachment, &FUNC_3(VAR_2)->attachment, &FUNC_3(VAR_2)->attachment_demux,
                          VAR_6, VAR_5, VAR_3 );
        FUNC_9( &FUNC_3(VAR_2)->p_item->lock );
    }

    FUNC_2( FUNC_3(VAR_2)->p_es_out, VAR_4 );
    FUNC_6( VAR_4 );
}
