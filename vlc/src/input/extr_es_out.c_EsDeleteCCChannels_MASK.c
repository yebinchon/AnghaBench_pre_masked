
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int es_out_t ;
struct TYPE_11__ {scalar_t__ type; int i_bitmap; TYPE_5__** pp_es; } ;
struct TYPE_9__ {int i_id; } ;
struct TYPE_12__ {TYPE_3__ cc; TYPE_1__ fmt; } ;
typedef TYPE_4__ es_out_id_t ;
struct TYPE_10__ {int const i_id; } ;
struct TYPE_13__ {TYPE_2__ fmt; } ;


 int FUNC_0 (int *,TYPE_5__*) ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3( es_out_t *VAR_2, es_out_id_t *VAR_3 )
{
    if( VAR_3->cc.type == 0 )
        return;

    es_out_id_t *VAR_4 = FUNC_1( VAR_2, VAR_0 );
    const int VAR_5 = VAR_4 ? VAR_4->fmt.i_id : -1;

    uint64_t VAR_6 = VAR_3->cc.i_bitmap;
    for( int VAR_7 = 0; VAR_6 > 0; VAR_7++, VAR_6 >>= 1 )
    {
        if( (VAR_6 & 1) == 0 || !VAR_3->cc.pp_es[VAR_7] )
            continue;

        if( VAR_5 == VAR_3->cc.pp_es[VAR_7]->fmt.i_id )
        {

            FUNC_2(VAR_2, VAR_3->cc.pp_es[VAR_7], VAR_1);
        }
        FUNC_0( VAR_2, VAR_3->cc.pp_es[VAR_7] );
    }

    VAR_3->cc.i_bitmap = 0;
    VAR_3->cc.type = 0;
}
