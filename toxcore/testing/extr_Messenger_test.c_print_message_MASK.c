
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int Messenger ;


 int FUNC_0 (int *,int ,unsigned int,int *,int,int ) ;
 int FUNC_1 (char*,size_t,int ,int const*) ;

void FUNC_2(Messenger *VAR_0, uint32_t VAR_1, unsigned int VAR_2, const uint8_t *VAR_3, size_t VAR_4,
                   void *VAR_5)
{
    FUNC_1("Message with length %lu received from %u: %s \n", VAR_4, VAR_1, VAR_3);
    FUNC_0(VAR_0, VAR_1, VAR_2, (uint8_t *)"Test1", 6, 0);
}
