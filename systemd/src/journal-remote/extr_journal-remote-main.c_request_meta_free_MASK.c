
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MHD_Connection {int dummy; } ;
typedef enum MHD_RequestTerminationCode { ____Placeholder_MHD_RequestTerminationCode } MHD_RequestTerminationCode ;
typedef int RemoteSource ;


 int FUNC_0 (void**) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0,
                              struct MHD_Connection *VAR_1,
                              void **VAR_2,
                              enum MHD_RequestTerminationCode VAR_3) {
        RemoteSource *VAR_4;

        FUNC_0(VAR_2);
        VAR_4 = *VAR_2;

        if (VAR_4) {
                FUNC_1("Cleaning up connection metadata %p", VAR_4);
                FUNC_2(VAR_4);
                *VAR_2 = ((void*)0);
        }
}
