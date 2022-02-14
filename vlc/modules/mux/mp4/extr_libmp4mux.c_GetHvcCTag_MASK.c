
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
struct hevc_dcr_params {size_t i_vps_count; size_t* rgi_vps; size_t i_sps_count; size_t* rgi_sps; size_t i_pps_count; size_t* rgi_pps; size_t i_seipref_count; size_t* rgi_seipref; size_t i_seisuff_count; size_t* rgi_seisuff; int const** p_seisuff; int const** p_seipref; int const** p_pps; int const** p_sps; int const** p_vps; } ;
typedef int hxxx_iterator_ctx_t ;
typedef int bo_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;





 int FUNC_0 (int *,size_t,int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int const*) ;
 int const* FUNC_4 (struct hevc_dcr_params*,int,int,size_t*) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*,size_t) ;
 scalar_t__ FUNC_7 (int *,int const**,size_t*) ;
 int FUNC_8 (int *,int const*,size_t,int ) ;

__attribute__((used)) static bo_t *FUNC_9(const uint8_t *VAR_4, size_t VAR_5,
                        bool VAR_6)
{


    bo_t *VAR_7 = FUNC_2("hvcC");
    if(!VAR_7 || !VAR_5)
        return VAR_7;


    if(FUNC_6(VAR_4, VAR_5))
    {
        (void) FUNC_0(VAR_7, VAR_5, VAR_4);
        return VAR_7;
    }

    struct hevc_dcr_params VAR_8 = { };
    const uint8_t *VAR_9;
    size_t VAR_10;

    hxxx_iterator_ctx_t VAR_11;
    FUNC_8(&VAR_11, VAR_4, VAR_5, 0);
    while(FUNC_7(&VAR_11, &VAR_9, &VAR_10))
    {
        switch (FUNC_5(VAR_9))
        {
            case 128:
                if(VAR_8.i_vps_count != VAR_3)
                {
                    VAR_8.p_vps[VAR_8.i_vps_count] = VAR_9;
                    VAR_8.rgi_vps[VAR_8.i_vps_count] = VAR_10;
                    VAR_8.i_vps_count++;
                }
                break;
            case 130:
                if(VAR_8.i_sps_count != VAR_2)
                {
                    VAR_8.p_sps[VAR_8.i_sps_count] = VAR_9;
                    VAR_8.rgi_sps[VAR_8.i_sps_count] = VAR_10;
                    VAR_8.i_sps_count++;
                }
                break;
            case 132:
                if(VAR_8.i_pps_count != VAR_0)
                {
                    VAR_8.p_pps[VAR_8.i_pps_count] = VAR_9;
                    VAR_8.rgi_pps[VAR_8.i_pps_count] = VAR_10;
                    VAR_8.i_pps_count++;
                }
                break;
            case 131:
                if(VAR_8.i_seipref_count != VAR_1)
                {
                    VAR_8.p_seipref[VAR_8.i_seipref_count] = VAR_9;
                    VAR_8.rgi_seipref[VAR_8.i_seipref_count] = VAR_10;
                    VAR_8.i_seipref_count++;
                }
                break;
            case 129:
                if(VAR_8.i_seisuff_count != VAR_1)
                {
                    VAR_8.p_seisuff[VAR_8.i_seisuff_count] = VAR_9;
                    VAR_8.rgi_seisuff[VAR_8.i_seisuff_count] = VAR_10;
                    VAR_8.i_seisuff_count++;
                }
                break;

            default:
                break;
        }
    }

    size_t VAR_12;
    uint8_t *VAR_13 = FUNC_4(&VAR_8, 4, VAR_6, &VAR_12);
    if(!VAR_13)
    {
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    FUNC_0(VAR_7, VAR_12, VAR_13);
    FUNC_3(VAR_13);

    return VAR_7;
}
