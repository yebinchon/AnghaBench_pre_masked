
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int en50221_capmt_info_t ;
typedef int en50221_capmt_es_info_t ;
struct TYPE_5__ {TYPE_2__* p_first_es; TYPE_3__* p_first_descriptor; int i_program_number; int i_version; } ;
typedef TYPE_1__ dvbpsi_pmt_t ;
struct TYPE_6__ {TYPE_3__* p_first_descriptor; int i_pid; int i_type; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ dvbpsi_pmt_es_t ;
struct TYPE_7__ {int i_tag; int i_length; int p_data; struct TYPE_7__* p_next; } ;
typedef TYPE_3__ dvbpsi_descriptor_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static en50221_capmt_info_t * FUNC_6( const dvbpsi_pmt_t *VAR_0 )
{
    en50221_capmt_info_t *VAR_1 = FUNC_3( VAR_0->i_version,
                                                    VAR_0->i_program_number );
    if( FUNC_5(VAR_1 == ((void*)0)) )
        return VAR_1;

    for( const dvbpsi_descriptor_t *VAR_2 = VAR_0->p_first_descriptor;
                                           VAR_2; VAR_2 = VAR_2->p_next )
    {
        if( VAR_2->i_tag == 0x09 )
            FUNC_0( VAR_1, VAR_2->p_data, VAR_2->i_length );
    }

    for( const dvbpsi_pmt_es_t *VAR_3 = VAR_0->p_first_es;
                                       VAR_3; VAR_3 = VAR_3->p_next )
    {
        en50221_capmt_es_info_t *VAR_4 = FUNC_2( VAR_1,
                                                               VAR_3->i_type,
                                                               VAR_3->i_pid );
        if( FUNC_4(VAR_4) )
        {
            for( const dvbpsi_descriptor_t *VAR_5 = VAR_3->p_first_descriptor;
                                                   VAR_5; VAR_5 = VAR_5->p_next )
            {
                if( VAR_5->i_tag == 0x09 )
                    FUNC_1( VAR_4, VAR_5->p_data, VAR_5->i_length );
            }
        }
    }

    return VAR_1;
}
