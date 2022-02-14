
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
typedef int NTSTATUS ;
typedef int HCRYPTPROV ;
typedef int BCRYPT_ALG_HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,size_t,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int ) ;
 int FUNC_5 (int ,size_t,void*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,unsigned int*,int) ;
 unsigned int FUNC_8 () ;

void FUNC_9 (void *VAR_5, size_t VAR_6)
{
    size_t VAR_7 = VAR_6;
    uint8_t *VAR_8 = (uint8_t *)VAR_5;


    while (VAR_7 > 0)
    {
        unsigned int VAR_9;
        VAR_9 = FUNC_8();
        if (VAR_7 < sizeof (VAR_9))
        {
            FUNC_7 (VAR_8, &VAR_9, VAR_7);
            break;
        }

        FUNC_7 (VAR_8, &VAR_9, sizeof (VAR_9));
        VAR_7 -= sizeof (VAR_9);
        VAR_8 += sizeof (VAR_9);
    }

    HCRYPTPROV VAR_10;

    if( FUNC_4(
        &VAR_10,
        ((void*)0),
        VAR_2,
        VAR_4,
        VAR_1) )
    {


        FUNC_5(VAR_10, VAR_6, VAR_5);
        FUNC_6(VAR_10, 0);
    }

}
