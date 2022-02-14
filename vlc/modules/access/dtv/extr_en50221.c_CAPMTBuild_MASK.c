
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int system_ids_t ;
struct TYPE_10__ {size_t i_es_count; TYPE_3__* p_es; int i_program_number; int i_program_descriptors; int p_program_descriptors; } ;
typedef TYPE_2__ en50221_capmt_info_t ;
struct TYPE_11__ {int i_descriptors; int p_descriptors; } ;
typedef TYPE_3__ en50221_capmt_es_info_t ;
struct TYPE_12__ {int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_4__ cam_t ;
struct TYPE_9__ {scalar_t__ p_sys; } ;


 int * FUNC_0 (TYPE_3__ const*,int *,size_t,size_t,int ,int *) ;
 int * FUNC_1 (TYPE_2__ const*,int *,int ,size_t,int ) ;
 size_t FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int) ;

__attribute__((used)) static uint8_t *FUNC_4( cam_t * VAR_0, int VAR_1,
                            const en50221_capmt_info_t *VAR_2,
                            uint8_t VAR_3,
                            uint8_t VAR_4, size_t *restrict VAR_5 )
{
    system_ids_t *VAR_6 =
        (system_ids_t *)VAR_0->p_sessions[VAR_1 - 1].p_sys;
    size_t VAR_7, VAR_8;
    uint8_t *VAR_9;

    VAR_7 = VAR_8 = FUNC_2( VAR_6,
                                                  VAR_2->p_program_descriptors,
                                                  VAR_2->i_program_descriptors );
    for( size_t VAR_10=0; VAR_10 < VAR_2->i_es_count; VAR_10++ )
    {
        const en50221_capmt_es_info_t *VAR_11 = &VAR_2->p_es[VAR_10];
        VAR_7 += FUNC_2( VAR_6, VAR_11->p_descriptors, VAR_11->i_descriptors );
    }

    if ( !VAR_7 )
    {
        FUNC_3( VAR_0->obj,
                  "no compatible scrambling system for SID %d on session %d",
                  VAR_2->i_program_number, VAR_1 );
        return ((void*)0);
    }

    VAR_9 = FUNC_1( VAR_2, VAR_6, VAR_3,
                           VAR_8, VAR_4 );

    if ( VAR_8 )
        *VAR_5 = 7 + VAR_8;
    else
        *VAR_5 = 6;

    for( size_t VAR_12=0; VAR_12 < VAR_2->i_es_count; VAR_12++ )
    {
        const en50221_capmt_es_info_t *VAR_13 = &VAR_2->p_es[VAR_12];
        VAR_7 = FUNC_2( VAR_6, VAR_13->p_descriptors, VAR_13->i_descriptors );

        if ( VAR_7 || VAR_8 )
        {
            VAR_9 = FUNC_0( VAR_13, VAR_6, *VAR_5, VAR_7,
                               VAR_4, VAR_9 );
            if ( VAR_7 )
                *VAR_5 += 6 + VAR_7;
            else
                *VAR_5 += 5;
        }
    }

    return VAR_9;
}
