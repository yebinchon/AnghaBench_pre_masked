
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct hevc_tuple_s {void* p_decoded; TYPE_5__* p_nal; } ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int p_active_pps; struct hevc_tuple_s* rg_pps; int p_active_sps; struct hevc_tuple_s* rg_sps; int p_active_vps; struct hevc_tuple_s* rg_vps; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int* p_buffer; size_t i_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_13__ {int* p_buffer; size_t i_buffer; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*) ;
 void* FUNC_2 (int const*,size_t,int) ;
 void* FUNC_3 (int const*,size_t,int) ;
 void* FUNC_4 (int const*,size_t,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int const**,size_t*) ;
 int FUNC_9 (int const*,int const*,size_t) ;
 int FUNC_10 (TYPE_1__*,char*,int) ;

__attribute__((used)) static bool FUNC_11(decoder_t *VAR_3, uint8_t VAR_4, uint8_t VAR_5,
                      const block_t *VAR_6)
{
    decoder_sys_t *VAR_7 = VAR_3->p_sys;
    struct hevc_tuple_s *VAR_8;
    void **VAR_9;

    switch(VAR_4)
    {
        case 128:
            if(VAR_5 > VAR_2)
                return 0;
            VAR_8 = &VAR_7->rg_vps[VAR_5];
            VAR_9 = (void**)&VAR_7->p_active_vps;
            break;
        case 129:
            if(VAR_5 > VAR_1)
                return 0;
            VAR_8 = &VAR_7->rg_sps[VAR_5];
            VAR_9 = (void**)&VAR_7->p_active_sps;
            break;
        case 130:
            if(VAR_5 > VAR_0)
                return 0;
            VAR_8 = &VAR_7->rg_pps[VAR_5];
            VAR_9 = (void**)&VAR_7->p_active_pps;
            break;
        default:
            return 0;
    }


    if(VAR_8->p_nal)
    {
        const uint8_t *VAR_10 = VAR_8->p_nal->p_buffer;
        size_t VAR_11 = VAR_8->p_nal->i_buffer;
        FUNC_8(&VAR_10, &VAR_11);
        const uint8_t *VAR_12 = VAR_6->p_buffer;
        size_t VAR_13 = VAR_6->i_buffer;
        FUNC_8(&VAR_12, &VAR_13);
        if(VAR_11 == VAR_13 && !FUNC_9(VAR_10, VAR_12, VAR_13))
            return 1;
    }


    if(VAR_8->p_decoded)
    {
        switch(VAR_4)
        {
            case 128:
                FUNC_7(VAR_8->p_decoded);
                break;
            case 129:
                FUNC_6(VAR_8->p_decoded);
                break;
            case 130:
                FUNC_5(VAR_8->p_decoded);
                break;
        }
        if(*VAR_9 == VAR_8->p_decoded)
            *VAR_9 = ((void*)0);
        else
            VAR_9 = ((void*)0);
        VAR_8->p_decoded = ((void*)0);
    }
    else VAR_9 = ((void*)0);


    if(VAR_8->p_nal)
    {
        FUNC_1(VAR_8->p_nal);
        VAR_8->p_nal = ((void*)0);
    }

    const uint8_t *VAR_14 = VAR_6->p_buffer;
    size_t VAR_15 = VAR_6->i_buffer;
    if( FUNC_8( &VAR_14, &VAR_15 ) )
    {

        switch(VAR_4)
        {
            case 129:
                VAR_8->p_decoded = FUNC_3(VAR_14, VAR_15, 1);
                if(!VAR_8->p_decoded)
                {
                    FUNC_10(VAR_3, "Failed decoding SPS id %d", VAR_5);
                    return 0;
                }
                break;
            case 130:
                VAR_8->p_decoded = FUNC_2(VAR_14, VAR_15, 1);
                if(!VAR_8->p_decoded)
                {
                    FUNC_10(VAR_3, "Failed decoding PPS id %d", VAR_5);
                    return 0;
                }
                break;
            case 128:
                VAR_8->p_decoded = FUNC_4(VAR_14, VAR_15, 1);
                if(!VAR_8->p_decoded)
                {
                    FUNC_10(VAR_3, "Failed decoding VPS id %d", VAR_5);
                    return 0;
                }
                break;
        }

        if(VAR_8->p_decoded && VAR_9)
            *VAR_9 = VAR_8->p_decoded;

        VAR_8->p_nal = FUNC_0((block_t *)VAR_6);

        return 1;
    }

    return 0;
}
