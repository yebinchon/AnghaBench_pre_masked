
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MHD_Connection {size_t mode; } ;
typedef struct MHD_Connection RequestMeta ;


 int VAR_0 ;
 char* FUNC_0 (struct MHD_Connection*,int ,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct MHD_Connection*) ;
 int * VAR_6 ;
 scalar_t__ FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(
                RequestMeta *VAR_7,
                struct MHD_Connection *VAR_8) {

        const char *VAR_9;

        FUNC_1(VAR_7);
        FUNC_1(VAR_8);

        VAR_9 = FUNC_0(VAR_8, VAR_0, "Accept");
        if (!VAR_9)
                return 0;

        if (FUNC_2(VAR_9, VAR_6[VAR_2]))
                VAR_7->mode = VAR_2;
        else if (FUNC_2(VAR_9, VAR_6[VAR_4]))
                VAR_7->mode = VAR_4;
        else if (FUNC_2(VAR_9, VAR_6[VAR_3]))
                VAR_7->mode = VAR_3;
        else if (FUNC_2(VAR_9, VAR_6[VAR_1]))
                VAR_7->mode = VAR_1;
        else
                VAR_7->mode = VAR_5;

        return 0;
}
