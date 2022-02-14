
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MHD_Connection {int argument_parse_error; } ;
typedef struct MHD_Connection RequestMeta ;


 int VAR_0 ;
 int FUNC_0 (struct MHD_Connection*,int ,int ,struct MHD_Connection*) ;
 int FUNC_1 (struct MHD_Connection*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(
                RequestMeta *VAR_2,
                struct MHD_Connection *VAR_3) {

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        VAR_2->argument_parse_error = 0;
        FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);

        return VAR_2->argument_parse_error;
}
