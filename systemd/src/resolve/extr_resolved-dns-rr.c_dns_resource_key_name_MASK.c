
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* _name; } ;
typedef TYPE_1__ DnsResourceKey ;


 scalar_t__ FUNC_0 (char const*) ;

const char* FUNC_1(const DnsResourceKey *VAR_0) {
        const char *VAR_1;

        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->_name)
                VAR_1 = VAR_0->_name;
        else
                VAR_1 = (char*) VAR_0 + sizeof(DnsResourceKey);

        if (FUNC_0(VAR_1))
                return ".";
        else
                return VAR_1;
}
