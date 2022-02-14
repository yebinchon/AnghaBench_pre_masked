
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns_type_name {int id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 struct dns_type_name* FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,unsigned int*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_2) {
        const struct dns_type_name *VAR_3;

        FUNC_0(VAR_2);

        VAR_3 = FUNC_1(VAR_2, FUNC_4(VAR_2));
        if (VAR_3)
                return VAR_3->id;

        VAR_2 = FUNC_3(VAR_2, "TYPE");
        if (VAR_2) {
                unsigned VAR_4;

                if (FUNC_2(VAR_2, &VAR_4) >= 0 &&
                    VAR_4 <= VAR_0)
                        return (int) VAR_4;
        }

        return VAR_1;
}
