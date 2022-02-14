
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MHD_Connection {int dummy; } ;
typedef enum MHD_RequestTerminationCode { ____Placeholder_MHD_RequestTerminationCode } MHD_RequestTerminationCode ;


 int VAR_0 ;
 int FUNC_0 (struct MHD_Connection*,int,char const*,scalar_t__,int ) ;
 char* FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(struct MHD_Connection *VAR_1,
                enum MHD_RequestTerminationCode VAR_2,
                const char *VAR_3) {

        const char *VAR_4;

        VAR_4 = FUNC_1(VAR_3, "\n");

        return FUNC_0(VAR_1, VAR_2,
                                    VAR_4, FUNC_2(VAR_3) + 1,
                                    VAR_0);
}
