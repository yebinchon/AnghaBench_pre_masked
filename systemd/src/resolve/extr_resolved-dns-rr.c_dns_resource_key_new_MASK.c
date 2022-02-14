
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_4__ {int n_ref; void* type; void* class; } ;
typedef TYPE_1__ DnsResourceKey ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 size_t FUNC_3 (char const*) ;

DnsResourceKey* FUNC_4(uint16_t VAR_0, uint16_t VAR_1, const char *VAR_2) {
        DnsResourceKey *VAR_3;
        size_t VAR_4;

        FUNC_0(VAR_2);

        VAR_4 = FUNC_3(VAR_2);
        VAR_3 = FUNC_1(sizeof(DnsResourceKey) + VAR_4 + 1);
        if (!VAR_3)
                return ((void*)0);

        VAR_3->n_ref = 1;
        VAR_3->class = VAR_0;
        VAR_3->type = VAR_1;

        FUNC_2((char*) VAR_3 + sizeof(DnsResourceKey), VAR_2);

        return VAR_3;
}
