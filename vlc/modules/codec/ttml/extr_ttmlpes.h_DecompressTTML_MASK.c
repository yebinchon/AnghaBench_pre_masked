
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int stream_t ;
typedef int decoder_t ;
struct TYPE_6__ {int i_buffer; struct TYPE_6__* p_next; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int *,size_t,int) ;

__attribute__((used)) static block_t * FUNC_5( decoder_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2 )
{
    block_t *VAR_3 = ((void*)0);
    block_t **VAR_4 = &VAR_3;

    stream_t *VAR_5 = FUNC_4( VAR_0, (uint8_t *) VAR_1, VAR_2, 1 );
    if( !VAR_5 )
        return ((void*)0);
    stream_t *VAR_6 = FUNC_3( VAR_5, "inflate" );
    if( VAR_6 )
    {
        for( ;; )
        {
            *VAR_4 = FUNC_1( VAR_6, 64 * 1024 );
            if( *VAR_4 == ((void*)0) ||
                (*VAR_4)->i_buffer < 64*1024 )
                break;
            VAR_4 = &((*VAR_4)->p_next);
        }
        VAR_5 = VAR_6;
    }
    FUNC_2( VAR_5 );
    return VAR_3 ? FUNC_0( VAR_3 ) : ((void*)0);
}
