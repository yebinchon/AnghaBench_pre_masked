
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int i_bandwidth; int i_symbolrate; int type; int inner_fec; int polarization; int coderate_lp; int coderate_hp; int modulation; int i_frequency; } ;
typedef TYPE_3__ scan_tuner_config_t ;
struct TYPE_13__ {scalar_t__ b_use_nit; } ;
struct TYPE_12__ {int i_index; } ;
struct TYPE_15__ {double i_scanlist; double i_multiplex; int i_multiplex_toscan; TYPE_7__** pp_multiplex; int b_multiplexes_from_nit; TYPE_2__ parameter; int * p_scanlist; TYPE_1__ spectrum; TYPE_5__* p_current; } ;
typedef TYPE_4__ scan_t ;
struct TYPE_16__ {int i_bw; int delivery; int i_rate; struct TYPE_16__* p_next; int inner_fec; int polarization; int coderate_lp; int coderate_hp; int modulation; int i_freq; } ;
typedef TYPE_5__ scan_list_entry_t ;
struct TYPE_17__ {TYPE_3__ cfg; int b_scanned; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,double*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_2( scan_t *VAR_6, scan_tuner_config_t *VAR_7, double *VAR_8 )
{

    if( VAR_6->p_scanlist && VAR_6->p_current )
    {
        const scan_list_entry_t *VAR_9 = VAR_6->p_current;
        VAR_7->i_frequency = VAR_9->i_freq;
        VAR_7->i_bandwidth = VAR_9->i_bw / 1000000;
        VAR_7->modulation = VAR_9->modulation;

        switch( VAR_9->delivery )
        {
            case 128:
                break;
            case 129:
                VAR_7->coderate_hp = VAR_9->coderate_hp;
                VAR_7->coderate_lp = VAR_9->coderate_lp;
                VAR_7->type = VAR_2;
                break;
            case 130:
                VAR_7->type = VAR_1;
                VAR_7->polarization = VAR_9->polarization;
                VAR_7->i_symbolrate = VAR_9->i_rate / 1000;
                VAR_7->inner_fec = VAR_9->inner_fec;
                break;
            case 131:
                VAR_7->type = VAR_0;
                VAR_7->i_symbolrate = VAR_9->i_rate / 1000;
                VAR_7->inner_fec = VAR_9->inner_fec;
                break;
            default:
                VAR_7->type = VAR_3;
                break;
        }

        VAR_6->p_current = VAR_6->p_current->p_next;
        *VAR_8 = (double) VAR_6->spectrum.i_index++ / VAR_6->i_scanlist;

        return VAR_5;
    }

    if( VAR_6->p_scanlist == ((void*)0) &&
        ( VAR_6->i_multiplex == 0 ||
         (VAR_6->parameter.b_use_nit && !VAR_6->b_multiplexes_from_nit) ) )
    {
        int VAR_10 = FUNC_0( VAR_6, VAR_7, VAR_8 );
        if( VAR_10 == VAR_5 )
            return VAR_10;
    }

    if( VAR_6->i_multiplex_toscan )
    {
        for( size_t VAR_11=0; VAR_11<VAR_6->i_multiplex_toscan; VAR_11++ )
        {
            if( !VAR_6->pp_multiplex[VAR_11]->b_scanned )
            {
                FUNC_1( VAR_6, VAR_6->pp_multiplex[VAR_11], 1 );
                *VAR_7 = VAR_6->pp_multiplex[VAR_11]->cfg;
                *VAR_8 = (double) 1.0 - (VAR_6->i_multiplex / VAR_6->i_multiplex_toscan);
                return VAR_5;
            }
        }
    }

    return VAR_4;
}
