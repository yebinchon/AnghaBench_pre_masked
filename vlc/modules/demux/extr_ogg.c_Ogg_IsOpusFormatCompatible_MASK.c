
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_extra; int i_extra; } ;
typedef TYPE_1__ es_format_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,int) ;
 scalar_t__ FUNC_1 (unsigned int*,void const**,unsigned int*,int ,int ) ;

__attribute__((used)) static bool FUNC_2( const es_format_t *VAR_1,
                                        const es_format_t *VAR_2 )
{
    unsigned VAR_3[VAR_0];
    const void *VAR_4[VAR_0];
    unsigned VAR_5;

    if( FUNC_1(VAR_3, VAR_4, &VAR_5, VAR_1->i_extra, VAR_1->p_extra ) )
        VAR_5 = 0;

    unsigned VAR_6[VAR_0];
    const void *VAR_7[VAR_0];
    unsigned VAR_8;

    if( FUNC_1(VAR_6, VAR_7, &VAR_8, VAR_2->i_extra, VAR_2->p_extra ) )
        VAR_8 = 0;
    bool VAR_9 = 0;
    if( VAR_5 == VAR_8 && VAR_5 > 0 )
    {
        static const unsigned char VAR_10[2] = { 0, 1 };
        const unsigned char *VAR_11;
        unsigned char *VAR_12;
        const unsigned char *VAR_13;
        const unsigned char *VAR_14;
        int VAR_15;
        int VAR_16;
        int VAR_17;
        int VAR_18;
        int VAR_19;
        int VAR_20;
        VAR_11 = VAR_7[0];
        VAR_15 = VAR_17 = VAR_19 = 0;
        VAR_13 = VAR_10;
        if( VAR_6[0] >= 19 && VAR_11[8] <= 15 )
        {
            VAR_15 = VAR_11[9];
            switch( VAR_11[18] )
            {
                case 0:
                    VAR_17 = 1;
                    VAR_19 = VAR_15 - 1;
                    break;
                case 1:
                    if( VAR_6[0] >= 21U + VAR_15 )
                    {
                        VAR_17 = VAR_11[19];
                        VAR_19 = VAR_11[20];
                        VAR_13 = VAR_11 + 21;
                    }
                    break;
            }
        }
        VAR_12 = (unsigned char *)VAR_4[0];
        VAR_16 = VAR_18 = VAR_20 = 0;
        VAR_14 = VAR_10;
        if( VAR_3[0] >= 19 && VAR_12[8] <= 15 )
        {
            VAR_16 = VAR_12[9];
            switch( VAR_12[18] )
            {
                case 0:
                    VAR_18 = 1;
                    VAR_20 = VAR_16 - 1;
                    break;
                case 1:
                    if( VAR_3[0] >= 21U + VAR_16 )
                    {
                        VAR_18 = VAR_12[19];
                        VAR_20 = VAR_12[20];
                        VAR_14 = VAR_12+21;
                    }
                    break;
            }
        }
        VAR_9 = VAR_15 == VAR_16 &&
                  VAR_17 == VAR_18 &&
                  VAR_19 == VAR_20 &&
                  FUNC_0(VAR_13, VAR_14,
                      VAR_16*sizeof(*VAR_14)) == 0;
    }

    return VAR_9;
}
