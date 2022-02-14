
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int name_length; int statusmessage_length; int dht; } ;
typedef TYPE_1__ Messenger ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

uint32_t FUNC_3(const Messenger *VAR_5)
{
    uint32_t VAR_6 = sizeof(uint32_t), VAR_7 = VAR_6 * 2;
    return VAR_6 * 2
             + VAR_7 + sizeof(uint32_t) + VAR_3 + VAR_4
             + VAR_7 + FUNC_0(VAR_5->dht)
             + VAR_7 + FUNC_2(VAR_5)
             + VAR_7 + VAR_5->name_length
             + VAR_7 + VAR_5->statusmessage_length
             + VAR_7 + 1
             + VAR_7 + VAR_1 * FUNC_1(VAR_2)
             + VAR_7 + VAR_0 * FUNC_1(VAR_2)
             + VAR_7;
}
