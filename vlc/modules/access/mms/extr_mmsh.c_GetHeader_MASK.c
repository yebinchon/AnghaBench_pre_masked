
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int i_type; scalar_t__ i_data; int p_data; scalar_t__ i_size; } ;
typedef TYPE_2__ chunk_t ;
struct TYPE_10__ {scalar_t__ i_header; int * p_header; } ;
typedef TYPE_3__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 int * FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5( stream_t *VAR_0, int VAR_1 )
{
    access_sys_t *VAR_2 = VAR_0->p_sys;
    int VAR_3 = 0;


    VAR_2->i_header = 0;
    FUNC_1( VAR_2->p_header );
    VAR_2->p_header = ((void*)0);
    for( ;; )
    {
        chunk_t VAR_4;
        if( (VAR_1 >= 0 && VAR_3 >= VAR_1) || FUNC_0( VAR_0, &VAR_4 ) || VAR_4.i_type != 0x4824 )
            break;

        VAR_3 += (4+VAR_4.i_size);

        if( VAR_4.i_data > 0 )
        {
            VAR_2->i_header += VAR_4.i_data;
            VAR_2->p_header = FUNC_4( VAR_2->p_header, VAR_2->i_header );
            FUNC_2( &VAR_2->p_header[VAR_2->i_header - VAR_4.i_data],
                    VAR_4.p_data, VAR_4.i_data );
        }
    }
    FUNC_3( VAR_0, "complete header size=%d", VAR_2->i_header );
}
