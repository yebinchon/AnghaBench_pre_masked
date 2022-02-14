
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef long uint32_t ;
typedef int Tox ;
typedef int TOX_ERR_FILE_SEND ;
typedef int Messenger ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 long FUNC_1 (int *,long,long,int ,int const*,int const*,size_t) ;
 int FUNC_2 (int *) ;

uint32_t FUNC_3(Tox *VAR_8, uint32_t VAR_9, uint32_t VAR_10, uint64_t VAR_11, const uint8_t *VAR_12,
                       const uint8_t *VAR_13, size_t VAR_14, TOX_ERR_FILE_SEND *VAR_15)
{
    if (VAR_14 && !VAR_13) {
        FUNC_0(VAR_15, VAR_4);
        return VAR_7;
    }

    uint8_t VAR_16[VAR_0];

    if (!VAR_12) {

        FUNC_2(VAR_16);
        VAR_12 = VAR_16;
    }

    Messenger *VAR_17 = VAR_8;
    long int VAR_18 = FUNC_1(VAR_17, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

    if (VAR_18 >= 0) {
        FUNC_0(VAR_15, VAR_5);
        return VAR_18;
    }

    switch (VAR_18) {
        case -1:
            FUNC_0(VAR_15, VAR_2);
            return VAR_7;

        case -2:
            FUNC_0(VAR_15, VAR_3);
            return VAR_7;

        case -3:
            FUNC_0(VAR_15, VAR_6);
            return VAR_7;

        case -4:
            FUNC_0(VAR_15, VAR_1);
            return VAR_7;
    }


    return VAR_7;
}
