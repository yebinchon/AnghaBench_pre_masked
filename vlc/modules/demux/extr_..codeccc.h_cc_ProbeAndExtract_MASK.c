
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum cc_payload_type_e { ____Placeholder_cc_payload_type_e } cc_payload_type_e ;
typedef int cc_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int *,int,int,int const*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int const*,int const*,int) ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_4( cc_data_t *VAR_5, bool VAR_6, const uint8_t *VAR_7, int VAR_8 )
{
    static const uint8_t VAR_9[4] = { 0x47, 0x41, 0x39, 0x34 };
    static const uint8_t VAR_10[4] = { 0x43, 0x43, 0x01, 0xf8 };
    static const uint8_t VAR_11[2] = { 0xbb, 0x02 };
    static const uint8_t VAR_12[2] = { 0xcc, 0x02 };
    static const uint8_t VAR_13[2] = { 0x99, 0x02 };
    static const uint8_t VAR_14[2] = { 0xaa, 0x02 };
    static const uint8_t VAR_15[2] = { 0x03, 0x81 };
    static const uint8_t VAR_16[2] = { 0x03, 0x01 };

    if( VAR_8 < 4 )
        return;

    enum cc_payload_type_e VAR_17;
    if( !FUNC_3( VAR_9, VAR_7, 4 ) && VAR_8 >= 5+1+1+1 && VAR_7[4] == 0x03 )
    {

        VAR_17 = VAR_1;
        VAR_8 -= 5;
        VAR_7 += 5;
    }
    else if( !FUNC_3( VAR_10, VAR_7, 4 ) && VAR_8 > 4+1 )
    {
        VAR_17 = VAR_0;
    }
    else if( VAR_8 >= 2+2 + 2+2 &&
             ( ( !FUNC_3( VAR_11, &VAR_7[0], 2 ) && !FUNC_3( VAR_12, &VAR_7[4], 2 ) ) ||
               ( !FUNC_3( VAR_13, &VAR_7[0], 2 ) && !FUNC_3( VAR_14, &VAR_7[4], 2 ) ) ) )
    {
        VAR_17 = VAR_2;
    }
    else if( ( !FUNC_3( VAR_15, VAR_7, 2 ) ||
               !FUNC_3( VAR_16, VAR_7, 2 ) ) && VAR_8 > 2 )
    {
        VAR_17 = VAR_3;
    }
    else if (VAR_7[0] == 0x03 && VAR_7[1] == VAR_8 - 2)
    {
        VAR_17 = VAR_1;
        VAR_8 -= 2;
        VAR_7 += 2;
    }
    else
    {
        return;
    }

    FUNC_1( VAR_5, VAR_17, VAR_6, VAR_7, VAR_8 );
}
