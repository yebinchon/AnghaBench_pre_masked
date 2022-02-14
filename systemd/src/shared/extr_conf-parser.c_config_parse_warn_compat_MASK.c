
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Disabled ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;

int FUNC_1(
                const char *VAR_2,
                const char *VAR_3,
                unsigned VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                int VAR_8,
                const char *VAR_9,
                void *VAR_10,
                void *VAR_11) {

        Disabled VAR_12 = VAR_8;

        switch(VAR_12) {

        case 130:
                FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4, 0,
                           "Support for option %s= has been disabled at compile time and it is ignored", VAR_7);
                break;

        case 128:
                FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4, 0,
                           "Support for option %s= has been removed and it is ignored", VAR_7);
                break;

        case 129:
                FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4, 0,
                           "Support for option %s= has not yet been enabled and it is ignored", VAR_7);
                break;
        }

        return 0;
}
