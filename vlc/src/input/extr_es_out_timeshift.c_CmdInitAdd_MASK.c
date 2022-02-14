
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_fmt; int * p_es; } ;
struct TYPE_6__ {TYPE_1__ add; } ;
struct TYPE_7__ {TYPE_2__ u; int i_date; int i_type; } ;
typedef TYPE_3__ ts_cmd_t ;
typedef int es_out_id_t ;
typedef int es_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3( ts_cmd_t *VAR_3, es_out_id_t *VAR_4, const es_format_t *VAR_5, bool VAR_6 )
{
    VAR_3->i_type = VAR_0;
    VAR_3->i_date = FUNC_2();
    VAR_3->u.add.p_es = VAR_4;
    if( VAR_6 )
    {
        VAR_3->u.add.p_fmt = FUNC_1( sizeof(*VAR_5) );
        if( !VAR_3->u.add.p_fmt )
            return VAR_1;
        FUNC_0( VAR_3->u.add.p_fmt, VAR_5 );
    }
    else
    {
        VAR_3->u.add.p_fmt = (es_format_t*)VAR_5;
    }
    return VAR_2;
}
