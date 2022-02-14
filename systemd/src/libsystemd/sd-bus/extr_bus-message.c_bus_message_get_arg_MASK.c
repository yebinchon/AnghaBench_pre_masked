
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* sd_bus_message ;


 int VAR_0 ;
 int FUNC_0 (char,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const**,unsigned int,char*,int *) ;
 int FUNC_3 (char const**,char,char const**) ;

int FUNC_4(sd_bus_message *VAR_4, unsigned VAR_5, const char **VAR_6) {
        char VAR_7;
        int VAR_8;

        FUNC_1(VAR_4);
        FUNC_1(VAR_6);

        VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_7, ((void*)0));
        if (VAR_8 < 0)
                return VAR_8;

        if (!FUNC_0(VAR_7, VAR_3, VAR_1, VAR_2))
                return -VAR_0;

        return FUNC_3(VAR_4, VAR_7, VAR_6);
}
