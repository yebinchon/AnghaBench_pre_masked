
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* request_address_string; int question_idna; int question_utf8; int request_address; int request_family; scalar_t__ request_address_valid; } ;
typedef TYPE_1__ DnsQuery ;


 char const* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char const**) ;

const char *FUNC_2(DnsQuery *VAR_0) {
        const char *VAR_1;
        int VAR_2;



        if (VAR_0->request_address_string)
                return VAR_0->request_address_string;

        if (VAR_0->request_address_valid) {
                VAR_2 = FUNC_1(VAR_0->request_family, &VAR_0->request_address, &VAR_0->request_address_string);
                if (VAR_2 >= 0)
                        return VAR_0->request_address_string;
        }

        VAR_1 = FUNC_0(VAR_0->question_utf8);
        if (VAR_1)
                return VAR_1;

        return FUNC_0(VAR_0->question_idna);
}
