
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int i_profile; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_10__ {int* p_profiles; scalar_t__ codec; } ;
typedef TYPE_2__ directx_va_mode_t ;
struct TYPE_11__ {int profile; } ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int*,int *,int *) ;

__attribute__((used)) static bool FUNC_2(const directx_va_mode_t *VAR_3, const es_format_t *VAR_4,
                              const AVCodecContext *VAR_5)
{
    if (VAR_3->p_profiles == ((void*)0))
        return 1;

    int VAR_6 = VAR_4->i_profile >= 0 ? VAR_4->i_profile : VAR_5->profile;
    if (VAR_3->codec == VAR_0)
    {
        uint8_t VAR_7;
        if ( FUNC_0(VAR_4, &VAR_7, ((void*)0), ((void*)0)) )
            VAR_6 = VAR_7;
    }
    if (VAR_3->codec == VAR_1)
    {
        uint8_t VAR_8;
        if (FUNC_1(VAR_4, &VAR_8, ((void*)0), ((void*)0)) )
            VAR_6 = VAR_8;
    }

    bool VAR_9 = 0;
    if (VAR_6 <= 0)
        VAR_9 = 1;
    else for (const int *VAR_10 = &VAR_3->p_profiles[0]; *VAR_10 != VAR_2; ++VAR_10)
    {
        if (*VAR_10 == VAR_6)
        {
            VAR_9 = 1;
            break;
        }
    }
    return VAR_9;
}
